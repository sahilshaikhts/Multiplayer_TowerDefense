// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/MyGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameStateBase() {}
// Cross Module References
	TOWERDEFENCE_API UFunction* Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	TOWERDEFENCE_API UEnum* Z_Construct_UEnum_TowerDefence_MyStates();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMyGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AInventory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ARewardSystem_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AShopSystem_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TowerDefence, nullptr, "OnInventoryUpdate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* MyStates_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefence_MyStates, Z_Construct_UPackage__Script_TowerDefence(), TEXT("MyStates"));
		}
		return Singleton;
	}
	template<> TOWERDEFENCE_API UEnum* StaticEnum<MyStates::GameState>()
	{
		return MyStates_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MyStates(MyStates_StaticEnum, TEXT("/Script/TowerDefence"), TEXT("MyStates"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefence_MyStates_Hash() { return 15621261U; }
	UEnum* Z_Construct_UEnum_TowerDefence_MyStates()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefence();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MyStates"), 0, Get_Z_Construct_UEnum_TowerDefence_MyStates_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MyStates::Intermission", (int64)MyStates::Intermission },
				{ "MyStates::Paused", (int64)MyStates::Paused },
				{ "MyStates::Play", (int64)MyStates::Play },
				{ "MyStates::GameOver", (int64)MyStates::GameOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "GameOver.Name", "MyStates::GameOver" },
				{ "Intermission.Name", "MyStates::Intermission" },
				{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
				{ "Paused.Name", "MyStates::Paused" },
				{ "Play.Name", "MyStates::Play" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefence,
				nullptr,
				"MyStates",
				"MyStates::GameState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AMyGameStateBase::execSwitchUI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchUI(Z_Param_type);
		P_NATIVE_END;
	}
	void AMyGameStateBase::StaticRegisterNativesAMyGameStateBase()
	{
		UClass* Class = AMyGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchUI", &AMyGameStateBase::execSwitchUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics
	{
		struct MyGameStateBase_eventSwitchUI_Parms
		{
			int32 type;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameStateBase_eventSwitchUI_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameStateBase, nullptr, "SwitchUI", nullptr, nullptr, sizeof(MyGameStateBase_eventSwitchUI_Parms), Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyGameStateBase_SwitchUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyGameStateBase_SwitchUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister()
	{
		return AMyGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_BattleMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_BattleMusic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_Lose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_Lose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_RoundStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_RoundStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_UI_InGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_UI_InGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_T_RewardSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_T_RewardSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_T_ShopSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_T_ShopSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_T_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_T_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameStateBase_SwitchUI, "SwitchUI" }, // 2022540937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyGameStateBase.h" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_BattleMusic_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_BattleMusic = { "sfx_BattleMusic", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, sfx_BattleMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_BattleMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_BattleMusic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Win_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Win = { "sfx_Win", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, sfx_Win), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Lose_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Lose = { "sfx_Lose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, sfx_Lose), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Lose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Lose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_RoundStart_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_RoundStart = { "sfx_RoundStart", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, sfx_RoundStart), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_RoundStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_RoundStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent2_MetaData[] = {
		{ "Category", "AudioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent2 = { "AudioComponent2", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, AudioComponent2), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "AudioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_inventory_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, inventory), Z_Construct_UClass_AInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_OnInventoryUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, OnInventoryUpdated), Z_Construct_UDelegateFunction_TowerDefence_OnInventoryUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_OnInventoryUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_OnInventoryUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_InGame_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_InGame = { "t_UI_InGame", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, t_UI_InGame), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_InGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_InGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_RewardSystem_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_RewardSystem = { "T_RewardSystem", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, T_RewardSystem), Z_Construct_UClass_ARewardSystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_RewardSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_RewardSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_ShopSystem_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_ShopSystem = { "T_ShopSystem", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, T_ShopSystem), Z_Construct_UClass_AShopSystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_ShopSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_ShopSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_Inventory_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "Comment", "//True: player is in attacking role ; False: player is in defensing role\n" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
		{ "ToolTip", "True: player is in attacking role ; False: player is in defensing role" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_Inventory = { "T_Inventory", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, T_Inventory), Z_Construct_UClass_AInventory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "MyGameStateBase" },
		{ "Comment", "//for debugging\n" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
		{ "ToolTip", "for debugging" },
	};
#endif
	void Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((AMyGameStateBase*)Obj)->isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyGameStateBase), &Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_BattleMusic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_Lose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_sfx_RoundStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_OnInventoryUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_InGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_RewardSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_ShopSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_T_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_isAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams = {
		&AMyGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyGameStateBase, 3391445187);
	template<> TOWERDEFENCE_API UClass* StaticClass<AMyGameStateBase>()
	{
		return AMyGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameStateBase(Z_Construct_UClass_AMyGameStateBase, &AMyGameStateBase::StaticClass, TEXT("/Script/TowerDefence"), TEXT("AMyGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
