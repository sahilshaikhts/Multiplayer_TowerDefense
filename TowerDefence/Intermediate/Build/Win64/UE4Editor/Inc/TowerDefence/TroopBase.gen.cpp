// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/TroopBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTroopBase() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void ATroopBase::StaticRegisterNativesATroopBase()
	{
	}
	UClass* Z_Construct_UClass_ATroopBase_NoRegister()
	{
		return ATroopBase::StaticClass();
	}
	struct Z_Construct_UClass_ATroopBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_col_towerDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_col_towerDetection;
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
	UObject* (*const Z_Construct_UClass_ATroopBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TroopBase.h" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_col_towerDetection_MetaData[] = {
		{ "Category", "TroopBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_col_towerDetection = { "col_towerDetection", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, col_towerDetection), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_col_towerDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_col_towerDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, collider), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATroopBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_col_towerDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATroopBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATroopBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATroopBase_Statics::ClassParams = {
		&ATroopBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATroopBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATroopBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATroopBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATroopBase, 1635184364);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATroopBase>()
	{
		return ATroopBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATroopBase(Z_Construct_UClass_ATroopBase, &ATroopBase::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATroopBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATroopBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
