// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PANGEAMECHANICS_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define PANGEAMECHANICS_Item_generated_h

#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_SPARSE_DATA
#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerExit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Use(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableActor) \
	{ \
		P_GET_UBOOL(Z_Param_hide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableActor(Z_Param_hide); \
		P_NATIVE_END; \
	}


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerExit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Use(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableActor) \
	{ \
		P_GET_UBOOL(Z_Param_hide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableActor(Z_Param_hide); \
		P_NATIVE_END; \
	}


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PangeaMechanics"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_PRIVATE_PROPERTY_OFFSET
#define PangeaMechanics_Source_PangeaMechanics_Item_h_10_PROLOG
#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_RPC_WRAPPERS \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_INCLASS \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PangeaMechanics_Source_PangeaMechanics_Item_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_PRIVATE_PROPERTY_OFFSET \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_SPARSE_DATA \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_INCLASS_NO_PURE_DECLS \
	PangeaMechanics_Source_PangeaMechanics_Item_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEAMECHANICS_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PangeaMechanics_Source_PangeaMechanics_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
