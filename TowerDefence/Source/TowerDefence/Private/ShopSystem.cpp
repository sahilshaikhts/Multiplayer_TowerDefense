// Fill out your copyright notice in the Description page of Project Settings.


#include "ShopSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
// Sets default values
AShopSystem::AShopSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShopSystem::BeginPlay()
{
	Super::BeginPlay();
	
	if (t_UI_AShop) {
		UI_AShop = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_AShop);
		UI_AShop->AddToViewport();
		UI_AShop->SetVisibility(ESlateVisibility::Hidden);
	}
	if (t_UI_DShop) {
		UI_DShop = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_DShop);
		UI_DShop->AddToViewport();
		UI_DShop->SetVisibility(ESlateVisibility::Hidden);

	}

}

// Called every frame
void AShopSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AShopSystem::SwitchUI(int type)//-1=Hide all;0=Attacker shop;1=Defender shop;
{
	if (type == -1)
	{
		UI_DShop->SetVisibility(ESlateVisibility::Hidden);
		UI_AShop->SetVisibility(ESlateVisibility::Hidden);
	}else
	if (type == 0)
	{
		UI_DShop->SetVisibility(ESlateVisibility::Hidden);
		UI_AShop->SetVisibility(ESlateVisibility::Visible);
	}else
	if (type == 1)
	{
		UI_DShop->SetVisibility(ESlateVisibility::Visible);
		UI_AShop->SetVisibility(ESlateVisibility::Hidden);
	}

}
void AShopSystem::AddToInventory(MyEnums::Item item, int cost)
{
	if (inventory)
	{
		inventory->AddItem(item, 1);
		inventory->AddGold(-cost);
	}

}

int AShopSystem::GetCoins()
{
	return inventory->GetGoldCount();
}