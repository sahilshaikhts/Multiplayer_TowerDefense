// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Public/MyUserWidget.h"
#include "Components/ProgressBar.h"

bool UMyUserWidget::Initialize()
{
	bool bResult = Super::Initialize();
	if (!bResult)
		return false;

	//UProgressBar* healthBar = Cast<UProgressBar>(GetWidgetFromName("HealthBar"));
	//healthBar->SetPercent(.5f);

	return true;
}

void UMyUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	UpdateHealthBar(InDeltaTime);
}

void UMyUserWidget::UpdateHealthBar(float value)
{
	//UProgressBar* healthBar = Cast<UProgressBar>(GetWidgetFromName("HealthBar"));
	//healthBar->SetPercent(value);
}

