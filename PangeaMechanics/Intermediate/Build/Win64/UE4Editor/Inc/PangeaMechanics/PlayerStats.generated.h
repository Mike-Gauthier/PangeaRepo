// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEAMECHANICS_PlayerStats_generated_h
#error "PlayerStats.generated.h already included, missing '#pragma once' in PlayerStats.h"
#endif
#define PANGEAMECHANICS_PlayerStats_generated_h

#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_SPARSE_DATA
#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_RPC_WRAPPERS
#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStats(); \
	friend struct Z_Construct_UClass_UPlayerStats_Statics; \
public: \
	DECLARE_CLASS(UPlayerStats, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStats)


#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerStats(); \
	friend struct Z_Construct_UClass_UPlayerStats_Statics; \
public: \
	DECLARE_CLASS(UPlayerStats, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStats)


#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStats(UPlayerStats&&); \
	NO_API UPlayerStats(const UPlayerStats&); \
public:


#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStats(UPlayerStats&&); \
	NO_API UPlayerStats(const UPlayerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStats)


#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxPlayerHealth() { return STRUCT_OFFSET(UPlayerStats, MaxPlayerHealth); }


#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_10_PROLOG
#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_RPC_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_INCLASS \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_INCLASS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_PlayerStats_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEAMECHANICS_API UClass* StaticClass<class UPlayerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PangeaMechanics_Source_PangeaMechanics_PlayerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
