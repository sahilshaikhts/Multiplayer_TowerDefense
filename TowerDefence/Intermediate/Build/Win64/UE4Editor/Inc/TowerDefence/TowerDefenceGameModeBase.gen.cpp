// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerDefenceGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefenceGameModeBase() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefenceGameModeBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefenceGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ATowerDefenceGameModeBase::StaticRegisterNativesATowerDefenceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATowerDefenceGameModeBase_NoRegister()
	{
		return ATowerDefenceGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefenceGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TowerDefenceGameModeBase.h" },
		{ "ModuleRelativePath", "TowerDefenceGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefenceGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::ClassParams = {
		&ATowerDefenceGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefenceGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerDefenceGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerDefenceGameModeBase, 3964683794);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerDefenceGameModeBase>()
	{
		return ATowerDefenceGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerDefenceGameModeBase(Z_Construct_UClass_ATowerDefenceGameModeBase, &ATowerDefenceGameModeBase::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATowerDefenceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefenceGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
