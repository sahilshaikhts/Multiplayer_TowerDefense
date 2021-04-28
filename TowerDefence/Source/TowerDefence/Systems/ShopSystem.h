/**********************************************************
Team: No Name Yet

Section: 2

Author: Sahil Shaikh

Description:This handles the shop interface for players. It has blueprint functions that are triggered on the user interacting with the shop UI to purchase items.
		
************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Inventory.h"
#include "ShopSystem.generated.h"

UCLASS()
class TOWERDEFENCE_API AShopSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShopSystem();
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_AShop;
	UPROPERTY(EditAnywhere, Category = "HUD")
		TSubclassOf<class UUserWidget> t_UI_DShop;

	class AInventory* inventory;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class UUserWidget* UI_AShop;
	class UUserWidget* UI_DShop;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SwitchUI(int type);

	UFUNCTION(BlueprintCallable)
		int GetCoins();
	UFUNCTION(BlueprintCallable)
		void AddToInventory(MyEnums::Item item, int cost);
};
