// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEAMECHANICS_RideAnimal_generated_h
#error "RideAnimal.generated.h already included, missing '#pragma once' in RideAnimal.h"
#endif
#define PANGEAMECHANICS_RideAnimal_generated_h

#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_SPARSE_DATA
#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_RPC_WRAPPERS
#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURideAnimal(); \
	friend struct Z_Construct_UClass_URideAnimal_Statics; \
public: \
	DECLARE_CLASS(URideAnimal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(URideAnimal)


#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURideAnimal(); \
	friend struct Z_Construct_UClass_URideAnimal_Statics; \
public: \
	DECLARE_CLASS(URideAnimal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(URideAnimal)


#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URideAnimal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URideAnimal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URideAnimal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URideAnimal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URideAnimal(URideAnimal&&); \
	NO_API URideAnimal(const URideAnimal&); \
public:


#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URideAnimal(URideAnimal&&); \
	NO_API URideAnimal(const URideAnimal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URideAnimal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URideAnimal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URideAnimal)


#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsFlyingOn() { return STRUCT_OFFSET(URideAnimal, IsFlyingOn); } \
	FORCEINLINE static uint32 __PPO__AnimalFlyingSpeed() { return STRUCT_OFFSET(URideAnimal, AnimalFlyingSpeed); } \
	FORCEINLINE static uint32 __PPO__MaximumFlyingDismountHeight() { return STRUCT_OFFSET(URideAnimal, MaximumFlyingDismountHeight); } \
	FORCEINLINE static uint32 __PPO__RidingRegionTriggerBox() { return STRUCT_OFFSET(URideAnimal, RidingRegionTriggerBox); }


#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_16_PROLOG
#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_RPC_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_INCLASS \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_INCLASS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_RideAnimal_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEAMECHANICS_API UClass* StaticClass<class URideAnimal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PangeaMechanics_Source_PangeaMechanics_RideAnimal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
