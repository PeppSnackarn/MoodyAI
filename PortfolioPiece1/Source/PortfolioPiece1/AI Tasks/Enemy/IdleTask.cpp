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
	//To be used when not set to be agressive but knows player location

	//Might want to create a opposite task to this one that will maneouver to areas that are close to the player and visible
	//To be used for moving without attack tokens
	
	UE_LOG(LogTemp, Log, TEXT("MISSING TASK INFO"))
	
	return EBTNodeResult::Failed;
}
