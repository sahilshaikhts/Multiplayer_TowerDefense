// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include"Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TowerDefence/Public/Troop_melee.h"
#include "Components/AudioComponent.h"
#include "TroopBase.h"
#include "Tower_Canon.h"
#include "Troop_Ranged.h"
#include "TroopSpawnPoint.h"
#include "AIMovementComponent.h"
#include "TowerSpawnPoint.h"
#include "MyGameStateBase.h"
#include "Inventory.h"

// Sets default values
AMyPlayer::AMyPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");

	cameraSpring = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	cameraSpring->SetupAttachment(RootComponent);
	cameraSpring->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	cameraSpring->bEnableCameraLag = true;
	cameraSpring->CameraLagSpeed = 15;

	camera = CreateDefaultSubobject<UCameraComponent>("Pawns Camera");
	camera->SetupAttachment(cameraSpring, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;

	if (T_Inventory)
	{
		inventory = GetWorld()->SpawnActor<AInventory>(T_Inventory, FVector::ZeroVector, FRotator(0, 0, 0));
	}

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent->SetupAttachment(RootComponent);
}

AInventory* AMyPlayer::GetInventory()
{
	if (inventory)
		return inventory;

	return nullptr;
}

void AMyPlayer::OnUnitKilled(MyEnums::Item unit)
{
	gameState->OnUnitKilled(unit);
}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	gameState = Cast<AMyGameStateBase>(GetWorld()->GetGameState());

	Super::BeginPlay();

	world = GetWorld();

	FViewTargetTransitionParams params;
	world->GetFirstPlayerController()->SetViewTarget(this, params);
	world->GetFirstPlayerController()->bShowMouseCursor = true;
	world->GetFirstPlayerController()->bEnableMouseOverEvents = true;
	world->GetFirstPlayerController()->bEnableClickEvents = true;
	isAttacking = gameState->isAttacking;
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!inventory)
	{
		inventory = gameState->inventory;
	}
}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	{
		PlayerInputComponent->BindAction("Mouse_left", IE_Pressed, this, &AMyPlayer::LeftMouseClick);//will be called by inventory
	}
}


void AMyPlayer::LeftMouseClick()
{
	if (gameState->GetGameState() == MyStates::GameState::Play)
	{
		FHitResult hitResult;
		GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), true, hitResult);
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

void AMyPlayer::SpawnItem(MyEnums::Item type, AActor* hitActor)
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
			ATroopBase* spwndObj = GetWorld()->SpawnActor<ATroop_Ranged>(t_troopRanged, hitActor->GetActorLocation() + hitActor->GetActorUpVector(), FRotator(0.0f, 0.0f, 0.0f));
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
			break;
		case MyEnums::tower_canon:
		{
			ATowerSpawnPoint* spawnPoint = Cast<ATowerSpawnPoint>(hitActor);
			if (spawnPoint->isEquiped == false)
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