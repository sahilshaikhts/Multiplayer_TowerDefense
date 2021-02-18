// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/Tower_Canon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_Canon() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATower_Canon_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATower_Canon();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AProjectile_canon_NoRegister();
// End Cross Module References
	void ATower_Canon::StaticRegisterNativesATower_Canon()
	{
	}
	UClass* Z_Construct_UClass_ATower_Canon_NoRegister()
	{
		return ATower_Canon::StaticClass();
	}
	struct Z_Construct_UClass_ATower_Canon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_t_projectile_canon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_t_projectile_canon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_Canon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATowerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Canon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower_Canon.h" },
		{ "ModuleRelativePath", "Public/Tower_Canon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Canon_Statics::NewProp_t_projectile_canon_MetaData[] = {
		{ "Category", "Tower_Canon" },
		{ "ModuleRelativePath", "Public/Tower_Canon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_Canon_Statics::NewProp_t_projectile_canon = { "t_projectile_canon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_Canon, t_projectile_canon), Z_Construct_UClass_AProjectile_canon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATower_Canon_Statics::NewProp_t_projectile_canon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Canon_Statics::NewProp_t_projectile_canon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_Canon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_Canon_Statics::NewProp_t_projectile_canon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_Canon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_Canon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_Canon_Statics::ClassParams = {
		&ATower_Canon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATower_Canon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Canon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATower_Canon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Canon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_Canon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_Canon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower_Canon, 1951235793);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATower_Canon>()
	{
		return ATower_Canon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_Canon(Z_Construct_UClass_ATower_Canon, &ATower_Canon::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATower_Canon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_Canon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
