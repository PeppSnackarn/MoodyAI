// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAIController.h"

#include "AIBaseClass.h"
#include "DetourCrowdAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "PortfolioPiece1/AI Tasks/Enemy/AttackPlayer.h"
#include "PortfolioPiece1/AI Decorators/BTDecorator_CheckBool.h"
#include "PortfolioPiece1/AI Decorators/BTDecorator_TakeToken.h"
#include "PortfolioPiece1/AI Tasks/Enemy/GoToBlackboardVector.h"
#include "PortfolioPiece1/AI Tasks/Enemy/MoveToPlayer.h"
#include "PortfolioPiece1/AI Tasks/Enemy/RandomRoamTask.h"
#include "PortfolioPiece1/AI Tasks/Enemy/RunEQSOpenSpace.h"
#include "PortfolioPiece1/AI Tasks/Enemy/TokenCheckTask.h"


AMeleeAIController::AMeleeAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	
}

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

	FBlackboardEntry EQSOpenLocation;
	EQSOpenLocation.EntryName = "EQS Open Location";
	EQSOpenLocation.KeyType = NewObject<UBlackboardKeyType_Vector>();
	BlackboardComponent->Keys.Add(EQSOpenLocation);
	
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

		URandomRoamTask* RoamTask = NewObject<URandomRoamTask>(BehaviorTree);
		FBTCompositeChild RandomRoamTaskCompChild;
		RandomRoamTaskCompChild.ChildTask = RoamTask;

		UBTTask_Wait* WaitTask = NewObject<UBTTask_Wait>(BehaviorTree);
		WaitTask->WaitTime = 2.f;
		FBTCompositeChild WaitTaskCompChild;
		WaitTaskCompChild.ChildTask = WaitTask;

		UTokenCheckTask* TokenCheckTask = NewObject<UTokenCheckTask>(BehaviorTree);
		FBTCompositeChild TokenCheckTaskCompChild;
		TokenCheckTaskCompChild.ChildTask = TokenCheckTask;

		URunEQSOpenSpace* EQSOpenSpaceTask = NewObject<URunEQSOpenSpace>(BehaviorTree);
		FBTCompositeChild EQSOpenSpaceCompChild;
		EQSOpenSpaceCompChild.ChildTask = EQSOpenSpaceTask;

		UGoToBlackboardVector* GoToEQSOpenTask = NewObject<UGoToBlackboardVector>(BehaviorTree);
		GoToEQSOpenTask->BBVectorName = "EQS Open Location";
		FBTCompositeChild GoToEQSOpenCompChild;
		GoToEQSOpenCompChild.ChildTask = GoToEQSOpenTask;

		//Create decorators
		UBT_CheckBool* isNotAgressiveDecorator = NewObject<UBT_CheckBool>(BehaviorTree);
		isNotAgressiveDecorator->BoolToCheck = FString("Is Agressive");
		isNotAgressiveDecorator->conditionToCheck = false;
		
		UBT_CheckBool* isAgressiveDecorator = NewObject<UBT_CheckBool>(BehaviorTree);
		isNotAgressiveDecorator->BoolToCheck = FString("Is Agressive");
		isAgressiveDecorator->conditionToCheck = true;

		UBTDecorator_TakeToken* takeTokenDecorator = NewObject<UBTDecorator_TakeToken>(BehaviorTree);
		takeTokenDecorator->amount = 1;

		UBT_CheckBool* doesNotHaveToken = NewObject<UBT_CheckBool>(BehaviorTree);
		doesNotHaveToken->BoolToCheck = FString("Holding Token");
		doesNotHaveToken->conditionToCheck = false;
		

		//Create nodes, connect them & add decorators
		UBTComposite_Sequence* AttackSequence = NewObject<UBTComposite_Sequence>(BehaviorTree);
		AttackSequence->Children.Add(MoveToCompChild);
		AttackSequence->Children.Add(AttackTaskCompChild);
		FBTCompositeChild AttackSequenceCompChild;
		AttackSequenceCompChild.Decorators.Add(takeTokenDecorator);
		AttackSequenceCompChild.ChildComposite = AttackSequence;

		UBTComposite_Sequence* NoTokenAtkSequence = NewObject<UBTComposite_Sequence>(BehaviorTree);
		NoTokenAtkSequence->Children.Add(EQSOpenSpaceCompChild);
		NoTokenAtkSequence->Children.Add(GoToEQSOpenCompChild);
		FBTCompositeChild NoTokenAtkSequenceCompChild;
		NoTokenAtkSequenceCompChild.Decorators.Add(doesNotHaveToken);
		NoTokenAtkSequenceCompChild.ChildComposite = NoTokenAtkSequence;

		UBTComposite_Sequence* RandomRoamSequence = NewObject<UBTComposite_Sequence>(BehaviorTree);
		RandomRoamSequence->Children.Add(RandomRoamTaskCompChild);
		RandomRoamSequence->Children.Add(WaitTaskCompChild);
		FBTCompositeChild RandomRoamSequenceCompChild;
		RandomRoamSequenceCompChild.ChildComposite = RandomRoamSequence;

		UBTComposite_Selector* AttackSelector = NewObject<UBTComposite_Selector>(BehaviorTree);
		AttackSelector->Children.Add(AttackSequenceCompChild);
		AttackSelector->Children.Add(NoTokenAtkSequenceCompChild);
		FBTCompositeChild AttackSelectorCompChild;
		AttackSelectorCompChild.Decorators.Add(isAgressiveDecorator);
		AttackSelectorCompChild.ChildComposite = AttackSelector;
		
		UBTComposite_Selector* IdleBehaviourSelector = NewObject<UBTComposite_Selector>(BehaviorTree);
		IdleBehaviourSelector->Children.Add(RandomRoamSequenceCompChild);
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
		BlackBoardComp->SetValueAsVector("EQS Open Location", FVector(0,0,0));
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

	if(selfRef->agressive && !selfRef->isHoldingToken)
	{
		Cast<UCrowdFollowingComponent>(GetPathFollowingComponent())->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Medium);
	}
	else
	{
		Cast<UCrowdFollowingComponent>(GetPathFollowingComponent())->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low);
	}
}