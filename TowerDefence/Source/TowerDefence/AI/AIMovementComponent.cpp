// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMovementComponent.h"
#include "AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "TowerDefence/Troops/TroopBase.h"

// Sets default values for this component's properties
UAIMovementComponent::UAIMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
}

void UAIMovementComponent::SetPathNodes(TArray<AActor*>* aPathNodes)
{
	PathNodes = *aPathNodes;
	MoveToNextPathNode();
	owner = Cast<ATroopBase>(GetOwner());
}


// Called when the game starts
void UAIMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	bPatrol = true;
	index = 0;
}


void UAIMovementComponent::MoveToNextPathNode()
{
	if (CurrentPathNode == nullptr)
	{
		CurrentPathNode = PathNodes[0];
	}
	else
	{
		if (CurrentPathNode != PathNodes.Last())
		{
			index++;
			CurrentPathNode = PathNodes[index];
		}

	}


}
void UAIMovementComponent::SwichtNextNodeToNearest()	//Used after done attacking a tower and resume in the path (Might not be used)
{
	FVector curntDir = CurrentPathNode->GetActorLocation() - this->GetOwner()->GetActorLocation();
	float curntShortestDist = curntDir.Size();

	for (int i = index; i < PathNodes.Max(); i++)
	{
		FVector direction = PathNodes[i]->GetActorLocation() - this->GetOwner()->GetActorLocation();
		float DistanceToGoal = direction.Size();
		if (curntShortestDist > DistanceToGoal)
		{
			curntShortestDist = DistanceToGoal;
			CurrentPathNode = PathNodes[i];
		}
	}
}

void UAIMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentPathNode && bPatrol)
	{
		FVector direction = CurrentPathNode->GetActorLocation() -this->GetOwner()->GetActorLocation() ;
		float DistanceToGoal = direction.Size();

		if (DistanceToGoal < 50)
		{
			MoveToNextPathNode();
		}

		direction=direction.GetSafeNormal();
		owner->moveDirection = FVector(direction.X,direction.Y,0);
	}
}

