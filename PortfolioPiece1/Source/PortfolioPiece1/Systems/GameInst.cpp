// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInst.h"

#include "AITokenSystem.h"

void UGameInst::Init()
{
	Super::Init();
	TokenSystem = NewObject<AAITokenSystem>(this, AAITokenSystem::StaticClass()); //Doesn't play its own beginplay & tick
	EnemyManager = NewObject<AEnemyManager>(this, AEnemyManager::StaticClass()); //Doesn't play its own beginplay & tick
}
