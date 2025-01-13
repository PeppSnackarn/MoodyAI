// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/GameMode & Stuff/GameInst.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UGameInst();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UGameInst_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void UGameInst::StaticRegisterNativesUGameInst()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInst);
	UClass* Z_Construct_UClass_UGameInst_NoRegister()
	{
		return UGameInst::StaticClass();
	}
	struct Z_Construct_UClass_UGameInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInst_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInst_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameMode & Stuff/GameInst.h" },
		{ "ModuleRelativePath", "GameMode & Stuff/GameInst.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInst_Statics::ClassParams = {
		&UGameInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInst_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInst_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameInst()
	{
		if (!Z_Registration_Info_UClass_UGameInst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInst.OuterSingleton, Z_Construct_UClass_UGameInst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInst.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<UGameInst>()
	{
		return UGameInst::StaticClass();
	}
	UGameInst::UGameInst(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInst);
	UGameInst::~UGameInst() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_GameMode___Stuff_GameInst_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_GameMode___Stuff_GameInst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInst, UGameInst::StaticClass, TEXT("UGameInst"), &Z_Registration_Info_UClass_UGameInst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInst), 3229169367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_GameMode___Stuff_GameInst_h_2663782263(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_GameMode___Stuff_GameInst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_GameMode___Stuff_GameInst_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
