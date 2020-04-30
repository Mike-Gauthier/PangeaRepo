// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/BearTrapItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearTrapItem() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABearTrapItem_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABearTrapItem();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void ABearTrapItem::StaticRegisterNativesABearTrapItem()
	{
	}
	UClass* Z_Construct_UClass_ABearTrapItem_NoRegister()
	{
		return ABearTrapItem::StaticClass();
	}
	struct Z_Construct_UClass_ABearTrapItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABearTrapItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrapItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BearTrapItem.h" },
		{ "ModuleRelativePath", "BearTrapItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active_MetaData[] = {
		{ "Category", "BearTrapItem" },
		{ "ModuleRelativePath", "BearTrapItem.h" },
	};
#endif
	void Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active_SetBit(void* Obj)
	{
		((ABearTrapItem*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABearTrapItem), &Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABearTrapItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearTrapItem_Statics::NewProp_active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearTrapItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearTrapItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABearTrapItem_Statics::ClassParams = {
		&ABearTrapItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABearTrapItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrapItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABearTrapItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABearTrapItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABearTrapItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABearTrapItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABearTrapItem, 3345802154);
	template<> PANGEAMECHANICS_API UClass* StaticClass<ABearTrapItem>()
	{
		return ABearTrapItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABearTrapItem(Z_Construct_UClass_ABearTrapItem, &ABearTrapItem::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("ABearTrapItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABearTrapItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
