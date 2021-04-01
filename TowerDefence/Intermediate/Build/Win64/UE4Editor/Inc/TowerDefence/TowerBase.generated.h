// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_TowerBase_generated_h
#error "TowerBase.generated.h already included, missing '#pragma once' in TowerBase.h"
#endif
#define TOWERDEFENCE_TowerBase_generated_h

#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_RPC_WRAPPERS \
	virtual bool Server_CheckForTroops_Validate(); \
	virtual void Server_CheckForTroops_Implementation(); \
	virtual bool Server_StartDestroy_Validate(); \
	virtual void Server_StartDestroy_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_CheckForTroops); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execServer_StartDestroy);


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_CheckForTroops_Validate(); \
	virtual void Server_CheckForTroops_Implementation(); \
	virtual bool Server_StartDestroy_Validate(); \
	virtual void Server_StartDestroy_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_CheckForTroops); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execServer_StartDestroy);


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_EVENT_PARMS
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_CALLBACK_WRAPPERS
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerBase(); \
	friend struct Z_Construct_UClass_ATowerBase_Statics; \
public: \
	DECLARE_CLASS(ATowerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AudioComponent=NETFIELD_REP_START, \
		currentTarget, \
		NETFIELD_REP_END=currentTarget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATowerBase(); \
	friend struct Z_Construct_UClass_ATowerBase_Statics; \
public: \
	DECLARE_CLASS(ATowerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerBase) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AudioComponent=NETFIELD_REP_START, \
		currentTarget, \
		NETFIELD_REP_END=currentTarget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerBase(ATowerBase&&); \
	NO_API ATowerBase(const ATowerBase&); \
public:


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerBase(ATowerBase&&); \
	NO_API ATowerBase(const ATowerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerBase)


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_21_PROLOG \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_EVENT_PARMS


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_CALLBACK_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_INCLASS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_CALLBACK_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATowerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_TowerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
