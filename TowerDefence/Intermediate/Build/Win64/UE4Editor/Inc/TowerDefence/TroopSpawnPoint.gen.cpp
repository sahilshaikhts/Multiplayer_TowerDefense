// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/TroopSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTroopSpawnPoint() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopSpawnPoint_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ATroopSpawnPoint::StaticRegisterNativesATroopSpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_ATroopSpawnPoint_NoRegister()
	{
		return ATroopSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ATroopSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATroopSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TroopSpawnPoint.h" },
		{ "ModuleRelativePath", "Public/TroopSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopSpawnPoint, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "TroopSpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopSpawnPoint, collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATroopSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopSpawnPoint_Statics::NewProp_collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATroopSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATroopSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATroopSpawnPoint_Statics::ClassParams = {
		&ATroopSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATroopSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATroopSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATroopSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATroopSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATroopSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATroopSpawnPoint, 2655842563);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATroopSpawnPoint>()
	{
		return ATroopSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATroopSpawnPoint(Z_Construct_UClass_ATroopSpawnPoint, &ATroopSpawnPoint::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATroopSpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATroopSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
