// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EnemyManager.generated.h"

class AAIBaseClass;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIOPIECE1_API AEnemyManager : public AActor
{
	GENERATED_BODY()

public:	
	AEnemyManager();
	virtual void BeginPlay() override;

protected:
	void FindAllEnemies();
	void AddEnemy(AAIBaseClass* AI);

public:
	virtual void Tick(float DeltaSeconds) override;

private:
	TArray<AAIBaseClass*> enemies;
		
};
