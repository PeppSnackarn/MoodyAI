
#include "MeleeAIController.h"
#include "MeleeAI.h"

void AMeleeAI::BeginPlay()
{
	Super::BeginPlay();
	AIControllerClass = AMeleeAIController::StaticClass();
}

void AMeleeAI::Move()
{
	Super::Move();
}
