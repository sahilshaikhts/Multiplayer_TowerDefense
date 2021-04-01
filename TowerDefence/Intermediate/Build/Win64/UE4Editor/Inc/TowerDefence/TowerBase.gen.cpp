// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/TowerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerBase() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATowerBase::execServer_CheckForTroops)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_CheckForTroops_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_CheckForTroops_Validate"));
			return;
		}
		P_THIS->Server_CheckForTroops_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerBase::execGetDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDamage(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerBase::execServer_StartDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartDestroy_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StartDestroy_Validate"));
			return;
		}
		P_THIS->Server_StartDestroy_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATowerBase_Server_CheckForTroops = FName(TEXT("Server_CheckForTroops"));
	void ATowerBase::Server_CheckForTroops()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATowerBase_Server_CheckForTroops),NULL);
	}
	static FName NAME_ATowerBase_Server_StartDestroy = FName(TEXT("Server_StartDestroy"));
	void ATowerBase::Server_StartDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATowerBase_Server_StartDestroy),NULL);
	}
	void ATowerBase::StaticRegisterNativesATowerBase()
	{
		UClass* Class = ATowerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamage", &ATowerBase::execGetDamage },
			{ "Server_CheckForTroops", &ATowerBase::execServer_CheckForTroops },
			{ "Server_StartDestroy", &ATowerBase::execServer_StartDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATowerBase_GetDamage_Statics
	{
		struct TowerBase_eventGetDamage_Parms
		{
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATowerBase_GetDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TowerBase_eventGetDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATowerBase_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TowerBase_eventGetDamage_Parms), &Z_Construct_UFunction_ATowerBase_GetDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATowerBase_GetDamage_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TowerBase_eventGetDamage_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowerBase_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowerBase_GetDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowerBase_GetDamage_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "GetDamage", nullptr, nullptr, sizeof(TowerBase_eventGetDamage_Parms), Z_Construct_UFunction_ATowerBase_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATowerBase_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerBase_Server_CheckForTroops_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_Server_CheckForTroops_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//returns false when hp<=0\n//Check for overlaping troops entering and leaving\n" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
		{ "ToolTip", "returns false when hp<=0\nCheck for overlaping troops entering and leaving" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_Server_CheckForTroops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "Server_CheckForTroops", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_Server_CheckForTroops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_Server_CheckForTroops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_Server_CheckForTroops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATowerBase_Server_CheckForTroops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerBase_Server_StartDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_Server_StartDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_Server_StartDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "Server_StartDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_Server_StartDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_Server_StartDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_Server_StartDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATowerBase_Server_StartDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATowerBase_NoRegister()
	{
		return ATowerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATowerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sfx_fire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sfx_fire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_col_troopDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_col_troopDetection;
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
	UObject* (*const Z_Construct_UClass_ATowerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATowerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowerBase_GetDamage, "GetDamage" }, // 2128086584
		{ &Z_Construct_UFunction_ATowerBase_Server_CheckForTroops, "Server_CheckForTroops" }, // 1461985604
		{ &Z_Construct_UFunction_ATowerBase_Server_StartDestroy, "Server_StartDestroy" }, // 2514884082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TowerBase.h" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_currentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_currentTarget = { "currentTarget", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase, currentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_currentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_currentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_sfx_fire_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_sfx_fire = { "sfx_fire", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase, sfx_fire), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_sfx_fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_sfx_fire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "AduioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a003d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_col_troopDetection_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_col_troopDetection = { "col_troopDetection", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase, col_troopDetection), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_col_troopDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_col_troopDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase, mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase, collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_currentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_sfx_fire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_col_troopDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerBase_Statics::ClassParams = {
		&ATowerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATowerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerBase, 3182468253);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerBase>()
	{
		return ATowerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerBase(Z_Construct_UClass_ATowerBase, &ATowerBase::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATowerBase"), false, nullptr, nullptr, nullptr);

	void ATowerBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AudioComponent(TEXT("AudioComponent"));
		static const FName Name_currentTarget(TEXT("currentTarget"));

		const bool bIsValid = true
			&& Name_AudioComponent == ClassReps[(int32)ENetFields_Private::AudioComponent].Property->GetFName()
			&& Name_currentTarget == ClassReps[(int32)ENetFields_Private::currentTarget].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATowerBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
