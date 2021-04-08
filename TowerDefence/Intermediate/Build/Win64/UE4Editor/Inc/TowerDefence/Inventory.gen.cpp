// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	TOWERDEFENCE_API UEnum* Z_Construct_UEnum_TowerDefence_MyEnums();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AInventory_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AInventory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* MyEnums_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefence_MyEnums, Z_Construct_UPackage__Script_TowerDefence(), TEXT("MyEnums"));
		}
		return Singleton;
	}
	template<> TOWERDEFENCE_API UEnum* StaticEnum<MyEnums::Item>()
	{
		return MyEnums_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MyEnums(MyEnums_StaticEnum, TEXT("/Script/TowerDefence"), TEXT("MyEnums"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefence_MyEnums_Hash() { return 3305949601U; }
	UEnum* Z_Construct_UEnum_TowerDefence_MyEnums()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefence();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MyEnums"), 0, Get_Z_Construct_UEnum_TowerDefence_MyEnums_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MyEnums::troop_swordsMan", (int64)MyEnums::troop_swordsMan },
				{ "MyEnums::troop_archer", (int64)MyEnums::troop_archer },
				{ "MyEnums::tower_XBow", (int64)MyEnums::tower_XBow },
				{ "MyEnums::tower_canon", (int64)MyEnums::tower_canon },
				{ "MyEnums::TypesCount", (int64)MyEnums::TypesCount },
				{ "MyEnums::none", (int64)MyEnums::none },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Custom enums\n//Arranged according to how powerful(hp,attackRate,damge) the item is\n" },
				{ "ModuleRelativePath", "Public/Inventory.h" },
				{ "none.Name", "MyEnums::none" },
				{ "ToolTip", "Custom enums\nArranged according to how powerful(hp,attackRate,damge) the item is" },
				{ "tower_canon.Name", "MyEnums::tower_canon" },
				{ "tower_XBow.Name", "MyEnums::tower_XBow" },
				{ "troop_archer.Name", "MyEnums::troop_archer" },
				{ "troop_swordsMan.Name", "MyEnums::troop_swordsMan" },
				{ "TypesCount.Name", "MyEnums::TypesCount" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefence,
				nullptr,
				"MyEnums",
				"MyEnums::Item",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AInventory::execGetItemCount)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemCount(MyEnums::Item(Z_Param_item));
		P_NATIVE_END;
	}
	void AInventory::StaticRegisterNativesAInventory()
	{
		UClass* Class = AInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemCount", &AInventory::execGetItemCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInventory_GetItemCount_Statics
	{
		struct Inventory_eventGetItemCount_Parms
		{
			TEnumAsByte<MyEnums::Item> item;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AInventory_GetItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInventory_GetItemCount_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemCount_Parms, item), Z_Construct_UEnum_TowerDefence_MyEnums, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInventory_GetItemCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetItemCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInventory_GetItemCount_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInventory_GetItemCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInventory_GetItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInventory, nullptr, "GetItemCount", nullptr, nullptr, sizeof(Inventory_eventGetItemCount_Parms), Z_Construct_UFunction_AInventory_GetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetItemCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInventory_GetItemCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInventory_GetItemCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInventory_GetItemCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInventory_GetItemCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInventory_NoRegister()
	{
		return AInventory::StaticClass();
	}
	struct Z_Construct_UClass_AInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInventory_GetItemCount, "GetItemCount" }, // 4201170322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory.h" },
		{ "ModuleRelativePath", "Public/Inventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventory_Statics::ClassParams = {
		&AInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventory, 359191211);
	template<> TOWERDEFENCE_API UClass* StaticClass<AInventory>()
	{
		return AInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventory(Z_Construct_UClass_AInventory, &AInventory::StaticClass, TEXT("/Script/TowerDefence"), TEXT("AInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif