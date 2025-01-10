// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyManager.h"
#include "Engine/GameInstance.h"
#include "GameInst.generated.h"

class AEnemyManager;
class AAITokenSystem;
/**
 * 
 */
UCLASS()
class PORTFOLIOPIECE1_API UGameInst : public UGameInstance
{
	GENERATED_BODY()
protected:
	virtual void Init() override;
private:
	AAITokenSystem* TokenSystem = nullptr;
	AEnemyManager* EnemyManager = nullptr;
public:
	inline AAITokenSystem* GetTokenSystem() const { return TokenSystem; }
	inline AEnemyManager* GetEnemyManager() const { return EnemyManager; }
};
