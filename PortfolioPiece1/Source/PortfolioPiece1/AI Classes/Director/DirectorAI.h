
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DirectorAI.generated.h"


class UGameInst;
class AAIBaseClass;

UCLASS()
class PORTFOLIOPIECE1_API ADirectorAI : public ACharacter
{
	GENERATED_BODY()

public:
	ADirectorAI();

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

	//Enemy manager
public:
	UPROPERTY(EditDefaultsOnly)
	float maxNumberOfAgressiveEnemies = 3;
	UPROPERTY(VisibleAnywhere)
	float currentNumberOfAgressiveEnemies = 0;
private:
	TArray<AAIBaseClass*> enemies;
	TArray<TPair<AAIBaseClass*, float>> distancePairs;

protected:
	void FindAllEnemies();
	void SetAgressiveEnemies();

	//Token system
public:
	UPROPERTY(VisibleAnywhere)
	int AttackTokens = 2;
};
