// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "PortfolioPiece1/MoveToPlayer.h"

UBehaviorTree* AMeleeAIController::CreateBehaviorTree()
{
	UBehaviorTree* BehaviorT = NewObject<UBehaviorTree>();

	//Set all blackboard keys required
	UBlackboardData* BlackboardComponent = NewObject<UBlackboardData>();

	FBlackboardEntry PlayerRef;
	PlayerRef.EntryName = "Player";
	PlayerRef.KeyType = NewObject<UBlackboardKeyType_Vector>();
	BlackboardComponent->Keys.Add(PlayerRef);
	
	//Set blackboard data
	BehaviorT->BlackboardAsset = BlackboardComponent;
	//Define root node
	UBTCompositeNode* RootNode = NewObject<UBTComposite_Selector>(BehaviorT);// ERROR
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

		//Attach to root
		RootNode->Children.Add(MoveToCompChild);

		//Add decorators to task
	}
}

void AMeleeAIController::BeginPlay()
{
	Super::BeginPlay();
	BehaviorTree = CreateBehaviorTree(); // ERROR
	AssembleBehaviorTree(BehaviorTree);
	if(BehaviorTree)
	{
		if(BehaviorTree->RootNode != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, "Has Root", true);
		}
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, "Assigning BT", true);
		UseBlackboard(BehaviorTree->GetBlackboardAsset(), BlackBoardComp); // Uses the blackboarddata attached to the BT and creates a BBComp
		BlackBoardComp->SetValueAsVector("Player", UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation());
		RunBehaviorTree(BehaviorTree);
	}
}

void AMeleeAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	BlackBoardComp->SetValueAsVector("Player", UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation());
}




