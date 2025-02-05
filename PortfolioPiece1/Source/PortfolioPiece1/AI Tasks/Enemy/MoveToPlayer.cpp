// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveToPlayer.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UMoveToPlayer::UMoveToPlayer()
{
	NodeName = "Move to Player";
}

EBTNodeResult::Type UMoveToPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	float acceptanceRadius = 50.f;
	GEngine->AddOnScreenDebugMessage(0, 1, FColor::Red, "Attemping Move", true);

	if(AIController && Blackboard)
	{
		FVector PlayerLocation = Blackboard->GetValueAsVector("Player Location");
		FVector AILocation = OwnerComp.GetAIOwner()->GetCharacter()->GetActorLocation();
		AIController->MoveToLocation(PlayerLocation, acceptanceRadius, true, true, true, false, 0, true);
		UE_LOG(LogTemp, Log, TEXT("Moving towards player"))
		
		if(FVector::Distance(AILocation, PlayerLocation) <= acceptanceRadius+40.f) // Acceptance radius and actual distance to target is not aligning correctly (shifting about + 35-38 units)
		{
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
