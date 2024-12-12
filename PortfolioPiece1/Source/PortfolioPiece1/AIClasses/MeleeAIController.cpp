// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AMeleeAIController::AMeleeAIController() // cant use "NewObject" in constructor? 
{
	
}

UBehaviorTree* AMeleeAIController::CreateBehaviorTree()
{
	UBehaviorTree* BehaviorT = NewObject<UBehaviorTree>();

	//Set all blackboard keys required
	UBlackboardComponent* BlackboardComponent = NewObject<UBlackboardComponent>();
	//Set blackboard data
	BehaviorT->BlackboardAsset = BlackboardComponent->GetBlackboardAsset();
	//Define root node
	UBTCompositeNode* RootNode = NewObject<UBTCompositeNode>(BehaviorTree, UBTCompositeNode::StaticClass());
	BehaviorT->RootNode = RootNode;

	return BehaviorT;
}

void AMeleeAIController::BeginPlay()
{
	Super::BeginPlay();
	BehaviorTree = CreateBehaviorTree(); // need to start using this blackboard & behavior tree
}




