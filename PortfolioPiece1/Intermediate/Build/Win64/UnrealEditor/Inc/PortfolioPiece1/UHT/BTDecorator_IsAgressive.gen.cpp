// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Decorators/BTDecorator_IsAgressive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsAgressive() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UBTDecorator_IsAgressive();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UBTDecorator_IsAgressive_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void UBTDecorator_IsAgressive::StaticRegisterNativesUBTDecorator_IsAgressive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsAgressive);
	UClass* Z_Construct_UClass_UBTDecorator_IsAgressive_NoRegister()
	{
		return UBTDecorator_IsAgressive::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsAgressive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_conditionToCheck_MetaData[];
#endif
		static void NewProp_conditionToCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_conditionToCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI Decorators/BTDecorator_IsAgressive.h" },
		{ "ModuleRelativePath", "AI Decorators/BTDecorator_IsAgressive.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck_MetaData[] = {
		{ "Category", "BTDecorator_IsAgressive" },
		{ "ModuleRelativePath", "AI Decorators/BTDecorator_IsAgressive.h" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck_SetBit(void* Obj)
	{
		((UBTDecorator_IsAgressive*)Obj)->conditionToCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck = { "conditionToCheck", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTDecorator_IsAgressive), &Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck_MetaData), Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::NewProp_conditionToCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsAgressive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::ClassParams = {
		&UBTDecorator_IsAgressive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTDecorator_IsAgressive()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_IsAgressive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsAgressive.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsAgressive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_IsAgressive.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<UBTDecorator_IsAgressive>()
	{
		return UBTDecorator_IsAgressive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsAgressive);
	UBTDecorator_IsAgressive::~UBTDecorator_IsAgressive() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Decorators_BTDecorator_IsAgressive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Decorators_BTDecorator_IsAgressive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsAgressive, UBTDecorator_IsAgressive::StaticClass, TEXT("UBTDecorator_IsAgressive"), &Z_Registration_Info_UClass_UBTDecorator_IsAgressive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsAgressive), 4220403762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Decorators_BTDecorator_IsAgressive_h_2135240015(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Decorators_BTDecorator_IsAgressive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Decorators_BTDecorator_IsAgressive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
