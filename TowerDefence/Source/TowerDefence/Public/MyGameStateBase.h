// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include"Inventory.h"
#include "MyGameStateBase.generated.h"


UCLASS()
	
class TOWERDEFENCE_API AMyGameStateBase : public AGameStateBase
{
	AMyGameStateBase();
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)//for debugging
		bool isAttacking;//True: player is in attacking role ; False: player is in defensing role

	UPROPERTY(EditAnywhere)
		TSubclassOf<AInventory> T_Inventory;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AShopSystem> T_ShopSystem;

	enum Item
	{
		troop_swordsMan = 0,
		troop_archer,
		tower_canon,
		tower_XBow,
	};

	
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_GameD;
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_GameA;

	AInventory* inventory;
	class AShopSystem* shopSystem;

	
	UFUNCTION(BlueprintCallable)
		void SwitchUI(int type);//change to enum later?
	
		void RemoveFromInventory(MyEnums::Item item);
protected:
	
	class UUserWidget* UI_Game;

	bool enableShop;//Temporary state check


};