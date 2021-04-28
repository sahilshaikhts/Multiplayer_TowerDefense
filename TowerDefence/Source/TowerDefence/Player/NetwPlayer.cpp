// Fill out your copyright notice in the Description page of Project Settings.
///?/?selected item updated on server by clietn throu server function,but cant be called on server 

#include "TowerDefence/Player/NetwPlayer.h"
#include"Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TowerDefence/Troops/Troop_melee.h"
#include "TowerDefence/Troops/TroopBase.h"
#include "TowerDefence/Towers/Tower_Canon.h"
#include "TowerDefence/Troops/Troop_Ranged.h"
#include "TowerDefence/Towers/Tower_XBow.h"

#include "TowerDefence/Troops/TroopSpawnPoint.h"
#include "TowerDefence/AI/AIMovementComponent.h"
#include "TowerDefence/Towers/TowerSpawnPoint.h"
#include "TowerDefence/GameStates/MyGameStateBase.h"
#include "TowerDefence/Systems/Inventory.h"
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



void ANetwPlayer::Server_CreateInventory_Implementation()
{
	if (T_Inventory)
	{
		inventory = GetWorld()->SpawnActor<AInventory>(T_Inventory, FVector::ZeroVector, FRotator(0, 0, 0));
	}
}
void ANetwPlayer::LeftMouseClick()
{
	if (gameState->GetGameState() == MyStates::GameState::Play)
	{
		bool isAttackS = gameState->isLocalRoleAttacking;

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
	if (gameState->GetGameState() == MyStates::GameState::Play)
	{
		FVector worldPos = hitResult.Location;

		if (!hitResult.GetActor())
			return;

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


void ANetwPlayer::CheckIfInventoryEmpty()
{
	bool anyUnitLeft = false;
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
		inventory->AddItem(item, 1);
		inventory->AddGold(-cost);
	}

}
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
