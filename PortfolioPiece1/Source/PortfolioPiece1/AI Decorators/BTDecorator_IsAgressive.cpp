// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_IsAgressive.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsAgressive::UBTDecorator_IsAgressive()
{
	NodeName = "Agressive check";
	conditionToCheck = false;
	UE_LOG(LogTemp, Log, TEXT("Agressive check is created"))
}

bool UBTDecorator_IsAgressive::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	UE_LOG(LogTemp, Log, TEXT("Checking Agression"))

	bool agressive = blackboard->GetValueAsBool("Is Agressive");
	
	return (agressive == conditionToCheck);
}
