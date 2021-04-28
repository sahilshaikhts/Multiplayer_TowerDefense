// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameStateBase.h"
#include "Blueprint/UserWidget.h"
#include "TowerDefence/Systems/ShopSystem.h"
#include "TowerDefence/Systems/RewardSystem.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

#include "TowerDefence/Troops/Troop_melee.h"
#include "TowerDefence/Towers/TowerBase.h"
#include "TowerDefence/Troops/TroopBase.h"
#include "TowerDefence/Player/NetwPlayer.h"
#include "Net/UnrealNetwork.h"
#include"TowerDefence\Towers\MainTower.h"
AMyGameStateBase::AMyGameStateBase()
{
	PrimaryActorTick.bCanEverTick = true;

	State = MyStates::GameState::UnInitialized;
	netwState = -1;
	Round = 0;

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent->SetupAttachment(RootComponent);

	AudioComponent2 = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent2"));
	AudioComponent2->bAutoActivate = false;
	AudioComponent2->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent2->SetupAttachment(RootComponent);
}
void AMyGameStateBase::BeginPlay()
{
	Super::BeginPlay();
	if (T_ShopSystem)
	{
		shopSystem = GetWorld()->SpawnActor<AShopSystem>(T_ShopSystem, FVector::ZeroVector, FRotator(0, 0, 0));
	}
	if (T_RewardSystem)
	{
		rewardSystem = GetWorld()->SpawnActor<ARewardSystem>(T_RewardSystem, FVector::ZeroVector, FRotator(0, 0, 0));
	}
	if (t_UI_InGame)
	{
		UI_Game = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_InGame);
		UI_Game->AddToViewport();
		UI_Game->SetVisibility(ESlateVisibility::Hidden);
	}
	if (T_UI_GameEnd)
	{
		UI_GameEnd = CreateWidget<UUserWidget>(GetGameInstance(), T_UI_GameEnd);
		UI_GameEnd->AddToViewport();
		UI_GameEnd->SetVisibility(ESlateVisibility::Hidden);
	}
	
	//SwitchUI(0);
}
void AMyGameStateBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	 DOREPLIFETIME(AMyGameStateBase, Round);
	 DOREPLIFETIME(AMyGameStateBase, netwState);
	 DOREPLIFETIME(AMyGameStateBase, defendingTeam);
	 DOREPLIFETIME(AMyGameStateBase, attackingTeam);
}

void AMyGameStateBase::SwitchUI(int type)//0=Shop;1=Game+
{
	if (type == 0)//shop_attacker
	{
		bool isAttacking;
		ANetwPlayer* player = Cast<ANetwPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (player)
			isAttacking = player->isAttacking;
		shopSystem->SwitchUI(isAttacking ? 0 : 1);

		if (UI_Game)
		{
			UI_Game->SetVisibility(ESlateVisibility::Collapsed);
		}
		UI_GameEnd->SetVisibility(ESlateVisibility::Hidden);
	}

	if (type == 1)//Game
	{
		UI_Game = CreateWidget<UUserWidget>(GetGameInstance(), t_UI_InGame);
		UI_Game->AddToViewport();

		UI_Game->SetVisibility(ESlateVisibility::Visible);
		shopSystem->SwitchUI(-1);
		UI_GameEnd->SetVisibility(ESlateVisibility::Hidden);
	}

	if (type == 2)//Game
	{

		UI_GameEnd->SetVisibility(ESlateVisibility::Visible);
		UI_Game->SetVisibility(ESlateVisibility::Hidden);
		shopSystem->SwitchUI(-1);
	}
}

void AMyGameStateBase::SetGameState(MyStates::GameState state)
{
	State = state;
	Server_ChangeState(state);
}

MyStates::GameState AMyGameStateBase::GetGameState()
{
	return State;
}

void AMyGameStateBase::EndIntermission()
{
	SetGameState(MyStates::GameState::Play);
	bIntermissionStart = false;

	if (Round == 0)
	{
		AudioComponent->Stop();
		AudioComponent->SetSound(sfx_RoundStart);
		AudioComponent->Play();
	}
	SwitchUI(1);
}

