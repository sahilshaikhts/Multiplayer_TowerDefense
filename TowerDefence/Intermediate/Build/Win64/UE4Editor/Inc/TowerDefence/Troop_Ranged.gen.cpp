// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/Troop_Ranged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTroop_Ranged() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroop_Ranged_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroop_Ranged();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AProjectile_RangedTroop_NoRegister();
// End Cross Module References
	void ATroop_Ranged::StaticRegisterNativesATroop_Ranged()
	{
	}
	UClass* Z_Construct_UClass_ATroop_Ranged_NoRegister()
	{
		return ATroop_Ranged::StaticClass();
	}
	struct Z_Construct_UClass_ATroop_Ranged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Muzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Muzzle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATroop_Ranged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATroopBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroop_Ranged_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Troop_Ranged.h" },
		{ "ModuleRelativePath", "Public/Troop_Ranged.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_Muzzle_MetaData[] = {
		{ "Category", "Troop_Ranged" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Troop_Ranged.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_Muzzle = { "Muzzle", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroop_Ranged, Muzzle), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_Muzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_Muzzle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Troop_Ranged.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroop_Ranged, ProjectileClass), Z_Construct_UClass_AProjectile_RangedTroop_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATroop_Ranged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_Muzzle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroop_Ranged_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATroop_Ranged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATroop_Ranged>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATroop_Ranged_Statics::ClassParams = {
		&ATroop_Ranged::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATroop_Ranged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATroop_Ranged_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATroop_Ranged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATroop_Ranged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATroop_Ranged()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATroop_Ranged_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATroop_Ranged, 2441235668);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATroop_Ranged>()
	{
		return ATroop_Ranged::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATroop_Ranged(Z_Construct_UClass_ATroop_Ranged, &ATroop_Ranged::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATroop_Ranged"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATroop_Ranged);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
