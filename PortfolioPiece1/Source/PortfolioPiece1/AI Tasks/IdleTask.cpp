// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleTask.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UIdleTask::UIdleTask()
{
	NodeName = "Move to Player";
}

EBTNodeResult::Type UIdleTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	
	return EBTNodeResult::Failed;
}
