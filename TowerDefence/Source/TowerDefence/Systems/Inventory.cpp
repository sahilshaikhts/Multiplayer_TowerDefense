// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "Item.h"
#include "Net/UnrealNetwork.h"

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
	selectedItem = MyEnums::Item::none;

	bAlwaysRelevant = true;
	SetReplicates(true);
}
void AInventory::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); DOREPLIFETIME(AInventory, gold);
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); DOREPLIFETIME(AInventory, ItemList);
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); DOREPLIFETIME(AInventory, selectedItem);
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
	if (ItemList[type] > count)
	ItemList[type] -= count;
	else
	ItemList[type]= 0;

}


void AInventory::ChangeSelectedItem(MyEnums::Item item)
{
	//Change selected unit for spawning
	selectedItem = item;
}


void AInventory::AddGold(int amount)
{
	//Also used to deduct gold,so only change when more than 0
	if(gold>0)
	gold += amount;
}

int AInventory::GetGoldCount()
{
	return gold;
}

int AInventory::GetItemCount(MyEnums::Item item)
{
	//Only return the value if the requested item are actual unit type and not other data
	if (item != MyEnums::Item::none && item!=MyEnums::Item::TypesCount)
		return ItemList[item];
	else
		return 0;
}
int AInventory::GetItemCountByIndex(int itemIndex)
{
	//Return Item count using int index ,for bluprint
	return ItemList[itemIndex];
}

void AInventory::RemoveItem(MyEnums::Item item)
{
	//Remove Item from inventory
	if(ItemList[item]>0)
	ItemList[item]-=1;
}