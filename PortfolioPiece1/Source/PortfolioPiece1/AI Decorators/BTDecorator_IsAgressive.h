// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_IsAgressive.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UBTDecorator_IsAgressive : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBTDecorator_IsAgressive();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	

public:
	UPROPERTY(EditDefaultsOnly)
	bool conditionToCheck;
};
