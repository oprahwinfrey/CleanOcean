// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWP2/Public/WaterDataUnrealWater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterDataUnrealWater() {}
// Cross Module References
	DWP2_API UClass* Z_Construct_UClass_UWaterDataBase();
	DWP2_API UClass* Z_Construct_UClass_UWaterDataUnrealWater();
	DWP2_API UClass* Z_Construct_UClass_UWaterDataUnrealWater_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DWP2();
	WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
// End Cross Module References
	void UWaterDataUnrealWater::StaticRegisterNativesUWaterDataUnrealWater()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterDataUnrealWater);
	UClass* Z_Construct_UClass_UWaterDataUnrealWater_NoRegister()
	{
		return UWaterDataUnrealWater::StaticClass();
	}
	struct Z_Construct_UClass_UWaterDataUnrealWater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuoyancyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterDataUnrealWater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DWP2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterDataUnrealWater_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n  * Interface between WaterObject and Unreal Water.\n  */" },
		{ "IncludePath", "WaterDataUnrealWater.h" },
		{ "ModuleRelativePath", "Public/WaterDataUnrealWater.h" },
		{ "ToolTip", "Interface between WaterObject and Unreal Water." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterDataUnrealWater_Statics::NewProp_BuoyancyComponent_MetaData[] = {
		{ "Category", "Water" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterDataUnrealWater.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaterDataUnrealWater_Statics::NewProp_BuoyancyComponent = { "BuoyancyComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterDataUnrealWater, BuoyancyComponent), Z_Construct_UClass_UBuoyancyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterDataUnrealWater_Statics::NewProp_BuoyancyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataUnrealWater_Statics::NewProp_BuoyancyComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterDataUnrealWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterDataUnrealWater_Statics::NewProp_BuoyancyComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterDataUnrealWater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterDataUnrealWater>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterDataUnrealWater_Statics::ClassParams = {
		&UWaterDataUnrealWater::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterDataUnrealWater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataUnrealWater_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterDataUnrealWater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataUnrealWater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterDataUnrealWater()
	{
		if (!Z_Registration_Info_UClass_UWaterDataUnrealWater.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterDataUnrealWater.OuterSingleton, Z_Construct_UClass_UWaterDataUnrealWater_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterDataUnrealWater.OuterSingleton;
	}
	template<> DWP2_API UClass* StaticClass<UWaterDataUnrealWater>()
	{
		return UWaterDataUnrealWater::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterDataUnrealWater);
	UWaterDataUnrealWater::~UWaterDataUnrealWater() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataUnrealWater_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataUnrealWater_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterDataUnrealWater, UWaterDataUnrealWater::StaticClass, TEXT("UWaterDataUnrealWater"), &Z_Registration_Info_UClass_UWaterDataUnrealWater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterDataUnrealWater), 1987068469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataUnrealWater_h_593400300(TEXT("/Script/DWP2"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataUnrealWater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataUnrealWater_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
