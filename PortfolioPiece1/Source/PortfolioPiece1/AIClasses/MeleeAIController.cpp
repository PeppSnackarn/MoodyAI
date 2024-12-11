// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AMeleeAIController::AMeleeAIController()
{
	BlackboardComponent = NewObject<UBlackboardComponent>(this);
	BehaviorTree = NewObject<UBehaviorTree>(this);
}

void AMeleeAIController::BeginPlay()
{
	Super::BeginPlay();
}




