// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/MRTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRTower() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMRTower_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMRTower();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AMRProjectile_NoRegister();
// End Cross Module References
	void AMRTower::StaticRegisterNativesAMRTower()
	{
	}
	UClass* Z_Construct_UClass_AMRTower_NoRegister()
	{
		return AMRTower::StaticClass();
	}
	struct Z_Construct_UClass_AMRTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_AMRTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATowerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRTower_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MRTower.h" },
		{ "ModuleRelativePath", "Public/MRTower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMRTower_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "MRTower" },
		{ "ModuleRelativePath", "Public/MRTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMRTower_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMRTower, ProjectileClass), Z_Construct_UClass_AMRProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMRTower_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMRTower_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRTower_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMRTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMRTower_Statics::ClassParams = {
		&AMRTower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMRTower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMRTower_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMRTower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMRTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMRTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMRTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMRTower, 1494534123);
	template<> TOWERDEFENCE_API UClass* StaticClass<AMRTower>()
	{
		return AMRTower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMRTower(Z_Construct_UClass_AMRTower, &AMRTower::StaticClass, TEXT("/Script/TowerDefence"), TEXT("AMRTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMRTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
