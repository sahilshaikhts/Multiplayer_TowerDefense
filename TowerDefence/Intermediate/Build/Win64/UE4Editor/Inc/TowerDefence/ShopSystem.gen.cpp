// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/ShopSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopSystem() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AShopSystem_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AShopSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	TOWERDEFENCE_API UEnum* Z_Construct_UEnum_TowerDefence_MyEnums();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShopSystem::execAddToInventory)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_item);
		P_GET_PROPERTY(FIntProperty,Z_Param_cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInventory(MyEnums::Item(Z_Param_item),Z_Param_cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShopSystem::execGetCoins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCoins();
		P_NATIVE_END;
	}
	void AShopSystem::StaticRegisterNativesAShopSystem()
	{
		UClass* Class = AShopSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &AShopSystem::execAddToInventory },
			{ "GetCoins", &AShopSystem::execGetCoins },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShopSystem_AddToInventory_Statics
	{
		struct ShopSystem_eventAddToInventory_Parms
		{
			TEnumAsByte<MyEnums::Item> item;
			int32 cost;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cost;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShopSystem_eventAddToInventory_Parms, cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShopSystem_eventAddToInventory_Parms, item), Z_Construct_UEnum_TowerDefence_MyEnums, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShopSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShopSystem, nullptr, "AddToInventory", nullptr, nullptr, sizeof(ShopSystem_eventAddToInventory_Parms), Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShopSystem_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShopSystem_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShopSystem_GetCoins_Statics
	{
		struct ShopSystem_eventGetCoins_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AShopSystem_GetCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShopSystem_eventGetCoins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShopSystem_GetCoins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShopSystem_GetCoins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShopSystem_GetCoins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShopSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShopSystem_GetCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShopSystem, nullptr, "GetCoins", nullptr, nullptr, sizeof(ShopSystem_eventGetCoins_Parms), Z_Construct_UFunction_AShopSystem_GetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopSystem_GetCoins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShopSystem_GetCoins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShopSystem_GetCoins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShopSystem_GetCoins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShopSystem_GetCoins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShopSystem_NoRegister()
	{
		return AShopSystem::StaticClass();
	}
	struct Z_Construct_UClass_AShopSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_UI_DShop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_UI_DShop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_UI_AShop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_UI_AShop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShopSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShopSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShopSystem_AddToInventory, "AddToInventory" }, // 3008042791
		{ &Z_Construct_UFunction_AShopSystem_GetCoins, "GetCoins" }, // 638229004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShopSystem.h" },
		{ "ModuleRelativePath", "Public/ShopSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_DShop_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/ShopSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_DShop = { "t_UI_DShop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopSystem, t_UI_DShop), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_DShop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_DShop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_AShop_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/ShopSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_AShop = { "t_UI_AShop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShopSystem, t_UI_AShop), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_AShop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_AShop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShopSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_DShop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShopSystem_Statics::NewProp_t_UI_AShop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShopSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShopSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShopSystem_Statics::ClassParams = {
		&AShopSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShopSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShopSystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShopSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShopSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShopSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShopSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShopSystem, 531121931);
	template<> TOWERDEFENCE_API UClass* StaticClass<AShopSystem>()
	{
		return AShopSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShopSystem(Z_Construct_UClass_AShopSystem, &AShopSystem::StaticClass, TEXT("/Script/TowerDefence"), TEXT("AShopSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShopSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
