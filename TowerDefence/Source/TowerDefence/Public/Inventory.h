/**********************************************************
Team: No Name Yet

Section: 2

Author: Seth Grinstead | Sahil Shaikh

Description:It keeps tracks of player�s bought items and player�s money. 
			It also provides functions to other classes such as shopsystem
			, player to add or remove a troop or tower from inventory.

************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Inventory.generated.h"

UENUM(BlueprintType)
namespace MyEnums	//Custom enums
{
	enum  Item					//Arranged according to how powerful(hp,attackRate,damge) the item is
	{
		troop_swordsMan = 0,
		troop_archer,
		tower_XBow,
		tower_canon,
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

	UPROPERTY( BlueprintReadWrite)
	TArray<int> ItemList;//ItemList's index are in order as the Enum Item,the value's of at each index defines quantity

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<MyEnums::Item> selectedItem;
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void AddItem(MyEnums::Item type, int count);//Add an item of a type
	void RemoveItem(MyEnums::Item type, int count);//Remove an item of a type

	void AddGold(int amount);//can be also used to deduct(-ve value in param)
	int GetGoldCount();

	UFUNCTION(BlueprintCallable)
		int GetItemCount(MyEnums::Item item); //Get number of items player have of a type
	UFUNCTION(BlueprintCallable)
		int GetItemCountByIndex(int itemIndex); //Get number of items player have of a type
	void RemoveItem(MyEnums::Item item);
private:
	int gold;
};
