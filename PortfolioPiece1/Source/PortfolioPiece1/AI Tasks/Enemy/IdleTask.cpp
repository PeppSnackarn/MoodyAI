// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleTask.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UIdleTask::UIdleTask()
{
	NodeName = "Patroll";
}

EBTNodeResult::Type UIdleTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	//Using EQS will try to find a position outside of view of player
	
	return EBTNodeResult::Failed;
}
