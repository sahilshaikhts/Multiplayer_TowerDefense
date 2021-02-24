// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPlayer.generated.h"

UCLASS()
class TOWERDEFENCE_API AMyPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPlayer();
	UPROPERTY(EditAnywhere)
		class UCameraComponent* camera;
	UPROPERTY(EditAnywhere)
		class USpringArmComponent* cameraSpring;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATower_Canon> t_canonTower;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATroop_melee> t_troopMelee;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class UWorld* world;
	bool isAttaking;//True: player is in attacking role ; False: player is in defensing role
	void Attacker();
	void Defender();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void LeftMouseClick();
};
