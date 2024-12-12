// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AIClasses/MeleeAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAI() {}
// Cross Module References
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAIBaseClass();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AMeleeAI();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AMeleeAI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void AMeleeAI::StaticRegisterNativesAMeleeAI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeleeAI);
	UClass* Z_Construct_UClass_AMeleeAI_NoRegister()
	{
		return AMeleeAI::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeAI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIClasses/MeleeAI.h" },
		{ "ModuleRelativePath", "AIClasses/MeleeAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeleeAI_Statics::ClassParams = {
		&AMeleeAI::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeAI_Statics::Class_MetaDataParams), Z_Construct_UClass_AMeleeAI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMeleeAI()
	{
		if (!Z_Registration_Info_UClass_AMeleeAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeleeAI.OuterSingleton, Z_Construct_UClass_AMeleeAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMeleeAI.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<AMeleeAI>()
	{
		return AMeleeAI::StaticClass();
	}
	AMeleeAI::AMeleeAI() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeAI);
	AMeleeAI::~AMeleeAI() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_MeleeAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_MeleeAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMeleeAI, AMeleeAI::StaticClass, TEXT("AMeleeAI"), &Z_Registration_Info_UClass_AMeleeAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeleeAI), 102350682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_MeleeAI_h_1019046134(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_MeleeAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AIClasses_MeleeAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