void AMyGameStateBase::StartEndingRound(ANetwPlayer* attacker)
{
	if (GetLocalRole() == ROLE_Authority && !bRoundOverStart)
	{
		//if called by attacker ,means it lost else called by the main tower when destroyed 
		ANetwPlayer* player0 = Cast<ANetwPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		ANetwPlayer* player1 = Cast<ANetwPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 1));
		if (attacker)
		{

			//increament roundWoncount in player that is not attacker
			if (player0 != attacker)
			{
				player0->IncrementWonCount();
			}
			else
				if (player1 != attacker)
				{
					player1->IncrementWonCount();
				}

			//Update both player's win counts of each other
		}
		else//else round end called by main tower being destroyed,hence attacker wins
		{
			if (player0->isAttacking)
			{
				player0->IncrementWonCount();
			}
			else
			{
				player1->IncrementWonCount();
			}
		}
		Server_DestroyAllUnits();
		player0->UpdateRoundScores();
		player1->UpdateRoundScores();
		SetGameState(MyStates::GameState::GameOver);
	}
}
void AMyGameStateBase::EndRound()
{
	if (Round != 3)
	{
		SetGameState(MyStates::GameState::Intermission);
		SwitchUI(0);
	}
	bRoundStart = false;
	bRoundOverStart = false;

}

int AMyGameStateBase::OnUnitKilled(MyEnums::Item unit)
{
	return rewardSystem->Reward_UnitKill(unit);
}

void AMyGameStateBase::Server_AssignTeam_Implementation(int team)
{
	if (team == 0)
		attackingTeam++;
	else
		defendingTeam++;

	if (attackingTeam + defendingTeam == 2)
		netwState = MyStates::GameState::Intermission;
}

//Player when spawns asks to be assigned to a team,this function checks which has 0 memebers and assign that to that player
bool AMyGameStateBase::AssignTeam()
{
	bool attacking;
	if (attackingTeam == 0)
		attacking= true;
	else
		attacking= false;
	Server_AssignTeam(attacking ? 0 : 1);

	return attacking;
}

void AMyGameStateBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	State = (MyStates::GameState)netwState;

	if (State == MyStates::GameState::Intermission)
	{
		if (bIntermissionStart == false)
		{
			SwitchUI(0);
			GetWorldTimerManager().SetTimer(IntermissionTimerHandle, this, &AMyGameStateBase::EndIntermission, IntermissionTimer);
			bIntermissionStart = true;
			Server_DestroyAllUnits();
		}
	}
	else if (State == MyStates::GameState::Play)
	{
		if (bRoundStart == false)
		{
			bRoundStart = true;
			if (GetLocalRole() == ROLE_Authority)
				Round++;

			if (AudioComponent->IsPlaying() == false && AudioComponent2->IsPlaying() == false)
			{
				AudioComponent2->SetSound(sfx_BattleMusic);
				AudioComponent2->Play();
			}
		}
	}
	else if (State == MyStates::GameState::GameOver)
	{
		if (!bRoundOverStart)
		{
			if (Round == 3)
			{
				GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
			}
			else
			{
				SwitchUI(2);
				GetWorldTimerManager().SetTimer(RoundTimerHandle, this, &AMyGameStateBase::EndRound, 3);//Switch from win/loss screen to shop
			}
			bRoundOverStart = true;
		}
	}

}

void AMyGameStateBase::Server_DestroyAllUnits_Implementation()
{
	TArray<AActor*> FoundTroops;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATroopBase::StaticClass(), FoundTroops);

	TArray<AActor*> FoundTowers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATowerBase::StaticClass(), FoundTowers);

	if (FoundTroops.Num() > 0)
	{
		for (int i = 0; i < FoundTroops.Num(); i++)
		{
			FoundTroops[i]->Destroy();
		}
	}

	if (FoundTowers.Num() > 0)
	{
		for (int i = 0; i < FoundTowers.Num(); i++)
		{
			if (FoundTowers[i]->ActorHasTag("MainTower"))
			{
				AMainTower* mainTower = Cast<AMainTower>(FoundTowers[i]);
			}
			else
			FoundTowers[i]->Destroy();
		}
	}
}
void AMyGameStateBase::Server_ChangeState_Implementation(int newState)
{
	netwState = newState;
}