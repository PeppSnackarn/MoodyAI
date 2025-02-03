// Fill out your copyright notice in the Description page of Project Settings.


#include "RunEQSOpenSpace.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"

URunEQSOpenSpace::URunEQSOpenSpace()
{
	NodeName = "Run EQS open space";
	RunMode = EEnvQueryRunMode::RandomBest5Pct;
	//BlackboardKey = KeySelector;
	BlackboardKey.AddVectorFilter(this, "EQS Open Location");
}

EBTNodeResult::Type URunEQSOpenSpace::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIClass = Cast<AAIBaseClass>(OwnerComp.GetAIOwner()->GetPawn());
	if(AIClass)
	{
		QueryTemplate = AIClass->OpenSpaceEQS;
	}
	if(QueryTemplate == nullptr) // Is not nullptr
	{
		UE_LOG(LogTemp, Log, TEXT("QUERY IS NULL"))
	}
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory); // QueryTemplate gets set to nullptr

	if(Result == EBTNodeResult::Succeeded)
	{
		UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
		if(Blackboard)
		{
			FVector EQSRes = Blackboard->GetValueAsVector(BlackboardKey.SelectedKeyName);

			Blackboard->SetValueAsVector("EQS Open Location", EQSRes);
		}
	}
	return Result;
} 
