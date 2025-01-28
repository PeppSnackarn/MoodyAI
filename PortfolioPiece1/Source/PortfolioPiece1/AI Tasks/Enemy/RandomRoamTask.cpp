// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomRoamTask.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"

URandomRoamTask::URandomRoamTask()
{
	NodeName = "Random roam";
	bNotifyTick = true;
}

EBTNodeResult::Type URandomRoamTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	FVector location = AIController->GetCharacter()->GetActorLocation();
	UNavigationSystemV1* navSystem = UNavigationSystemV1::GetCurrent(GetWorld());
	FNavLocation resultLocation;
	UE_LOG(LogTemp, Log, TEXT("Moving towards new random point!"))

	if(navSystem->GetRandomReachablePointInRadius(location, radius, resultLocation))
	{
		AIController->MoveToLocation(resultLocation);
		
		return EBTNodeResult::InProgress;
	}
	if(AIController->GetMoveStatus() == EPathFollowingStatus::Idle)
	{
		return EBTNodeResult::Succeeded;
	}
	return  EBTNodeResult::Failed;
}

void URandomRoamTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	UBTTaskNode::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if(AIController->GetMoveStatus() == EPathFollowingStatus::Idle)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
