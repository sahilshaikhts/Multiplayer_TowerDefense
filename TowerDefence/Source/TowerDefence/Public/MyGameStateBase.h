/**********************************************************
Team: No Name Yet

Section: 2

Author: Seth Grinstead

Description:GameState is currently responsible to switch between UI widget based on current state of the game. 
			It tells ShopSystem to display which widget based on the player's role(attacking/defending).
			It is also intended to be used in future to handle match(start, win/loss conditions) related things when multiplayer is implemented.
**********************************************************/

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
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ARewardSystem> T_RewardSystem;

	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_GameD;
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_GameA;

	AInventory* inventory;
	class ARewardSystem* rewardSystem;
	class AShopSystem* shopSystem;

	
	UFUNCTION(BlueprintCallable)
		void SwitchUI(int type);//change to enum later?
	
		void RemoveFromInventory(MyEnums::Item item);

		void OnUnitKilled(MyEnums::Item unit);
		void RoundOver();
protected:
	
	class UUserWidget* UI_Game;

	bool enableShop;//Temporary state check
	int score;

};