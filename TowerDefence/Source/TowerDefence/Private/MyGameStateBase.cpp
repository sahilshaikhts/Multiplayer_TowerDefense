// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"
#include "Blueprint/UserWidget.h"
#include "ShopSystem.h"
#include "RewardSystem.h"
AMyGameStateBase::AMyGameStateBase()
{
}
void AMyGameStateBase::BeginPlay()
{

	if (T_ShopSystem)
	{
		shopSystem = GetWorld()->SpawnActor<AShopSystem>(T_ShopSystem, FVector::ZeroVector, FRotator(0, 0, 0));
	}
	if (T_RewardSystem)
	{
		rewardSystem = GetWorld()->SpawnActor<ARewardSystem>(T_RewardSystem, FVector::ZeroVector, FRotator(0, 0, 0));
	}
	if (T_Inventory)
	{
		inventory = GetWorld()->SpawnActor<AInventory>(T_Inventory, FVector::ZeroVector, FRotator(0, 0, 0));
		if (shopSystem)
			shopSystem->inventory = inventory;
	}
	SwitchUI(0);
	inventory->AddGold(1000);
}

void AMyGameStateBase::SwitchUI(int type)//0=Shop;1=Game+
{
	if (type == 0)//shop_attacker
	{
		shopSystem->SwitchUI(isAttacking ? 0 : 1);
	}
	if (type == 1)//Game
	{
		UI_Game = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_InGame);			
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
		OnInventoryUpdated.Broadcast();
	}
}

void AMyGameStateBase::OnUnitKilled(MyEnums::Item unit)
{
	inventory->AddGold( rewardSystem->Reward_UnitKill(unit));
}
