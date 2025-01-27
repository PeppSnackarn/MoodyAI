// Fill out your copyright notice in the Description page of Project Settings.


#include "TokenCheckTask.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "PortfolioPiece1/AI Classes/Director/DirectorAI.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"

UTokenCheckTask::UTokenCheckTask()
{
	NodeName = "Token check";
}

EBTNodeResult::Type UTokenCheckTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	AAIBaseClass* AIClass = Cast<AAIBaseClass>(AIController->GetPawn());

	if(AIClass)
	{
		if(AIClass->director->AttackTokens >= 1)
		{
			AIClass->hasTokensToAttack = true;
		}
		else
		{
			AIClass->hasTokensToAttack = false;
		}
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
