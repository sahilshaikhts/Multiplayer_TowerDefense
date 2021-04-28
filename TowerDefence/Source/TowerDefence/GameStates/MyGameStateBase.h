/**********************************************************
Team: No Name Yet

Section: 2

Author: Seth Grinstead & Sahil Shaikh

Description:GameState is currently responsible to switch between UI widget based on current state of the game. 
			It tells ShopSystem to display which widget based on the player's role(attacking/defending).
			It is also intended to be used in future to handle match(start, win/loss conditions) related things when multiplayer is implemented.

**********************************************************/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include"TowerDefence/Systems/Inventory.h"
#include "MyGameStateBase.generated.h"

UENUM()
namespace MyStates
{
	enum GameState
	{
		UnInitialized=-1,
		Intermission,
		Paused,
		Play,
		GameOver,
	};
}

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdate);

UCLASS()
class TOWERDEFENCE_API AMyGameStateBase : public AGameStateBase
{
	AMyGameStateBase();
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;



	UPROPERTY(EditAnywhere)
		TSubclassOf<AInventory> T_Inventory;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AShopSystem> T_ShopSystem;
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ARewardSystem> T_RewardSystem;

	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_InGame;

		UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> T_UI_GameEnd;

	UPROPERTY(BlueprintAssignable)
		FOnInventoryUpdate OnInventoryUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AInventory* inventory;

	class ARewardSystem* rewardSystem;
	class AShopSystem* shopSystem;

	void SetInventory(AInventory* aInventory);
	UFUNCTION(BlueprintCallable)
		void SwitchUI(int type);//change to enum later?

	void SetGameState(MyStates::GameState state);
	MyStates::GameState GetGameState();
	void EndIntermission();
	void EndRound();
	void StartEndingRound(class ANetwPlayer* attacker);

	void RemoveFromInventory(MyEnums::Item item);

	int OnUnitKilled(MyEnums::Item unit);
	void RoundOver();

	UFUNCTION(Server, Reliable)
		void Server_DestroyAllUnits();
	UFUNCTION(Server, Reliable)
		void Server_AssignTeam(int roleIndex);
	bool AssignTeam();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Server, Reliable)
		void Server_ChangeState(int newState);

	bool bRoundOverStart = false;
	bool bIntermissionStart = false;
	bool bRoundStart = false;

	float IntermissionTimer = 3;

	FTimerHandle RoundTimerHandle;
	FTimerHandle IntermissionTimerHandle;

	UPROPERTY(replicated)
		int netwState;
	MyStates::GameState State;

	UPROPERTY(EditAnywhere)//for debugging
		bool isLocalRoleAttacking;//True: local player is in attacking role ; False: local player is in defensing role

	UPROPERTY(replicated, BlueprintReadOnly)
		int Round;
	UPROPERTY(replicated)
		int attackingTeam;
	UPROPERTY(replicated)
		int defendingTeam;

	//Audio
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AudioComponent")
		class UAudioComponent* AudioComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AudioComponent")
		class UAudioComponent* AudioComponent2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_RoundStart;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_Lose;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_Win;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_BattleMusic;

protected:

	class UUserWidget* UI_Game;
	class UUserWidget* UI_GameEnd;

	bool enableShop;//Temporary state check
	int score;

};