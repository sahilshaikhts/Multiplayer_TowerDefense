// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/RewardSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardSystem() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ARewardSystem_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ARewardSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ARewardSystem::StaticRegisterNativesARewardSystem()
	{
	}
	UClass* Z_Construct_UClass_ARewardSystem_NoRegister()
	{
		return ARewardSystem::StaticClass();
	}
	struct Z_Construct_UClass_ARewardSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARewardSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARewardSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RewardSystem.h" },
		{ "ModuleRelativePath", "Public/RewardSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARewardSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARewardSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARewardSystem_Statics::ClassParams = {
		&ARewardSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARewardSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARewardSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARewardSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARewardSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARewardSystem, 2053837965);
	template<> TOWERDEFENCE_API UClass* StaticClass<ARewardSystem>()
	{
		return ARewardSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARewardSystem(Z_Construct_UClass_ARewardSystem, &ARewardSystem::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ARewardSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARewardSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
