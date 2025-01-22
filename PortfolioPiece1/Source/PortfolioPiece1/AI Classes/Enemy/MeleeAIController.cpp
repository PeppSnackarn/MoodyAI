// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAIController.h"

#include "AIBaseClass.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "PortfolioPiece1/AI Tasks/Enemy/AttackPlayer.h"
#include "PortfolioPiece1/AI Decorators/BTDecorator_IsAgressive.h"
#include "PortfolioPiece1/AI Tasks/Enemy/IdleTask.h"
#include "PortfolioPiece1/AI Tasks/Enemy/MoveToPlayer.h"

UBehaviorTree* AMeleeAIController::CreateBehaviorTree()
{
	UBehaviorTree* BehaviorT = NewObject<UBehaviorTree>();

	//Set all blackboard keys required
	UBlackboardData* BlackboardComponent = NewObject<UBlackboardData>();

	FBlackboardEntry PlayerRef;
	PlayerRef.EntryName = "Player";
	PlayerRef.KeyType = NewObject<UBlackboardKeyType_Object>();
	BlackboardComponent->Keys.Add(PlayerRef);

	FBlackboardEntry PlayerLocation;
	PlayerLocation.EntryName = "Player Location";
	PlayerLocation.KeyType = NewObject<UBlackboardKeyType_Vector>();
	BlackboardComponent->Keys.Add(PlayerLocation);

	FBlackboardEntry AgressiveState;
	AgressiveState.EntryName = "Is Agressive";
	AgressiveState.KeyType = NewObject<UBlackboardKeyType_Bool>();
	BlackboardComponent->Keys.Add(AgressiveState);
	
	//Set blackboard data
	BehaviorT->BlackboardAsset = BlackboardComponent;
	//Define root node
	UBTCompositeNode* RootNode = NewObject<UBTComposite_Sequence>(BehaviorT);
	BehaviorT->RootNode = RootNode;

	return BehaviorT;
}

void AMeleeAIController::AssembleBehaviorTree(UBehaviorTree* Tree)
{
	UBTCompositeNode* RootNode = Cast<UBTCompositeNode>(BehaviorTree->RootNode);
	if(RootNode)
	{
		//Create tasks
		UMoveToPlayer* MoveToTask = NewObject<UMoveToPlayer>(BehaviorTree);
		FBTCompositeChild MoveToCompChild;
		MoveToCompChild.ChildTask = MoveToTask;

		UIdleTask* IdleTask = NewObject<UIdleTask>(BehaviorTree);
		FBTCompositeChild IdleTaskCompChild;
		IdleTaskCompChild.ChildTask = IdleTask;

		UAttackPlayer* AttackTask = NewObject<UAttackPlayer>(BehaviorTree);
		FBTCompositeChild AttackTaskCompChild;
		AttackTaskCompChild.ChildTask = AttackTask;

		//Create Sequence & selector nodes
		UBTComposite_Sequence* Sequence = NewObject<UBTComposite_Sequence>(BehaviorTree);
		Sequence->Children.Add(MoveToCompChild);
		Sequence->Children.Add(AttackTaskCompChild);
		FBTCompositeChild Sequence1Node;
		Sequence1Node.ChildComposite = Sequence;

		//Create decorators
		UBTDecorator_IsAgressive* agressiveDecorator = NewObject<UBTDecorator_IsAgressive>(BehaviorTree);
		agressiveDecorator->conditionToCheck = true;
		
		//Add decorators to nodes
		Sequence1Node.Decorators.Add(agressiveDecorator);

		//Assemble Nodes
		RootNode->Children.Add(IdleTaskCompChild);
		RootNode->Children.Add(Sequence1Node);
	}
}

void AMeleeAIController::BeginPlay()
{
	Super::BeginPlay();
	selfRef = Cast<AAIBaseClass>(GetPawn());
	BehaviorTree = CreateBehaviorTree();
	AssembleBehaviorTree(BehaviorTree);
	if(BehaviorTree)
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, "Assigning BT", true);
		UseBlackboard(BehaviorTree->GetBlackboardAsset(), BlackBoardComp); // Uses the blackboarddata attached to the BT and creates a BBComp
		BlackBoardComp->SetValueAsObject("Player", UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
		BlackBoardComp->SetValueAsBool("Is Agressive", selfRef->agressive);
		RunBehaviorTree(BehaviorTree);
	}
}

void AMeleeAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	BlackBoardComp->SetValueAsVector("Player Location", UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation());
	BlackBoardComp->SetValueAsBool("Is Agressive", selfRef->agressive);
}




