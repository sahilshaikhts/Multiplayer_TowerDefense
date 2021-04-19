// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Inventory.h"
#include "NetwPlayer.generated.h"

UCLASS()
class TOWERDEFENCE_API ANetwPlayer : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	ANetwPlayer();
	UPROPERTY(EditAnywhere)
		class UCameraComponent* camera;
	UPROPERTY(EditAnywhere)
		class USpringArmComponent* cameraSpring;
	UPROPERTY(EditAnywhere)
		TSubclassOf<AInventory> T_Inventory;

	//Tower class referencees
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATower_Canon> t_towerCanon;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATower_Chione> t_towerChione;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATower_XBow> t_towerXBow;

	//Troop class references
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATroop_melee> t_troopMelee;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATroop_Ranged> t_troopRanged;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AudioComponent")
		class UAudioComponent* AudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_SpawnRanged;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_SpawnMelee;

	
	UPROPERTY(replicated)
	bool isAttacking;//True: player is in attacking role ; False: player is in defensing role

	UFUNCTION(BlueprintCallable)
		class AInventory* GetInventory();

	void OnUnitKilled(MyEnums::Item unit);

	class AMyGameStateBase* gameState;

	void IncrementWonCount();
	void UpdateRoundScores();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class UWorld* world;
	
	UPROPERTY(replicated)
	int RoundsWon;
	UPROPERTY(replicated)
	int OpponentRoundsWon;

	UPROPERTY(replicated)
	class AInventory* inventory;

	void CheckIfInventoryEmpty();

	void SpawnItem(MyEnums::Item type, AActor* hitActor);

	UFUNCTION(Server, WithValidation, Reliable)
		void Server_AddToInventory(MyEnums::Item item, int cost);

	UFUNCTION(Server, Reliable)
		void Server_CreateInventory();

	UFUNCTION(Server, Reliable)
		void Server_ChangeSelectedItem(MyEnums::Item item);

	UFUNCTION(BlueprintCallable)
		void ChangeSelectedItem(MyEnums::Item item);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(Server, WithValidation, Reliable) 
		void Server_LeftMouseClick(FHitResult hitResult);
		void LeftMouseClick();
		
		void AddGold(int amount);
	UFUNCTION(BlueprintCallable)
	int GetCoins();
	UFUNCTION(BlueprintCallable)
		int GetWinCounts();
	UFUNCTION(BlueprintCallable)
		int GetOpponentRoundsWon();
	UFUNCTION(BlueprintCallable)
		void AddToInventory(MyEnums::Item item, int cost);
};
