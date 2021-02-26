// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include"Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "TowerDefence/Public/Troop_melee.h"
#include "Tower_Canon.h"
#include "TroopSpawnPoint.h"
#include "AIMovementComponent.h"
#include "TowerSpawnPoint.h"
#include "MyGameStateBase.h"

// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	RootComponent=CreateDefaultSubobject<USceneComponent>("RootComponent");

	cameraSpring = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	cameraSpring->SetupAttachment(RootComponent);
	cameraSpring->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	cameraSpring->bEnableCameraLag = true;
	cameraSpring->CameraLagSpeed = 15;

	camera = CreateDefaultSubobject<UCameraComponent>("Pawns Camera");
	camera->SetupAttachment(cameraSpring, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;

	isAttaking = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	world = GetWorld();
	AMyGameStateBase* gameState = Cast<AMyGameStateBase>(world->GetGameState());
	inventory = gameState->inventory;
	FViewTargetTransitionParams params;
	world->GetFirstPlayerController()->SetViewTarget(this, params);
	world->GetFirstPlayerController()->bShowMouseCursor = true;
	world->GetFirstPlayerController()->bEnableMouseOverEvents = true;
	world->GetFirstPlayerController()->bEnableClickEvents = true;
}

void AMyPlayer::Attacker()
{
	
}

void AMyPlayer::Defender()
{
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Mouse_left", IE_Pressed,this, &AMyPlayer::LeftMouseClick);//will be called by inventory
}


void AMyPlayer::LeftMouseClick()
{
	FHitResult hitResult;
	GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), true, hitResult);
	FVector worldPos = hitResult.Location;
	

	if (isAttaking)
	{
		
			if (hitResult.GetActor()->Tags.Num() > 0 && hitResult.GetActor()->Tags[0] == "TroopSpawnPoint")
			{
				ATroopSpawnPoint* hitActor = Cast<ATroopSpawnPoint>(hitResult.GetActor());

				ATroop_melee* spwndObj = GetWorld()->SpawnActor<ATroop_melee>(t_troopMelee, hitResult.Location, FRotator(0, 0, 0));
				spwndObj->SetPatrolPoints(&hitActor->PatrolPoints);
			}
		
	}
	else
	{
		if (hitResult.GetActor()->Tags.Num() > 0 && hitResult.GetActor()->ActorHasTag("TowerSpawnPoint"))
		{

			ATowerSpawnPoint* hitActor = Cast<ATowerSpawnPoint>(hitResult.GetActor());
			if (hitActor->isEquiped == false) 
			{ 
				ATower_Canon* spwndObj = GetWorld()->SpawnActor<ATower_Canon>(t_towerCanon, FVector(hitActor->GetActorLocation().X, hitActor->GetActorLocation().Y, hitResult.Location.Z), FRotator(0, 0, 0));
				hitActor->currentTower = spwndObj;
				hitActor->isEquiped = true;
			}
		}
	}
	
}
