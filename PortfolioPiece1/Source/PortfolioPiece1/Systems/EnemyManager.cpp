// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"
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
	SetAgressiveEnemies();
}

void AEnemyManager::AddEnemy(AAIBaseClass* AI)
{
	enemies.Add(AI);
}

void AEnemyManager::SetAgressiveEnemies()
{
	//Clearing list
	
	//Adding members to pair list
	for (AAIBaseClass* enemy : enemies)
	{
		ACharacter* Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		float dist = FVector::Distance(Player->GetActorLocation(), enemy->GetActorLocation());
		distancePairs.Add(TPair<AAIBaseClass*, float>(enemy, dist));
	}

	//Sorting list
	distancePairs.Sort([](const TPair<AAIBaseClass*, float>& A, const TPair<AAIBaseClass*, float>& B)
	{
		return A.Value < B.Value;
	});

	//Setting agressive state for viable enemies
	for (int i = 0; i < maxNumberOfAgressiveEnemies; ++i)
	{
		distancePairs[i].Key->agressive = true;
		currentNumberOfAgressiveEnemies++;
	}

	//Setting non agressive state for non viable enemies
	
}

void AEnemyManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//UE_LOG(LogTemp, Log, TEXT("Amount of enemies = %i"), enemies.Num())
}
