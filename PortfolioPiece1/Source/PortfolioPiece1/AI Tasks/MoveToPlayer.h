// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MoveToPlayer.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UMoveToPlayer : public UBTTaskNode
{
	GENERATED_BODY()
	UMoveToPlayer();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
