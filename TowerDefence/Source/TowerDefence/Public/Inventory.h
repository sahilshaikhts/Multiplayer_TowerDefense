// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Inventory.generated.h"

UENUM(BlueprintType)
namespace MyEnums
{
	enum Item
	{
		troop_swordsMan = 0,
		troop_archer,
		tower_canon,
		tower_XBow,
		TypesCount,
		none
	};
}

UCLASS()
class TOWERDEFENCE_API AInventory : public AActor
{
	AInventory();
	GENERATED_BODY()
public:	
	

	bool isAttacker;

	TArray<int> ItemList;//ItemList's index are in order as the Enum Item,the value's of at each index defines quantity
	MyEnums::Item slectedItem;
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	void AddItem(MyEnums::Item type, int count);
	void RemoveItem(MyEnums::Item type, int count);

	void AddGold(int amount );//can be also used to deduct(-ve value in param)
	int GetGoldCount();

	UFUNCTION(BlueprintCallable)
		int GetItemCount(MyEnums::Item item);
	void RemoveItem(MyEnums::Item item);
private:
	int gold;
};
