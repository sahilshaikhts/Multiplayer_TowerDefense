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
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMyGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ARewardSystem_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AShopSystem_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AInventory_NoRegister();
// End Cross Module References
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_UI_GameA_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_UI_GameA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_UI_GameD_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_UI_GameD;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameA_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameA = { "t_UI_GameA", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, t_UI_GameA), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameD_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/MyGameStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameD = { "t_UI_GameD", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyGameStateBase, t_UI_GameD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameD_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameStateBase_Statics::NewProp_t_UI_GameD,
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
	IMPLEMENT_CLASS(AMyGameStateBase, 3896442808);
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
