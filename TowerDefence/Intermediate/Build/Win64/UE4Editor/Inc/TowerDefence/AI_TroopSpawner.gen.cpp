// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/AI_TroopSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_TroopSpawner() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AAI_TroopSpawner_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AAI_TroopSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopSpawnPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroop_melee_NoRegister();
// End Cross Module References
	void AAI_TroopSpawner::StaticRegisterNativesAAI_TroopSpawner()
	{
	}
	UClass* Z_Construct_UClass_AAI_TroopSpawner_NoRegister()
	{
		return AAI_TroopSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AAI_TroopSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_troopMelee_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_troopMelee;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_TroopSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_TroopSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI_TroopSpawner.h" },
		{ "ModuleRelativePath", "Public/AI_TroopSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "AI_TroopSpawner" },
		{ "ModuleRelativePath", "Public/AI_TroopSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_TroopSpawner, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATroopSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_t_troopMelee_MetaData[] = {
		{ "Category", "AI_TroopSpawner" },
		{ "ModuleRelativePath", "Public/AI_TroopSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_t_troopMelee = { "t_troopMelee", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_TroopSpawner, t_troopMelee), Z_Construct_UClass_ATroop_melee_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_t_troopMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_t_troopMelee_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_TroopSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_SpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_TroopSpawner_Statics::NewProp_t_troopMelee,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_TroopSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_TroopSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_TroopSpawner_Statics::ClassParams = {
		&AAI_TroopSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_TroopSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_TroopSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_TroopSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_TroopSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_TroopSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_TroopSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_TroopSpawner, 3015216716);
	template<> TOWERDEFENCE_API UClass* StaticClass<AAI_TroopSpawner>()
	{
		return AAI_TroopSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_TroopSpawner(Z_Construct_UClass_AAI_TroopSpawner, &AAI_TroopSpawner::StaticClass, TEXT("/Script/TowerDefence"), TEXT("AAI_TroopSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_TroopSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
