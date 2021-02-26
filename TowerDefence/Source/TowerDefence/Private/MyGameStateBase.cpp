// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
AMyGameStateBase::AMyGameStateBase()
{
}
void AMyGameStateBase::BeginPlay()
{
	if (t_UI_AShop) {
		UI_AShop = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_AShop);
		UI_AShop->AddToViewport();
	}
	if (t_UI_DShop) {
		UI_DShop = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_DShop);
		UI_DShop->AddToViewport();
	}
	if (t_UI_Game) {
		UI_Game = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_Game);
		UI_Game->AddToViewport();
	}
	if (T_Inventory)
	{
		inventory=GetWorld()->SpawnActor<AInventory>(T_Inventory, FVector::ZeroVector, FRotator(0, 0, 0));
	}

	//Temporary
	UI_Game->SetVisibility(ESlateVisibility::Hidden);
	UI_AShop->SetVisibility(ESlateVisibility::Visible);
	UI_DShop->SetVisibility(ESlateVisibility::Hidden);
	inventory->AddGold(2000);
}
void AMyGameStateBase::SwitchUI(int type)
{
	if (type == 0)//shop_attacker
	{
		UI_Game->SetVisibility(ESlateVisibility::Hidden);
		UI_AShop->SetVisibility(ESlateVisibility::Visible);
		UI_DShop->SetVisibility(ESlateVisibility::Hidden);
	}
	if (type == 1)//shop_defender
	{
		UI_Game->SetVisibility(ESlateVisibility::Hidden);
		UI_AShop->SetVisibility(ESlateVisibility::Hidden);
		UI_DShop->SetVisibility(ESlateVisibility::Visible);
	}
	if (type == 2)//Game
	{
		UI_Game->SetVisibility(ESlateVisibility::Visible);
		UI_AShop->SetVisibility(ESlateVisibility::Hidden);
		UI_DShop->SetVisibility(ESlateVisibility::Hidden);
	}
}
void AMyGameStateBase::AddToInventory(MyEnums::Item item,int cost)
{
	if (inventory)
	{
		inventory->AddItem(item, 1);
		inventory->AddGold(-cost);
	}

}

int AMyGameStateBase::GetCoins()
{
	return inventory->GetGoldCount();
}
void AMyGameStateBase::RemoveFromInventory(MyEnums::Item item)
{
	if (inventory)
	{
		inventory->RemoveItem(item, 1);
	}
}