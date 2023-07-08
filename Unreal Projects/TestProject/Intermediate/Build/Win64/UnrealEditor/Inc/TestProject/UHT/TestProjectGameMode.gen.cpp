// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectGameMode();
	TESTPROJECT_API UClass* Z_Construct_UClass_ATestProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References
	void ATestProjectGameMode::StaticRegisterNativesATestProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestProjectGameMode);
	UClass* Z_Construct_UClass_ATestProjectGameMode_NoRegister()
	{
		return ATestProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestProjectGameMode.h" },
		{ "ModuleRelativePath", "TestProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestProjectGameMode_Statics::ClassParams = {
		&ATestProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_ATestProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestProjectGameMode.OuterSingleton, Z_Construct_UClass_ATestProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestProjectGameMode.OuterSingleton;
	}
	template<> TESTPROJECT_API UClass* StaticClass<ATestProjectGameMode>()
	{
		return ATestProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestProjectGameMode);
	ATestProjectGameMode::~ATestProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_zella_OneDrive_Documents_Unreal_Projects_TestProject_Source_TestProject_TestProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zella_OneDrive_Documents_Unreal_Projects_TestProject_Source_TestProject_TestProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestProjectGameMode, ATestProjectGameMode::StaticClass, TEXT("ATestProjectGameMode"), &Z_Registration_Info_UClass_ATestProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestProjectGameMode), 1988760657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zella_OneDrive_Documents_Unreal_Projects_TestProject_Source_TestProject_TestProjectGameMode_h_2835816405(TEXT("/Script/TestProject"),
		Z_CompiledInDeferFile_FID_Users_zella_OneDrive_Documents_Unreal_Projects_TestProject_Source_TestProject_TestProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zella_OneDrive_Documents_Unreal_Projects_TestProject_Source_TestProject_TestProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
