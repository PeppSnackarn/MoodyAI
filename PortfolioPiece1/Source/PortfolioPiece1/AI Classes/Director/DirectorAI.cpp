#include "DirectorAI.h"

#include "PortfolioPiece1/GameMode & Stuff/GameInst.h"
#include "Kismet/GameplayStatics.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"


ADirectorAI::ADirectorAI()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADirectorAI::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<UGameInst>(GetGameInstance());
	FindAllEnemies();
}

void ADirectorAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADirectorAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ADirectorAI::SetState(bool state)
{
	SetActorTickEnabled(state);
	SetActorEnableCollision(state);
	SetActorHiddenInGame(state);
}

void ADirectorAI::FindAllEnemies()
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

void ADirectorAI::SetAgressiveEnemies()
{
	//Clearing list
	for (auto enemy : distancePairs)
	{
		enemy.Key->agressive = false;
	}
	currentNumberOfAgressiveEnemies = 0;
	distancePairs.Empty();
	
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
	if(enemies.Num() >= maxNumberOfAgressiveEnemies)
	{
		for (int i = 0; i < maxNumberOfAgressiveEnemies; ++i)
		{
			distancePairs[i].Key->agressive = true;
			currentNumberOfAgressiveEnemies++;
		}
	}
	else // if less enemies than max amount of aggressive allowed
	{
		for (int i = 0; i < enemies.Num(); ++i)
		{
			distancePairs[i].Key->agressive = true;
			currentNumberOfAgressiveEnemies++;
		}
	}
}

bool ADirectorAI::RequestToken(int amount)
{
	if (AttackTokens - amount >= 0)
	{
		//Do attack
		AttackTokens -= amount;
		return true;
	}
	return false;
}

void ADirectorAI::ReleaseToken(int amount, float delay)
{
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, amount]() {AddToken(amount);}, delay, false);
	//Using a lambda to pass through the "amount" variable
}

void ADirectorAI::AddToken(int amount)
{
	AttackTokens += amount;
}

