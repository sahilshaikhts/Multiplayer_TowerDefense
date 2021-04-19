// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.h"
#include "Item.generated.h"
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class TOWERDEFENCE_API UItem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FText item_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FText item_Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		int item_Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		class UTexture2D* item_Thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		TEnumAsByte<MyEnums::Item> type;
};
