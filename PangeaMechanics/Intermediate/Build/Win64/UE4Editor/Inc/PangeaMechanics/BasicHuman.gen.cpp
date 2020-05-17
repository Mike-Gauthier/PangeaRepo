// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/BasicHuman.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicHuman() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABasicHuman_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABasicHuman();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_APangeaMechanicsCharacter();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
	PANGEAMECHANICS_API UFunction* Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear();
	PANGEAMECHANICS_API UFunction* Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner();
	PANGEAMECHANICS_API UFunction* Z_Construct_UFunction_ABasicHuman_GetMyOwner();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PANGEAMECHANICS_API UFunction* Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PANGEAMECHANICS_API UFunction* Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_APangeaMechanicsCharacter_NoRegister();
// End Cross Module References
	static FName NAME_ABasicHuman_onOwnerMoveOutOfRange = FName(TEXT("onOwnerMoveOutOfRange"));
	void ABasicHuman::onOwnerMoveOutOfRange()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABasicHuman_onOwnerMoveOutOfRange),NULL);
	}
	void ABasicHuman::StaticRegisterNativesABasicHuman()
	{
		UClass* Class = ABasicHuman::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfOwnerIsNear", &ABasicHuman::execCheckIfOwnerIsNear },
			{ "GetDistanceToOwner", &ABasicHuman::execGetDistanceToOwner },
			{ "GetMyOwner", &ABasicHuman::execGetMyOwner },
			{ "GetRandomPointNearOwner", &ABasicHuman::execGetRandomPointNearOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Navigation" },
		{ "Comment", "//A blueprint function that checks distance to owner, and if greater than the owners 'InfluenceRadius' triggers the onOwnerMoveOutOfRange event.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "A blueprint function that checks distance to owner, and if greater than the owners 'InfluenceRadius' triggers the onOwnerMoveOutOfRange event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicHuman, nullptr, "CheckIfOwnerIsNear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics
	{
		struct BasicHuman_eventGetDistanceToOwner_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicHuman_eventGetDistanceToOwner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Custom Navigation" },
		{ "Comment", "// TODO: Check to see if redundant with CheckIfOwnerIsNear(), very possible to neated up.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "TODO: Check to see if redundant with CheckIfOwnerIsNear(), very possible to neated up." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicHuman, nullptr, "GetDistanceToOwner", nullptr, nullptr, sizeof(BasicHuman_eventGetDistanceToOwner_Parms), Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics
	{
		struct BasicHuman_eventGetMyOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicHuman_eventGetMyOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Custom Navigation" },
		{ "Comment", "//Simple blueprint getter that returns the AActor* for MyOwner.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "Simple blueprint getter that returns the AActor* for MyOwner." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicHuman, nullptr, "GetMyOwner", nullptr, nullptr, sizeof(BasicHuman_eventGetMyOwner_Parms), Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicHuman_GetMyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicHuman_GetMyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics
	{
		struct BasicHuman_eventGetRandomPointNearOwner_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasicHuman_eventGetRandomPointNearOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Custom Navigation" },
		{ "Comment", "//Grabs an FVector of a random point in a circle around the player with a radius equal to the owner's 'Influence Radius'.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "Grabs an FVector of a random point in a circle around the player with a radius equal to the owner's 'Influence Radius'." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicHuman, nullptr, "GetRandomPointNearOwner", nullptr, nullptr, sizeof(BasicHuman_eventGetRandomPointNearOwner_Parms), Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//A blueprint event that signals the creature is now too far from it's owner.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "A blueprint event that signals the creature is now too far from it's owner." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicHuman, nullptr, "onOwnerMoveOutOfRange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicHuman_NoRegister()
	{
		return ABasicHuman::StaticClass();
	}
	struct Z_Construct_UClass_ABasicHuman_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicHuman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APangeaMechanicsCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicHuman_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicHuman_CheckIfOwnerIsNear, "CheckIfOwnerIsNear" }, // 1315801201
		{ &Z_Construct_UFunction_ABasicHuman_GetDistanceToOwner, "GetDistanceToOwner" }, // 728046967
		{ &Z_Construct_UFunction_ABasicHuman_GetMyOwner, "GetMyOwner" }, // 2662288052
		{ &Z_Construct_UFunction_ABasicHuman_GetRandomPointNearOwner, "GetRandomPointNearOwner" }, // 2687615872
		{ &Z_Construct_UFunction_ABasicHuman_onOwnerMoveOutOfRange, "onOwnerMoveOutOfRange" }, // 2173605845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicHuman_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicHuman.h" },
		{ "ModuleRelativePath", "BasicHuman.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicHuman_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "Category", "Pet Information" },
		{ "Comment", "//AActor pointer to the player that 'owns' this creature.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "AActor pointer to the player that 'owns' this creature." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicHuman_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicHuman, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicHuman_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicHuman_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicHuman_Statics::NewProp_MyOwner_MetaData[] = {
		{ "Category", "Pet Information" },
		{ "Comment", "//Mostly a redundant variable, planning on deleting.\n" },
		{ "ModuleRelativePath", "BasicHuman.h" },
		{ "ToolTip", "Mostly a redundant variable, planning on deleting." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicHuman_Statics::NewProp_MyOwner = { "MyOwner", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicHuman, MyOwner), Z_Construct_UClass_APangeaMechanicsCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicHuman_Statics::NewProp_MyOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicHuman_Statics::NewProp_MyOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicHuman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicHuman_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicHuman_Statics::NewProp_MyOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicHuman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicHuman>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicHuman_Statics::ClassParams = {
		&ABasicHuman::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicHuman_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicHuman_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicHuman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicHuman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicHuman()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicHuman_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicHuman, 2629167101);
	template<> PANGEAMECHANICS_API UClass* StaticClass<ABasicHuman>()
	{
		return ABasicHuman::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicHuman(Z_Construct_UClass_ABasicHuman, &ABasicHuman::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("ABasicHuman"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicHuman);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
