#include "AIBaseClass.h"
#include "PortfolioPiece1/Systems/GameInst.h"


AAIBaseClass::AAIBaseClass()
{
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AAIBaseClass::BeginPlay()
{
	Super::BeginPlay();
	GameInstance = Cast<UGameInst>(GetGameInstance());
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

