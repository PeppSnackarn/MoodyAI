// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Tasks/IdleTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdleTask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UIdleTask();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UIdleTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void UIdleTask::StaticRegisterNativesUIdleTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIdleTask);
	UClass* Z_Construct_UClass_UIdleTask_NoRegister()
	{
		return UIdleTask::StaticClass();
	}
	struct Z_Construct_UClass_UIdleTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIdleTask_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleTask_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI Tasks/IdleTask.h" },
		{ "ModuleRelativePath", "AI Tasks/IdleTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIdleTask_Statics::ClassParams = {
		&UIdleTask::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIdleTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UIdleTask_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIdleTask()
	{
		if (!Z_Registration_Info_UClass_UIdleTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIdleTask.OuterSingleton, Z_Construct_UClass_UIdleTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIdleTask.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<UIdleTask>()
	{
		return UIdleTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleTask);
	UIdleTask::~UIdleTask() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_IdleTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_IdleTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIdleTask, UIdleTask::StaticClass, TEXT("UIdleTask"), &Z_Registration_Info_UClass_UIdleTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIdleTask), 3233011637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_IdleTask_h_1678833912(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_IdleTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_IdleTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
