// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInst.h"

#include "PortfolioPiece1/Systems/AITokenSystem.h"
#include "Kismet/GameplayStatics.h"

void UGameInst::Init()
{
	Super::Init();
	TokenSystem = NewObject<AAITokenSystem>(this, AAITokenSystem::StaticClass()); //Doesn't play its own beginplay & tick
	
}
