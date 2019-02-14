// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotGoneHome/DissolveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDissolveManager() {}
// Cross Module References
	NOTGONEHOME_API UClass* Z_Construct_UClass_ADissolveManager_NoRegister();
	NOTGONEHOME_API UClass* Z_Construct_UClass_ADissolveManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NotGoneHome();
	NOTGONEHOME_API UFunction* Z_Construct_UFunction_ADissolveManager_SetDissolve();
// End Cross Module References
	void ADissolveManager::StaticRegisterNativesADissolveManager()
	{
		UClass* Class = ADissolveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDissolve", &ADissolveManager::execSetDissolve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics
	{
		struct DissolveManager_eventSetDissolve_Parms
		{
			bool dissolving;
		};
		static void NewProp_dissolving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dissolving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::NewProp_dissolving_SetBit(void* Obj)
	{
		((DissolveManager_eventSetDissolve_Parms*)Obj)->dissolving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::NewProp_dissolving = { UE4CodeGen_Private::EPropertyClass::Bool, "dissolving", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DissolveManager_eventSetDissolve_Parms), &Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::NewProp_dissolving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::NewProp_dissolving,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DissolveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADissolveManager, "SetDissolve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DissolveManager_eventSetDissolve_Parms), Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADissolveManager_SetDissolve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADissolveManager_SetDissolve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADissolveManager_NoRegister()
	{
		return ADissolveManager::StaticClass();
	}
	struct Z_Construct_UClass_ADissolveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADissolveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NotGoneHome,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADissolveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADissolveManager_SetDissolve, "SetDissolve" }, // 3456451933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADissolveManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DissolveManager.h" },
		{ "ModuleRelativePath", "DissolveManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADissolveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADissolveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADissolveManager_Statics::ClassParams = {
		&ADissolveManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADissolveManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADissolveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADissolveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADissolveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADissolveManager, 237569389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADissolveManager(Z_Construct_UClass_ADissolveManager, &ADissolveManager::StaticClass, TEXT("/Script/NotGoneHome"), TEXT("ADissolveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADissolveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
