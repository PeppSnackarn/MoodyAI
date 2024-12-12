// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MeleeAIController.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API AMeleeAIController : public AAIController
{
	GENERATED_BODY()
protected:
	AMeleeAIController();
	UBehaviorTree* CreateBehaviorTree();
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	UBehaviorTree* BehaviorTree = nullptr;
};
