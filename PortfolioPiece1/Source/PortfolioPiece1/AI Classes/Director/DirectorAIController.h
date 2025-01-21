// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DirectorAIController.generated.h"

class ADirectorAI;
/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API ADirectorAIController : public AAIController
{
	GENERATED_BODY()
protected:
	UBehaviorTree* CreateBehaviorTree();
	void AssembleBehaviorTree(UBehaviorTree* Tree);
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY(VisibleAnywhere)
	UBehaviorTree* BehaviorTree = nullptr;
	UPROPERTY(VisibleAnywhere)
	UBlackboardComponent* BlackBoardComp = nullptr;
	ADirectorAI* selfRef = nullptr;
};
