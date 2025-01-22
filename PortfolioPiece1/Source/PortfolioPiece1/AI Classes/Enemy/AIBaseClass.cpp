#include "AIBaseClass.h"

#include "ToolBuilderUtil.h"
#include "Kismet/GameplayStatics.h"
#include "PortfolioPiece1/AI Classes/Director/DirectorAI.h"
#include "PortfolioPiece1/GameMode & Stuff/GameInst.h"


AAIBaseClass::AAIBaseClass()
{
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AAIBaseClass::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<UGameInst>(GetGameInstance());
	director = Cast<ADirectorAI>(UGameplayStatics::GetActorOfClass(GetWorld(), ADirectorAI::StaticClass()));
}

void AAIBaseClass::Move()
{
}

void AAIBaseClass::Attack()
{
}

void AAIBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAIBaseClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAIBaseClass::SetState(bool state)
{
	SetActorTickEnabled(state);
	SetActorEnableCollision(state);
	SetActorHiddenInGame(state);
}

