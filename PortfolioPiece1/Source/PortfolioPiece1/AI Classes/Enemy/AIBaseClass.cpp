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

void AAIBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(agressive && isHoldingToken)
	{
		//Red
		GetMesh()->SetMaterial(0, RedMat1);
		GetMesh()->SetMaterial(1, RedMat2);
	}
	else if(agressive && !isHoldingToken)
	{
		//Yellow
		GetMesh()->SetMaterial(0, YellowMat1);
		GetMesh()->SetMaterial(1, YellowMat2);
	}
	else
	{
		//Green
		GetMesh()->SetMaterial(0, GreenMat1);
		GetMesh()->SetMaterial(1, GreenMat2);
	}

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

