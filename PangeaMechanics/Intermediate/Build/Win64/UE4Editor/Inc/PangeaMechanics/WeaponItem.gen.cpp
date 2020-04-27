// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/WeaponItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponItem() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_AWeaponItem_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_AWeaponItem();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void AWeaponItem::StaticRegisterNativesAWeaponItem()
	{
	}
	UClass* Z_Construct_UClass_AWeaponItem_NoRegister()
	{
		return AWeaponItem::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponItem.h" },
		{ "ModuleRelativePath", "WeaponItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponItem_Statics::ClassParams = {
		&AWeaponItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponItem, 1271249988);
	template<> PANGEAMECHANICS_API UClass* StaticClass<AWeaponItem>()
	{
		return AWeaponItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponItem(Z_Construct_UClass_AWeaponItem, &AWeaponItem::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("AWeaponItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
