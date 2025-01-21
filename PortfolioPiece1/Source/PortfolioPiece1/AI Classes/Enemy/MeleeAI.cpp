
#include "MeleeAI.h"
#include "MeleeAIController.h"

AMeleeAI::AMeleeAI()
{
	AIControllerClass = AMeleeAIController::StaticClass();
}

void AMeleeAI::BeginPlay()
{
	Super::BeginPlay();
}
