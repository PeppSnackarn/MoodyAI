
#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQuery.h"
#include "GameFramework/Character.h"
#include "AIBaseClass.generated.h"


class ADirectorAI;
class UHealthComponent;
class UHealthSystem;
class AAIController;
class UGameInst;

UCLASS(Abstract)
class PORTFOLIOPIECE1_API AAIBaseClass : public ACharacter
{
	GENERATED_BODY()

public:
	AAIBaseClass();

protected:
	virtual void BeginPlay() override;
	
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void SetState(bool state);
	UGameInst* GameInstance = nullptr;

public:
	UPROPERTY(VisibleAnywhere)
	bool agressive;
	UPROPERTY(VisibleAnywhere)
	bool hasSeenPlayer;
	UPROPERTY(VisibleAnywhere)
	bool hasTokensToAttack;
	UPROPERTY(VisibleAnywhere)
	bool isHoldingToken;
	ADirectorAI* director = nullptr;
	UPROPERTY(EditDefaultsOnly)
	UEnvQuery* OpenSpaceEQS;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* RedMat1;
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* RedMat2;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* YellowMat1;
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* YellowMat2;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* GreenMat1;
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* GreenMat2;
};
