// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PANGEAMECHANICS_AnimalTriggerBox_generated_h
#error "AnimalTriggerBox.generated.h already included, missing '#pragma once' in AnimalTriggerBox.h"
#endif
#define PANGEAMECHANICS_AnimalTriggerBox_generated_h

#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_SPARSE_DATA
#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimalTriggerBox(); \
	friend struct Z_Construct_UClass_AAnimalTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AAnimalTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(AAnimalTriggerBox)


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAnimalTriggerBox(); \
	friend struct Z_Construct_UClass_AAnimalTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AAnimalTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(AAnimalTriggerBox)


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimalTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimalTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimalTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimalTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimalTriggerBox(AAnimalTriggerBox&&); \
	NO_API AAnimalTriggerBox(const AAnimalTriggerBox&); \
public:


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimalTriggerBox(AAnimalTriggerBox&&); \
	NO_API AAnimalTriggerBox(const AAnimalTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimalTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimalTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimalTriggerBox)


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_12_PROLOG
#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_RPC_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_INCLASS \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEAMECHANICS_API UClass* StaticClass<class AAnimalTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PangeaMechanics_Source_PangeaMechanics_AnimalTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
