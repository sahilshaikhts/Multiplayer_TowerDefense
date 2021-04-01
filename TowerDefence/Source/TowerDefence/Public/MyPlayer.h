// Fill out your copyright notice in the Description page of Project Settings.
/**********************************************************
Team: No Name Yet

Section: 2

Author: Sahil Shaikh

Description: MyPlayer class handles player's input,it checks and spawn troops and tower and perform checks in inventory if the item is available or not.


************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Inventory.h"
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
		TSubclassOf<AInventory> T_Inventory;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATower_Canon> t_towerCanon;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATroop_melee> t_troopMelee;
	
UPROPERTY(EditAnywhere)
		TSubclassOf<class ATroopBase> t_troopRanged;

	bool isAttacking;//True: player is in attacking role ; False: player is in defensing role

	UFUNCTION(BlueprintCallable)
		class AInventory* GetInventory();

	void OnUnitKilled(MyEnums::Item unit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SpawnItem(MyEnums::Item type,AActor* hitActor);

	class UWorld* world;
	class AInventory* inventory;
	void SpawnItem(MyEnums::Item type, AActor* hitActor);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void LeftMouseClick();
};
