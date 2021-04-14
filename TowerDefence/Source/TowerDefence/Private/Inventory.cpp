// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "Item.h"

// Sets default values
AInventory::AInventory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	selectedItem = MyEnums::Item::none;
	for (int i = 0; i < MyEnums::Item::TypesCount; i++)
	{
		ItemList.Add(0);
	}
	selectedItem = MyEnums::Item::troop_swordsMan;
}

// Called when the game starts or when spawned
void AInventory::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AInventory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInventory::AddItem(MyEnums::Item type,int count)
{
	ItemList[type] += count;
}


void AInventory::RemoveItem(MyEnums::Item type,int count)
{
	ItemList[type] -= count;
}

void AInventory::AddGold(int amount)
{
	gold += amount;
}

int AInventory::GetGoldCount()
{
	return gold;
}

int AInventory::GetItemCount(MyEnums::Item item)
{
	return ItemList[item];
}
int AInventory::GetItemCountByIndex(int itemIndex)
{
	return ItemList[itemIndex];
}

void AInventory::RemoveItem(MyEnums::Item item)
{
	ItemList[item]-=1;
}