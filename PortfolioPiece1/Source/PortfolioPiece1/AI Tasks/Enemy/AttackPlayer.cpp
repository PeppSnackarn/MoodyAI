// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackPlayer.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "PortfolioPiece1/PortfolioPiece1Character.h"
#include "PortfolioPiece1/Systems/HealthComponent.h"

UAttackPlayer::UAttackPlayer()
{
	NodeName = "Attack player";
}

EBTNodeResult::Type UAttackPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	float dmg = 10.f;
	GEngine->AddOnScreenDebugMessage(0, 1, FColor::Blue, "Attack!", true);

	UObject* playerObj = Blackboard->GetValueAsObject("Player");
	APortfolioPiece1Character* player = Cast<APortfolioPiece1Character>(playerObj);
	if(player)
	{
		player->HealthComp->TakeDamage(dmg); // Is attacking every frame, give it a cooldown
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
