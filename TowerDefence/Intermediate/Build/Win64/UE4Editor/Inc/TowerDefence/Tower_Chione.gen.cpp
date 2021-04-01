// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/Tower_Chione.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_Chione() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATower_Chione_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATower_Chione();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ATower_Chione::StaticRegisterNativesATower_Chione()
	{
	}
	UClass* Z_Construct_UClass_ATower_Chione_NoRegister()
	{
		return ATower_Chione::StaticClass();
	}
	struct Z_Construct_UClass_ATower_Chione_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_Chione_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATowerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_Chione_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tower_Chione.h" },
		{ "ModuleRelativePath", "Public/Tower_Chione.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_Chione_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_Chione>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_Chione_Statics::ClassParams = {
		&ATower_Chione::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATower_Chione_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_Chione_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_Chione()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_Chione_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATower_Chione, 3948875209);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATower_Chione>()
	{
		return ATower_Chione::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_Chione(Z_Construct_UClass_ATower_Chione, &ATower_Chione::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATower_Chione"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_Chione);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
