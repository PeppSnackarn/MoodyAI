// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_CheckBool.h"
#include "BehaviorTree/BlackboardComponent.h"

UBT_CheckBool::UBT_CheckBool()
{
	NodeName = "Bool Check";
	BoolToCheck = "DefaultKey";
	conditionToCheck = false;
}

bool UBT_CheckBool::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	bool agressive = false;
	if(blackboard)
	{
		agressive = blackboard->GetValueAsBool(FName(BoolToCheck));
	}
	return (agressive == conditionToCheck);
}
