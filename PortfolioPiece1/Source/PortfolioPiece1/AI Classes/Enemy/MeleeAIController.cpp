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
#include "BehaviorTree/Composites/BTComposite_SimpleParallel.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "PortfolioPiece1/AI Tasks/Enemy/AttackPlayer.h"
#include "PortfolioPiece1/AI Decorators/BTDecorator_IsAgressive.h"
#include "PortfolioPiece1/AI Decorators/BTDecorator_TakeToken.h"
#include "PortfolioPiece1/AI Tasks/Enemy/IdleTask.h"
#include "PortfolioPiece1/AI Tasks/Enemy/MoveToPlayer.h"
#include "PortfolioPiece1/AI Tasks/Enemy/RandomRoamTask.h"
#include "PortfolioPiece1/AI Tasks/Enemy/TokenCheckTask.h"

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

	FBlackboardEntry TokenAvailable;
	TokenAvailable.EntryName = "Tokens Available";
	TokenAvailable.KeyType = NewObject<UBlackboardKeyType_Bool>();
	BlackboardComponent->Keys.Add(TokenAvailable);

	FBlackboardEntry HoldingToken;
	HoldingToken.EntryName = "Holding Token";
	HoldingToken.KeyType = NewObject<UBlackboardKeyType_Bool>();
	BlackboardComponent->Keys.Add(HoldingToken);
	
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

		UAttackPlayer* AttackTask = NewObject<UAttackPlayer>(BehaviorTree);
		FBTCompositeChild AttackTaskCompChild;
		AttackTaskCompChild.ChildTask = AttackTask;

		UIdleTask* IdleTask = NewObject<UIdleTask>(BehaviorTree);
		FBTCompositeChild IdleTaskCompChild;
		IdleTaskCompChild.ChildTask = IdleTask;

		URandomRoamTask* RoamTask = NewObject<URandomRoamTask>(BehaviorTree);
		FBTCompositeChild RandomRoamTaskCompChild;
		RandomRoamTaskCompChild.ChildTask = RoamTask;

		UTokenCheckTask* TokenCheckTask = NewObject<UTokenCheckTask>(BehaviorTree);
		FBTCompositeChild TokenCheckTaskCompChild;
		TokenCheckTaskCompChild.ChildTask = TokenCheckTask;

		//Create decorators
		UBTDecorator_IsAgressive* isNotAgressiveDecorator = NewObject<UBTDecorator_IsAgressive>(BehaviorTree);
		isNotAgressiveDecorator->conditionToCheck = false;
		
		UBTDecorator_IsAgressive* isAgressiveDecorator = NewObject<UBTDecorator_IsAgressive>(BehaviorTree);
		isAgressiveDecorator->conditionToCheck = true;

		UBTDecorator_TakeToken* takeTokenDecorator = NewObject<UBTDecorator_TakeToken>(BehaviorTree);
		takeTokenDecorator->amount = 1;

		//Create nodes, connect them & add decorators
		UBTComposite_Sequence* AttackSequence = NewObject<UBTComposite_Sequence>(BehaviorTree);
		AttackSequence->Children.Add(MoveToCompChild);
		AttackSequence->Children.Add(AttackTaskCompChild);
		FBTCompositeChild AttackSequenceCompChild;
		AttackSequenceCompChild.Decorators.Add(takeTokenDecorator);
		AttackSequenceCompChild.ChildComposite = AttackSequence;

		UBTComposite_Selector* AttackSelector = NewObject<UBTComposite_Selector>(BehaviorTree);
		AttackSelector->Children.Add(AttackSequenceCompChild);
		FBTCompositeChild AttackSelectorCompChild;
		AttackSelectorCompChild.Decorators.Add(isAgressiveDecorator);
		AttackSelectorCompChild.ChildComposite = AttackSelector;
		
		UBTComposite_Selector* IdleBehaviourSelector = NewObject<UBTComposite_Selector>(BehaviorTree);
		IdleBehaviourSelector->Children.Add(RandomRoamTaskCompChild);
		IdleBehaviourSelector->Children.Add(IdleTaskCompChild);
		FBTCompositeChild IdleBehaviourSelectorCompChild;
		IdleBehaviourSelectorCompChild.Decorators.Add(isNotAgressiveDecorator);
		IdleBehaviourSelectorCompChild.ChildComposite = IdleBehaviourSelector;

		UBTComposite_Selector* BranchSelector = NewObject<UBTComposite_Selector>(BehaviorTree);
		BranchSelector->Children.Add(IdleBehaviourSelectorCompChild);
		BranchSelector->Children.Add(AttackSelectorCompChild);
		FBTCompositeChild BranchSelectorCompChild;
		BranchSelectorCompChild.ChildComposite = BranchSelector;
		
		//Add Nodes to root
		RootNode->Children.Add(TokenCheckTaskCompChild);
		RootNode->Children.Add(BranchSelectorCompChild);
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
	BlackBoardComp->SetValueAsBool("Tokens Available", selfRef->hasTokensToAttack);
	BlackBoardComp->SetValueAsBool("Holding Token", selfRef->isHoldingToken);
}




