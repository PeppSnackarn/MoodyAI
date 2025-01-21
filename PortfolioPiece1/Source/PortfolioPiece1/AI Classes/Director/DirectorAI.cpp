#include "DirectorAI.h"

#include "DirectorAIController.h"
#include "PortfolioPiece1/GameMode & Stuff/GameInst.h"
#include "Kismet/GameplayStatics.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"


ADirectorAI::ADirectorAI()
{
	PrimaryActorTick.bCanEverTick = true;
	AIControllerClass = ADirectorAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
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

void ADirectorAI::AddEnemy(AAIBaseClass* AI, FVector Location)
{
	enemies.Add(AI);
}

void ADirectorAI::SetAgressiveEnemies() // Right now is only adding nearby enemies to agressive list, REWORK LATER
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

