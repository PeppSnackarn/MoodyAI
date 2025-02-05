// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "RunEQSOpenSpace.generated.h"

class AAIBaseClass;
/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API URunEQSOpenSpace : public UBTTask_RunEQSQuery
{
	GENERATED_BODY()
	URunEQSOpenSpace();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	void OnQueryFinished(TSharedPtr<FEnvQueryResult> Result);
private:
	UBlackboardComponent* Blackboard;

public:
	FBlackboardKeySelector KeySelector;
	AAIBaseClass* AIClass;
};
