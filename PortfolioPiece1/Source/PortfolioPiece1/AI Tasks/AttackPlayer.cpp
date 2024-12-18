// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackPlayer.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "PortfolioPiece1/Systems/HealthComponent.h"

UAttackPlayer::UAttackPlayer()
{
	NodeName = "Attack player";
}

EBTNodeResult::Type UAttackPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	GEngine->AddOnScreenDebugMessage(0, 1, FColor::Blue, "Attack!", true);

	return EBTNodeResult::Failed;
}
