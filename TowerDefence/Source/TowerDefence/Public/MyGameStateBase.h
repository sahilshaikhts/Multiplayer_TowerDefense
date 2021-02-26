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

	UPROPERTY(EditAnywhere)
		TSubclassOf<AInventory> T_Inventory;

	enum Item
	{
		troop_swordsMan = 0,
		troop_archer,
		tower_canon,
		tower_XBow,
	};

	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_AShop;
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_DShop;
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_Game;

	AInventory* inventory;

	UFUNCTION(BlueprintCallable)
		int GetCoins();
	UFUNCTION(BlueprintCallable)
		void SwitchUI(int type);//change to enum later?
	UFUNCTION(BlueprintCallable)
		void AddToInventory(MyEnums::Item item,int cost);
		void RemoveFromInventory(MyEnums::Item item);
protected:
	class UUserWidget* UI_AShop;
	class UUserWidget* UI_DShop;
	class UUserWidget* UI_Game;

	bool enableShop;//Temporary state check


};