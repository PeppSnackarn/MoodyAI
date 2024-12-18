// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleTask.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UIdleTask::UIdleTask()
{
	NodeName = "Get player in range";
}

EBTNodeResult::Type UIdleTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if(FVector::Distance(AIController->GetCharacter()->GetActorLocation(), Blackboard->GetValueAsVector("Player Location")) < 1500)
	{
		GEngine->AddOnScreenDebugMessage(0, 1, FColor::Red, "In Range", false);
		return EBTNodeResult::Succeeded;
	}
	
	return EBTNodeResult::Failed;
}
