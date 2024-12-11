// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AIClasses/AIBaseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBaseClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAIBaseClass();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAIBaseClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void AAIBaseClass::StaticRegisterNativesAAIBaseClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIBaseClass);
	UClass* Z_Construct_UClass_AAIBaseClass_NoRegister()
	{
		return AAIBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_AAIBaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBaseClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIClasses/AIBaseClass.h" },
		{ "ModuleRelativePath", "AIClasses/AIBaseClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBaseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIBaseClass_Statics::ClassParams = {
		&AAIBaseClass::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIBaseClass_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAIBaseClass()
	{
		if (!Z_Registration_Info_UClass_AAIBaseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIBaseClass.OuterSingleton, Z_Construct_UClass_AAIBaseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIBaseClass.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<AAIBaseClass>()
	{
		return AAIBaseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBaseClass);
	AAIBaseClass::~AAIBaseClass() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_Unreal_Projects_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_AIBaseClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_Unreal_Projects_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_AIBaseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIBaseClass, AAIBaseClass::StaticClass, TEXT("AAIBaseClass"), &Z_Registration_Info_UClass_AAIBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIBaseClass), 1231399002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_Unreal_Projects_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_AIBaseClass_h_4011610025(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_Unreal_Projects_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_AIBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_Unreal_Projects_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_AIBaseClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
