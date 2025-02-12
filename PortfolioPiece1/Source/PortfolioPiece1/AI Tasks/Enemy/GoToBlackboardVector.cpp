// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToBlackboardVector.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/PathFollowingComponent.h"

UGoToBlackboardVector::UGoToBlackboardVector()
{
	NodeName = "Go towards blackboard point";
	BBVectorName = "DefaultKey";
	bNotifyTick = true;
}

EBTNodeResult::Type UGoToBlackboardVector::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Log, TEXT("Moving towards blackboard vector!"))
	AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	FVector BlackboardVector = Blackboard->GetValueAsVector(FName(BBVectorName));

	AIController->MoveToLocation(BlackboardVector);
	
	if(AIController->GetMoveStatus() == EPathFollowingStatus::Idle)
	{
		return EBTNodeResult::Succeeded;
	}
	if (!waitForReachPos)
	{
		return EBTNodeResult::Succeeded;
	}
	return  EBTNodeResult::InProgress;
}

void UGoToBlackboardVector::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if (waitForReachPos)
	{
		if(AIController->GetMoveStatus() == EPathFollowingStatus::Idle)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		}
	}
}
