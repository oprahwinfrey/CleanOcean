// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWP2/Public/ShipController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipController() {}
// Cross Module References
	DWP2_API UClass* Z_Construct_UClass_AShipController();
	DWP2_API UClass* Z_Construct_UClass_AShipController_NoRegister();
	DWP2_API UClass* Z_Construct_UClass_UShipEngineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DWP2();
// End Cross Module References
	void AShipController::StaticRegisterNativesAShipController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShipController);
	UClass* Z_Construct_UClass_AShipController_NoRegister()
	{
		return AShipController::StaticClass();
	}
	struct Z_Construct_UClass_AShipController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Engines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Engines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Engines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShipController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DWP2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages ship and ship components.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShipController.h" },
		{ "ModuleRelativePath", "Public/ShipController.h" },
		{ "ToolTip", "Manages ship and ship components." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShipController_Statics::NewProp_Engines_Inner = { "Engines", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UShipEngineComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShipController_Statics::NewProp_Engines_MetaData[] = {
		{ "Category", "ShipController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShipController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShipController_Statics::NewProp_Engines = { "Engines", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShipController, Engines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShipController_Statics::NewProp_Engines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShipController_Statics::NewProp_Engines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShipController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipController_Statics::NewProp_Engines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShipController_Statics::NewProp_Engines,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShipController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShipController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShipController_Statics::ClassParams = {
		&AShipController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShipController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShipController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShipController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShipController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShipController()
	{
		if (!Z_Registration_Info_UClass_AShipController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShipController.OuterSingleton, Z_Construct_UClass_AShipController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShipController.OuterSingleton;
	}
	template<> DWP2_API UClass* StaticClass<AShipController>()
	{
		return AShipController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipController);
	AShipController::~AShipController() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShipController, AShipController::StaticClass, TEXT("AShipController"), &Z_Registration_Info_UClass_AShipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShipController), 3880987074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipController_h_3127586175(TEXT("/Script/DWP2"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
