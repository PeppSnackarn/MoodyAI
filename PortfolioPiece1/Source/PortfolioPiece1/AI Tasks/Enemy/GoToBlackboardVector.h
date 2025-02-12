// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GoToBlackboardVector.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UGoToBlackboardVector : public UBTTaskNode
{
	GENERATED_BODY()
	UGoToBlackboardVector();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	AAIController* AIController = nullptr;

public:
	UPROPERTY()
	FString BBVectorName;

	bool waitForReachPos = false;
};
