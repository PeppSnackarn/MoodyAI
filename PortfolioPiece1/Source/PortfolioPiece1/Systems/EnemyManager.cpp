// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"
#include "PortfolioPiece1/AI Classes/AIBaseClass.h"
#include "Kismet/GameplayStatics.h"

AEnemyManager::AEnemyManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();
	FindAllEnemies();
}

void AEnemyManager::FindAllEnemies()
{
	enemies.Empty();
	TSubclassOf<AAIBaseClass> EnemyClass;
	EnemyClass = AAIBaseClass::StaticClass();
	TArray<AActor*> foundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), EnemyClass, foundActors);

	for (AActor* Actor : foundActors)
	{
		UE_LOG(LogTemp, Log, TEXT("FOUND A ACTOR"))
		if(AAIBaseClass* enemy = Cast<AAIBaseClass>(Actor))
		{
			enemies.Add(enemy);
		}
	}
}

void AEnemyManager::AddEnemy(AAIBaseClass* AI)
{
	enemies.Add(AI);
}

void AEnemyManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UE_LOG(LogTemp, Log, TEXT("Amount of enemies = %i"), enemies.Num())
}
