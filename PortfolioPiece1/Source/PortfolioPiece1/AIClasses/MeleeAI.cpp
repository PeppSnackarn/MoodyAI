
#include "MeleeAI.h"
#include "MeleeAIController.h"

void AMeleeAI::BeginPlay()
{
	Super::BeginPlay();
	AIControllerClass = AMeleeAIController::StaticClass();
}

void AMeleeAI::Move()
{
	Super::Move();
}
