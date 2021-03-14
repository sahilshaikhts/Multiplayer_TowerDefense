// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "ShopSystem.h"
AMyGameStateBase::AMyGameStateBase()
{
}
void AMyGameStateBase::BeginPlay()
{

	if (T_ShopSystem)
	{
		shopSystem = GetWorld()->SpawnActor<AShopSystem>(T_ShopSystem, FVector::ZeroVector, FRotator(0, 0, 0));
	}
	if (T_Inventory)
	{
		inventory = GetWorld()->SpawnActor<AInventory>(T_Inventory, FVector::ZeroVector, FRotator(0, 0, 0));
		if (shopSystem)
			shopSystem->inventory = inventory;
	}

	SwitchUI(0);
	inventory->AddGold(150);
}
void AMyGameStateBase::SwitchUI(int type)//0=Shop;1=Game+
{
	if (type == 0)//shop_attacker
	{
		shopSystem->SwitchUI(isAttacking ? 0 : 1);
	}
	if (type == 1)//Game
	{
		if(isAttacking)																	//}
			UI_Game = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_GameA);			//Temporary(Alot of the UI stuff is)
		else
			UI_Game = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_GameD);			//}
			UI_Game->AddToViewport();

		UI_Game->SetVisibility(ESlateVisibility::Visible);
		shopSystem->SwitchUI(-1);

	}
}

void AMyGameStateBase::RemoveFromInventory(MyEnums::Item item)
{
	if (inventory)
	{
		inventory->RemoveItem(item, 1);
	}
}