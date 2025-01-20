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
	void SetAgressiveEnemies();

public:
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly)
	float maxNumberOfAgressiveEnemies = 3;

private:
	TArray<AAIBaseClass*> enemies;
	TArray<TPair<AAIBaseClass*, float>> distancePairs;
	UPROPERTY(VisibleAnywhere)
	float currentNumberOfAgressiveEnemies = 0;
		
};
