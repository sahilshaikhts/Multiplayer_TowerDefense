// Fill out your copyright notice in the Description page of Project Settings.

#include "NetwPlayer.h"
#include"Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TowerDefence/Public/Troop_melee.h"
#include "TroopBase.h"
#include "Tower_Canon.h"
#include "Troop_Ranged.h"
#include "Tower_XBow.h"

#include "TroopSpawnPoint.h"
#include "AIMovementComponent.h"
#include "TowerSpawnPoint.h"
#include "MyGameStateBase.h"
#include "Inventory.h"
#include "Net/UnrealNetwork.h"
#include "OnlineGameInstance.h"
// Sets default values
ANetwPlayer::ANetwPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");

	cameraSpring = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	cameraSpring->SetupAttachment(RootComponent);
	cameraSpring->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	cameraSpring->bEnableCameraLag = true;
	cameraSpring->CameraLagSpeed = 15;

	camera = CreateDefaultSubobject<UCameraComponent>("PlayerCamera");
	camera->SetupAttachment(cameraSpring, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent->SetupAttachment(RootComponent);
}

void ANetwPlayer::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); 
	DOREPLIFETIME(ANetwPlayer, inventory);
	DOREPLIFETIME(ANetwPlayer, isAttacking);
	DOREPLIFETIME(ANetwPlayer, RoundsWon);
	DOREPLIFETIME(ANetwPlayer, OpponentRoundsWon);
}

AInventory* ANetwPlayer::GetInventory()
{
	if (inventory)
		return inventory;

	return nullptr;
}

void ANetwPlayer::OnUnitKilled(MyEnums::Item unit)
{
	inventory->AddGold(gameState->OnUnitKilled(unit));
	if (isAttacking)
	{
		CheckIfInventoryEmpty();
	}
}

// Called when the game starts or when spawned
void ANetwPlayer::BeginPlay()
{
	gameState = Cast<AMyGameStateBase>(GetWorld()->GetGameState());

	Super::BeginPlay();

	world = GetWorld();
	Server_CreateInventory();
	FViewTargetTransitionParams params;
	world->GetFirstPlayerController()->SetViewTarget(this, params);
	world->GetFirstPlayerController()->bShowMouseCursor = true;
	world->GetFirstPlayerController()->bEnableMouseOverEvents = true;
	world->GetFirstPlayerController()->bEnableClickEvents = true;

	
	APlayerController* PC = Cast<APlayerController>(GetController());

	if (PC)
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;
	}
	if (GetLocalRole() == ROLE_Authority)
	{
		isAttacking = gameState->AssignTeam();
		AddGold(100);
	}
}

// Called every frame
void ANetwPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ANetwPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	{
		PlayerInputComponent->BindAction("Mouse_left", IE_Pressed, this, &ANetwPlayer::LeftMouseClick);
	}
}


//Spawn inventory on server 
void ANetwPlayer::Server_CreateInventory_Implementation()
{
	if (T_Inventory)
	{
		inventory = GetWorld()->SpawnActor<AInventory>(T_Inventory, FVector::ZeroVector, FRotator(0, 0, 0));
		inventory->SetOwner(this);
	}
}
//Called when mouse click detected
void ANetwPlayer::LeftMouseClick()
{
	if (gameState->GetGameState() == MyStates::GameState::Play)
	{
		FHitResult hitResult;
		GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), true, hitResult);
		Server_LeftMouseClick(hitResult);
	}
}
bool ANetwPlayer::Server_LeftMouseClick_Validate(FHitResult hitResult)
{
	return true;
}

void ANetwPlayer::Server_LeftMouseClick_Implementation(FHitResult hitResult)
{
	//Check if game is in playe state
	if (gameState->GetGameState() == MyStates::GameState::Play)
	{
		FVector worldPos = hitResult.Location;

		if (!hitResult.GetActor())
			return;

		//check if attacker or defender
		if (isAttacking)
		{

			if (hitResult.GetActor()->Tags.Num() > 0 && hitResult.GetActor()->Tags[0] == "TroopSpawnPoint")
			{
				SpawnItem(inventory->selectedItem, hitResult.GetActor());
			}
		}
		else
		{
			if (hitResult.GetActor()->Tags.Num() > 0 && hitResult.GetActor()->ActorHasTag("TowerSpawnPoint"))
			{
				SpawnItem(inventory->selectedItem, hitResult.GetActor());
			}
		}
	}
}

