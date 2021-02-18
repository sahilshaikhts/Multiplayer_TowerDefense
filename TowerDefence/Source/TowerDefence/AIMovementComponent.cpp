// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMovementComponent.h"
#include "AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"

// Sets default values for this component's properties
UAIMovementComponent::UAIMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UAIMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	if (bPatrol)
	{
		MoveToNextPatrolPoint();
	}
}


void UAIMovementComponent::MoveToNextPatrolPoint()
{
	if (CurrentPatrolPoint == nullptr || CurrentPatrolPoint == PatrolPoints.Last())
	{
		CurrentPatrolPoint = PatrolPoints[0];
	}
	else
	{
		for (int i = 0; i < PatrolPoints.Num(); i++)
		{
			if (CurrentPatrolPoint == PatrolPoints[i])
			{
				CurrentPatrolPoint = PatrolPoints[i + 1];
			}
		}
	}

	//if (pController)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToActor(pController, CurrentPatrolPoint);
	}
}


void UAIMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentPatrolPoint)
	{
		FVector Delta = this->GetOwner()->GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Delta.Size();

		if (DistanceToGoal < 100)
		{
			MoveToNextPatrolPoint();
		}
	}
}

