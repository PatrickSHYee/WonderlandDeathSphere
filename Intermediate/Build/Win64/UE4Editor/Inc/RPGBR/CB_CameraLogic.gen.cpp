// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGBR/CB_CameraLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_CameraLogic() {}
// Cross Module References
	RPGBR_API UClass* Z_Construct_UClass_ACB_CameraLogic_NoRegister();
	RPGBR_API UClass* Z_Construct_UClass_ACB_CameraLogic();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RPGBR();
// End Cross Module References
	void ACB_CameraLogic::StaticRegisterNativesACB_CameraLogic()
	{
	}
	UClass* Z_Construct_UClass_ACB_CameraLogic_NoRegister()
	{
		return ACB_CameraLogic::StaticClass();
	}
	struct Z_Construct_UClass_ACB_CameraLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACB_CameraLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGBR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACB_CameraLogic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CB_CameraLogic.h" },
		{ "ModuleRelativePath", "CB_CameraLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACB_CameraLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_CameraLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACB_CameraLogic_Statics::ClassParams = {
		&ACB_CameraLogic::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ACB_CameraLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACB_CameraLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACB_CameraLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACB_CameraLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACB_CameraLogic, 4093014963);
	template<> RPGBR_API UClass* StaticClass<ACB_CameraLogic>()
	{
		return ACB_CameraLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACB_CameraLogic(Z_Construct_UClass_ACB_CameraLogic, &ACB_CameraLogic::StaticClass, TEXT("/Script/RPGBR"), TEXT("ACB_CameraLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACB_CameraLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
