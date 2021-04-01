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
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UAIMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATroopBase::execSlowMo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlowMo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATroopBase::execGetAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttack();
		P_NATIVE_END;
	}
	void ATroopBase::StaticRegisterNativesATroopBase()
	{
		UClass* Class = ATroopBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttack", &ATroopBase::execGetAttack },
			{ "SlowMo", &ATroopBase::execSlowMo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATroopBase_GetAttack_Statics
	{
		struct TroopBase_eventGetAttack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATroopBase_GetAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TroopBase_eventGetAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATroopBase_GetAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TroopBase_eventGetAttack_Parms), &Z_Construct_UFunction_ATroopBase_GetAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATroopBase_GetAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATroopBase_GetAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATroopBase_GetAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATroopBase_GetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATroopBase, nullptr, "GetAttack", nullptr, nullptr, sizeof(TroopBase_eventGetAttack_Parms), Z_Construct_UFunction_ATroopBase_GetAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroopBase_GetAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATroopBase_GetAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroopBase_GetAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATroopBase_GetAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATroopBase_GetAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATroopBase_SlowMo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATroopBase_SlowMo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATroopBase_SlowMo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATroopBase, nullptr, "SlowMo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATroopBase_SlowMo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroopBase_SlowMo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATroopBase_SlowMo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATroopBase_SlowMo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATroopBase_NoRegister()
	{
		return ATroopBase::StaticClass();
	}
	struct Z_Construct_UClass_ATroopBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_die_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_die;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_hurt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_hurt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movmentComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movmentComponent;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ATroopBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATroopBase_GetAttack, "GetAttack" }, // 2488144806
		{ &Z_Construct_UFunction_ATroopBase_SlowMo, "SlowMo" }, // 1075298664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TroopBase.h" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_die_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "//AC_2\n" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
		{ "ToolTip", "AC_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_die = { "sfx_die", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, sfx_die), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_die_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_die_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_hurt_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_hurt = { "sfx_hurt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, sfx_hurt), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_hurt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_hurt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_attack_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_attack = { "sfx_attack", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, sfx_attack), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_2_MetaData[] = {
		{ "Category", "AduioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_2 = { "AudioComponent_2", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, AudioComponent_2), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "AduioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_movmentComponent_MetaData[] = {
		{ "Category", "TroopBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_movmentComponent = { "movmentComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, movmentComponent), Z_Construct_UClass_UAIMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_movmentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_movmentComponent_MetaData)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroopBase_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TroopBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATroopBase_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATroopBase, collider), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATroopBase_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATroopBase_Statics::NewProp_collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATroopBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_die,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_hurt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_sfx_attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATroopBase_Statics::NewProp_movmentComponent,
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
		FuncInfo,
		Z_Construct_UClass_ATroopBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATroopBase, 160447144);
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
