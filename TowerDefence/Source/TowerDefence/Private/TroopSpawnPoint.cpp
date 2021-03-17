// Fill out your copyright notice in the Description page of Project Settings.


#include "TroopSpawnPoint.h"
#include "Components/SphereComponent.h"

// Sets default values
ATroopSpawnPoint::ATroopSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collider = CreateDefaultSubobject<USphereComponent>("collision");
	collider->SetCollisionProfileName("OverlapAll");
	collider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	collider->SetupAttachment(RootComponent);

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(collider);
	Tags.Add("TroopSpawnPoint");
}


// Called when the game starts or when spawned
void ATroopSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATroopSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

