// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RandomRoamTask.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API URandomRoamTask : public UBTTaskNode
{
	GENERATED_BODY()
	URandomRoamTask();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	float radius = 1500.f;
	
};
