// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerSpawnPoint.h"

// Sets default values
ATowerSpawnPoint::ATowerSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	RootComponent = mesh;

	Tags.Add("TowerSpawnPoint");
}

// Called when the game starts or when spawned
void ATowerSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATowerSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

