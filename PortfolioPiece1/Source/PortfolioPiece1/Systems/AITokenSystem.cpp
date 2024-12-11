// Fill out your copyright notice in the Description page of Project Settings.


#include "AITokenSystem.h"

// Sets default values
AAITokenSystem::AAITokenSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAITokenSystem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAITokenSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAITokenSystem::RequestAction(int cost)
{
	if(TokenAllowed(cost))
	{
		CurrentTokens -= cost;
	}
}

bool AAITokenSystem::TokenAllowed(int cost)
{
	if(CurrentTokens - cost > 0)
	{
		return true;
	}
	return false;
}

