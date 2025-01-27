// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_TakeToken.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PortfolioPiece1/AI Classes/Director/DirectorAI.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"

UBTDecorator_TakeToken::UBTDecorator_TakeToken()
{
	NodeName = "Token Holder";
}

bool UBTDecorator_TakeToken::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	AAIBaseClass* AIBase = Cast<AAIBaseClass>(AIController->GetPawn());

	if(AIBase->isHoldingToken)
	{
		return true;
	}

	if(AIBase->hasTokensToAttack && AIBase->director->RequestToken(amount))
	{
		AIBase->isHoldingToken = true;
		return true;
	}
	return false;
}