//Check if there is any units still left,used to end game and declare victory for defender when attacker has no more troops left
void ANetwPlayer::CheckIfInventoryEmpty()
{
	bool anyUnitLeft = false;
	//check each items count if any greater than 1 exit
	for (int i = 0; i < MyEnums::Item::TypesCount; i++)
	{
		if (inventory->GetItemCount((MyEnums::Item)i))
		{
			anyUnitLeft = true;
			break;
		}
	}
	//If no unit left with the attacker ,check for troops in the world and if non found end the round
	if (!anyUnitLeft)
	{
		TArray<AActor*> FoundTroops;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATroopBase::StaticClass(), FoundTroops);
		
		for (int i = 0; i < FoundTroops.Num(); i++)
		{
			ATroopBase* troop = Cast<ATroopBase>(FoundTroops[i]);
			if (troop->isAlive)
			{
				anyUnitLeft = true;
				return;
			}
		}
	}
	if (!anyUnitLeft)
	{
		gameState->StartEndingRound(this);
	}

}
//Spawn unit (on server) after player left click and unit has been validated
void ANetwPlayer::SpawnItem(MyEnums::Item type, AActor* hitActor)
{
	if (inventory->GetItemCount(type))
	{
		switch (type)
		{
		case MyEnums::troop_swordsMan:	
		{
			ATroopBase* spwndObj = GetWorld()->SpawnActor<ATroop_melee>(t_troopMelee, hitActor->GetActorLocation() + hitActor->GetActorUpVector(), FRotator(0, 0, 0));
			if (spwndObj)
			{
				ATroopSpawnPoint* spawnPoint = Cast<ATroopSpawnPoint>(hitActor);

				spwndObj->SetPatrolPoints(&spawnPoint->PatrolPoints);
				spwndObj->player = this;


				AudioComponent->Stop();
				AudioComponent->SetSound(sfx_SpawnMelee);
				AudioComponent->Play();
			}
		}
		break;
		case MyEnums::troop_archer:
		{
			ATroopBase* spwndObj = GetWorld()->SpawnActor<ATroop_Ranged>(t_troopRanged, hitActor->GetActorLocation() + hitActor->GetActorUpVector(), FRotator(0, 0, 0));
			if (spwndObj)
			{
				ATroopSpawnPoint* spawnPoint = Cast<ATroopSpawnPoint>(hitActor);

				spwndObj->SetPatrolPoints(&spawnPoint->PatrolPoints);
				spwndObj->player = this;

				AudioComponent->Stop();
				AudioComponent->SetSound(sfx_SpawnRanged);
				AudioComponent->Play();
			}
		}
			break;
		case MyEnums::tower_XBow:
		{
			ATowerSpawnPoint* spawnPoint = Cast<ATowerSpawnPoint>(hitActor);
			if (spawnPoint && spawnPoint->isEquiped == false)
			{
				if (inventory->GetItemCount(MyEnums::Item::tower_XBow))
				{
					ATower_XBow* spwndObj = GetWorld()->SpawnActor<ATower_XBow>(t_towerXBow, hitActor->GetActorLocation(), FRotator(0, 0, 0));
					spwndObj->player = this;
					spawnPoint->currentTower = spwndObj;
					spawnPoint->isEquiped = true;
				}
			}
		}
			break; 

		case MyEnums::tower_canon:
		{
			ATowerSpawnPoint* spawnPoint = Cast<ATowerSpawnPoint>(hitActor);
			if (spawnPoint && spawnPoint->isEquiped == false)
			{
				if (inventory->GetItemCount(MyEnums::Item::tower_canon))
				{
					ATower_Canon* spwndObj = GetWorld()->SpawnActor<ATower_Canon>(t_towerCanon, hitActor->GetActorLocation(), FRotator(0, 0, 0));
					spwndObj->player = this;
					spawnPoint->currentTower = spwndObj;
					spawnPoint->isEquiped = true;
				}
			}
		}
		break;
		default:
			break;
		}
			inventory->RemoveItem(type);

	}
}


void ANetwPlayer::AddToInventory(MyEnums::Item item, int cost) 
{
	Server_AddToInventory(item,cost);
}
bool ANetwPlayer::Server_AddToInventory_Validate(MyEnums::Item item, int cost)
{
	return true;
}
void ANetwPlayer::Server_AddToInventory_Implementation(MyEnums::Item item, int cost)
{
	if (inventory)
	{
		if (GetCoins() >= cost) 
		{
			inventory->AddItem(item, 1);
			inventory->AddGold(-cost);
		}
	}

}
//Change selected unit when playing
void ANetwPlayer::ChangeSelectedItem(MyEnums::Item item)
{
	Server_ChangeSelectedItem(item);
}
void ANetwPlayer::Server_ChangeSelectedItem_Implementation(MyEnums::Item item)
{
	inventory->ChangeSelectedItem(item);
}
int ANetwPlayer::GetOpponentRoundsWon()
{
	return OpponentRoundsWon;
}
int ANetwPlayer::GetWinCounts()
{
	return RoundsWon;
}

void ANetwPlayer::AddGold(int amount)
{
	inventory->AddGold(amount);
}
int ANetwPlayer::GetCoins()
{
	if (inventory)
		return inventory->GetGoldCount();
	else return 0;
}

void ANetwPlayer::IncrementWonCount()
{
	RoundsWon++;
}

void ANetwPlayer::UpdateRoundScores()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		ANetwPlayer* player = Cast<ANetwPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (player == this)
		{
			player = Cast<ANetwPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 1));
		}
		if (player)
		{
			OpponentRoundsWon = player->GetWinCounts();
		}
	}
}
