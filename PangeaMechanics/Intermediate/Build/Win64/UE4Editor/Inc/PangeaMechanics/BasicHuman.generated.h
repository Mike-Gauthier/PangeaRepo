// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef PANGEAMECHANICS_BasicHuman_generated_h
#error "BasicHuman.generated.h already included, missing '#pragma once' in BasicHuman.h"
#endif
#define PANGEAMECHANICS_BasicHuman_generated_h

#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_SPARSE_DATA
#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPointNearOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointNearOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceToOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceToOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetMyOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfOwnerIsNear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfOwnerIsNear(); \
		P_NATIVE_END; \
	}


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPointNearOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointNearOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDistanceToOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDistanceToOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetMyOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfOwnerIsNear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfOwnerIsNear(); \
		P_NATIVE_END; \
	}


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_EVENT_PARMS
#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_CALLBACK_WRAPPERS
#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicHuman(); \
	friend struct Z_Construct_UClass_ABasicHuman_Statics; \
public: \
	DECLARE_CLASS(ABasicHuman, APangeaMechanicsCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(ABasicHuman)


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABasicHuman(); \
	friend struct Z_Construct_UClass_ABasicHuman_Statics; \
public: \
	DECLARE_CLASS(ABasicHuman, APangeaMechanicsCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(ABasicHuman)


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicHuman(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicHuman) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicHuman); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicHuman); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicHuman(ABasicHuman&&); \
	NO_API ABasicHuman(const ABasicHuman&); \
public:


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicHuman() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicHuman(ABasicHuman&&); \
	NO_API ABasicHuman(const ABasicHuman&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicHuman); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicHuman); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicHuman)


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_PRIVATE_PROPERTY_OFFSET
#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_18_PROLOG \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_EVENT_PARMS


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_RPC_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_CALLBACK_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_INCLASS \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_CALLBACK_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_INCLASS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_BasicHuman_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEAMECHANICS_API UClass* StaticClass<class ABasicHuman>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PangeaMechanics_Source_PangeaMechanics_BasicHuman_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
