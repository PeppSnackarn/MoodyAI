// Fill out your copyright notice in the Description page of Project Settings.


#include "RunEQSOpenSpace.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"

URunEQSOpenSpace::URunEQSOpenSpace()
{
	NodeName = "Run EQS open space";
	RunMode = EEnvQueryRunMode::SingleResult;
	EQSRequest.RunMode = EEnvQueryRunMode::SingleResult;
	BlackboardKey.AddVectorFilter(this, "EQS Open Location");
	QueryFinishedDelegate.BindUObject(this, &URunEQSOpenSpace::OnQueryFinished);
}

EBTNodeResult::Type URunEQSOpenSpace::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Blackboard = OwnerComp.GetBlackboardComponent();
	AIClass = Cast<AAIBaseClass>(OwnerComp.GetAIOwner()->GetPawn());
	if(AIClass)
	{
		EQSRequest.QueryTemplate = AIClass->OpenSpaceEQS;
		QueryTemplate = AIClass->OpenSpaceEQS;
	}
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	if(Result == EBTNodeResult::InProgress)
	{
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}

void URunEQSOpenSpace::OnQueryFinished(TSharedPtr<FEnvQueryResult> Result)
{
	Blackboard->SetValueAsVector("EQS Open Location", Result->GetItemAsLocation(0));
}
