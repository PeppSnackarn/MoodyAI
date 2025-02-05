// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_CheckBool.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UBT_CheckBool : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBT_CheckBool();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	

public:
	UPROPERTY()
	FString BoolToCheck;
	
	bool conditionToCheck;
};
