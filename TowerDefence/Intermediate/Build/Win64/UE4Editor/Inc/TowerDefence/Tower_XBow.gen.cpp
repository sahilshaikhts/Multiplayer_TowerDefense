// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/Tower_XBow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_XBow() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATower_XBow_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATower_XBow();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AProjectile_XBow_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATower_XBow::execServer_Fire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Fire_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_Fire_Validate"));
			return;
		}
		P_THIS->Server_Fire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATower_XBow_Server_Fire = FName(TEXT("Server_Fire"));
	void ATower_XBow::Server_Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATower_XBow_Server_Fire),NULL);
	}
	void ATower_XBow::StaticRegisterNativesATower_XBow()
	{
		UClass* Class = ATower_XBow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_Fire", &ATower_XBow::execServer_Fire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATower_XBow_Server_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_XBow_Server_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tower_XBow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_XBow_Server_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_XBow, nullptr, "Server_Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_XBow_Server_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_XBow_Server_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_XBow_Server_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_XBow_Server_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATower_XBow_NoRegister()
	{
		return ATower_XBow::StaticClass();
	}
	struct Z_Construct_UClass_ATower_XBow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_XBow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATowerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATower_XBow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATower_XBow_Server_Fire, "Server_Fire" }, // 2130804880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_XBow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower_XBow.h" },
		{ "ModuleRelativePath", "Public/Tower_XBow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_XBow_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Tower_XBow" },
		{ "ModuleRelativePath", "Public/Tower_XBow.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_XBow_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_XBow, ProjectileClass), Z_Construct_UClass_AProjectile_XBow_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATower_XBow_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_XBow_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_XBow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_XBow_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_XBow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_XBow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_XBow_Statics::ClassParams = {
		&ATower_XBow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATower_XBow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATower_XBow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATower_XBow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_XBow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_XBow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_XBow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower_XBow, 2572452203);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATower_XBow>()
	{
		return ATower_XBow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_XBow(Z_Construct_UClass_ATower_XBow, &ATower_XBow::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATower_XBow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_XBow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
