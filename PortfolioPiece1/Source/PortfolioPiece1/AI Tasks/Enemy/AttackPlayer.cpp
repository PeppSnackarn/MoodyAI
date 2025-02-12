// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackPlayer.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PortfolioPiece1/PortfolioPiece1Character.h"
#include "PortfolioPiece1/AI Classes/Director/DirectorAI.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"
#include "PortfolioPiece1/Systems/HealthComponent.h"

UAttackPlayer::UAttackPlayer()
{
	NodeName = "Attack player";
}

EBTNodeResult::Type UAttackPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	AAIBaseClass* AIBase = Cast<AAIBaseClass>(AIController->GetPawn());

	if(AIBase->isHoldingToken)
	{
		UE_LOG(LogTemp, Log, TEXT("ATTACK ACTION STARTED"));
		UObject* playerObj = Blackboard->GetValueAsObject("Player");
		APortfolioPiece1Character* player = Cast<APortfolioPiece1Character>(playerObj);
		if(player)
		{
			player->HealthComp->TakeDamage(dmg);
			AIBase->director->ReleaseToken(1, 2);
			AIBase->isHoldingToken = false;
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
