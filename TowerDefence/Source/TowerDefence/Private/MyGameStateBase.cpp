// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"
#include "Blueprint/UserWidget.h"
#include "ShopSystem.h"
#include "RewardSystem.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "Troop_melee.h"
AMyGameStateBase::AMyGameStateBase()
{
	PrimaryActorTick.bCanEverTick = true;

	State = MyStates::GameState::Intermission;

	Round = 0;
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

		if (UI_Game)
		{
			UI_Game->SetVisibility(ESlateVisibility::Hidden);
		}
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

void AMyGameStateBase::SetGameState(MyStates::GameState state)
{
	State = state;
}

MyStates::GameState AMyGameStateBase::GetGameState()
{
	return State;
}

void AMyGameStateBase::EndIntermission()
{
	SetGameState(MyStates::GameState::Play);
	bIntermissionStart = false;
	SwitchUI(1);
}

void AMyGameStateBase::EndRound()
{
	if (Round != 3)
	{
		SetGameState(MyStates::GameState::Intermission);
		SwitchUI(0);
	}

	bRoundStart = false;

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATroop_melee::StaticClass(), FoundActors);

	for (int i = 0; i < FoundActors.Num(); i++)
	{
		FoundActors[i]->Destroy();
	}
}

void AMyGameStateBase::RemoveFromInventory(MyEnums::Item item)
{
	if (inventory)
	{
		inventory->RemoveItem(item, 1);
	}
}

void AMyGameStateBase::OnUnitKilled(MyEnums::Item unit)
{
	inventory->AddGold( rewardSystem->Reward_UnitKill(unit));
}

void AMyGameStateBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Round == 3 && bRoundStart == false) // OR if Defending Player base is destroyed
	{
		State = MyStates::GameState::GameOver;

		//GetWorldTimerManager().ClearTimer(RoundTimerHandle);
	}

	if (State == MyStates::GameState::Intermission)
	{
		if (bIntermissionStart == false)
		{
			SwitchUI(0);
			GetWorldTimerManager().SetTimer(IntermissionTimerHandle, this, &AMyGameStateBase::EndIntermission, IntermissionTimer);
			bIntermissionStart = true;
		}
	}
	else if (State == MyStates::GameState::Play)
	{
		if (bRoundStart == false)
		{
			GetWorldTimerManager().SetTimer(RoundTimerHandle, this, &AMyGameStateBase::EndRound, RoundTimer);
			bRoundStart = true;
			Round++;
		}
	}
	else if (State == MyStates::GameState::GameOver)
	{
		if (Round == 3 && bRoundStart == false)
		{
			//display defender win widget
			int bp = 1;
		}
	}
}
