// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Tasks/Enemy/TokenCheckTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTokenCheckTask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UTokenCheckTask();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UTokenCheckTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void UTokenCheckTask::StaticRegisterNativesUTokenCheckTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTokenCheckTask);
	UClass* Z_Construct_UClass_UTokenCheckTask_NoRegister()
	{
		return UTokenCheckTask::StaticClass();
	}
	struct Z_Construct_UClass_UTokenCheckTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTokenCheckTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTokenCheckTask_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenCheckTask_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI Tasks/Enemy/TokenCheckTask.h" },
		{ "ModuleRelativePath", "AI Tasks/Enemy/TokenCheckTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTokenCheckTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTokenCheckTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTokenCheckTask_Statics::ClassParams = {
		&UTokenCheckTask::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTokenCheckTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UTokenCheckTask_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTokenCheckTask()
	{
		if (!Z_Registration_Info_UClass_UTokenCheckTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTokenCheckTask.OuterSingleton, Z_Construct_UClass_UTokenCheckTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTokenCheckTask.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<UTokenCheckTask>()
	{
		return UTokenCheckTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTokenCheckTask);
	UTokenCheckTask::~UTokenCheckTask() {}
	struct Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_Enemy_TokenCheckTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_Enemy_TokenCheckTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTokenCheckTask, UTokenCheckTask::StaticClass, TEXT("UTokenCheckTask"), &Z_Registration_Info_UClass_UTokenCheckTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTokenCheckTask), 3747497689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_Enemy_TokenCheckTask_h_259453630(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_Enemy_TokenCheckTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Tasks_Enemy_TokenCheckTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
