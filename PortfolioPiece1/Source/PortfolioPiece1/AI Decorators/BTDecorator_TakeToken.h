// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_TakeToken.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UBTDecorator_TakeToken : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBTDecorator_TakeToken();
	UPROPERTY(EditDefaultsOnly)
	int amount = 0;

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
