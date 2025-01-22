// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TokenCheckTask.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UTokenCheckTask : public UBTTaskNode
{
	GENERATED_BODY()
	UTokenCheckTask();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
