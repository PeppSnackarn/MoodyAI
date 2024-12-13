// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIBaseClass.h"
#include "MeleeAI.generated.h"

class AAITokenSystem;
/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API AMeleeAI : public AAIBaseClass
{
	GENERATED_BODY()
	AMeleeAI();

	virtual void BeginPlay() override;
};
