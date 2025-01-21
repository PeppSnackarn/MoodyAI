// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorAIController.h"

#include "DirectorAI.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Composites/BTComposite_Selector.h"
#include "BehaviorTree/Composites/BTComposite_Sequence.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

UBehaviorTree* ADirectorAIController::CreateBehaviorTree()
{
	UBehaviorTree* BehaviorT = NewObject<UBehaviorTree>();

	//Set all blackboard keys required
	UBlackboardData* BlackboardComponent = NewObject<UBlackboardData>();

	FBlackboardEntry PlayerRef;
	PlayerRef.EntryName = "Player";
	PlayerRef.KeyType = NewObject<UBlackboardKeyType_Object>();
	BlackboardComponent->Keys.Add(PlayerRef);
	
	//Set blackboard data
	BehaviorT->BlackboardAsset = BlackboardComponent;
	//Define root node
	UBTCompositeNode* RootNode = NewObject<UBTComposite_Sequence>(BehaviorT);
	BehaviorT->RootNode = RootNode;

	return BehaviorT;
}

void ADirectorAIController::AssembleBehaviorTree(UBehaviorTree* Tree)
{
	UBTCompositeNode* RootNode = Cast<UBTCompositeNode>(BehaviorTree->RootNode);
	if(RootNode)
	{
		//Create tasks

		//Create Sequence & selector nodes
		UBTComposite_Sequence* Sequence = NewObject<UBTComposite_Sequence>(BehaviorTree);
		FBTCompositeChild Sequence1Node;
		Sequence1Node.ChildComposite = Sequence;

		//Create decorators
		
		//Add decorators to nodes

		//Assemble Nodes
		RootNode->Children.Add(Sequence1Node);
	}
}

void ADirectorAIController::BeginPlay()
{
	Super::BeginPlay();
	selfRef = Cast<ADirectorAI>(GetPawn());
	BehaviorTree = CreateBehaviorTree();
	AssembleBehaviorTree(BehaviorTree);
	if(BehaviorTree)
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, "Assigning BT", true);
		UseBlackboard(BehaviorTree->GetBlackboardAsset(), BlackBoardComp); // Uses the blackboarddata attached to the BT and creates a BBComp
		BlackBoardComp->SetValueAsObject("Player", UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
		RunBehaviorTree(BehaviorTree);
	}
}

void ADirectorAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	BlackBoardComp->SetValueAsVector("Player Location", UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation());
	BlackBoardComp->SetValueAsBool("Is Agressive", selfRef->agressive);
}




