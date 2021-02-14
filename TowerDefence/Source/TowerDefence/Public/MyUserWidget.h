// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
		virtual bool Initialize() override;
		virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	void UpdateHealthBar(float value);
	
};

