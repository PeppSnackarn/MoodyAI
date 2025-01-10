
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIBaseClass.generated.h"


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
	virtual void Move();
	virtual void Attack();
	
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void SetState(bool state);
	UGameInst* GameInstance = nullptr;

public:
	UPROPERTY(VisibleAnywhere)
	bool agressive;

};
