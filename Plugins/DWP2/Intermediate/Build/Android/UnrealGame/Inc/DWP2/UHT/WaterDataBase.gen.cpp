// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWP2/Public/WaterDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterDataBase() {}
// Cross Module References
	DWP2_API UClass* Z_Construct_UClass_UWaterDataBase();
	DWP2_API UClass* Z_Construct_UClass_UWaterDataBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DWP2();
// End Cross Module References
	void UWaterDataBase::StaticRegisterNativesUWaterDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterDataBase);
	UClass* Z_Construct_UClass_UWaterDataBase_NoRegister()
	{
		return UWaterDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UWaterDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWaterHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHeightReferenceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterHeightReferenceActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DWP2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n* Base class for retrieving water data. \n*/" },
		{ "IncludePath", "WaterDataBase.h" },
		{ "ModuleRelativePath", "Public/WaterDataBase.h" },
		{ "ToolTip", "Base class for retrieving water data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterDataBase_Statics::NewProp_DefaultWaterHeight_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ModuleRelativePath", "Public/WaterDataBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterDataBase_Statics::NewProp_DefaultWaterHeight = { "DefaultWaterHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterDataBase, DefaultWaterHeight), METADATA_PARAMS(Z_Construct_UClass_UWaterDataBase_Statics::NewProp_DefaultWaterHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataBase_Statics::NewProp_DefaultWaterHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterDataBase_Statics::NewProp_WaterHeightReferenceActor_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ModuleRelativePath", "Public/WaterDataBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaterDataBase_Statics::NewProp_WaterHeightReferenceActor = { "WaterHeightReferenceActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterDataBase, WaterHeightReferenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterDataBase_Statics::NewProp_WaterHeightReferenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataBase_Statics::NewProp_WaterHeightReferenceActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterDataBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterDataBase_Statics::NewProp_DefaultWaterHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterDataBase_Statics::NewProp_WaterHeightReferenceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterDataBase_Statics::ClassParams = {
		&UWaterDataBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterDataBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterDataBase()
	{
		if (!Z_Registration_Info_UClass_UWaterDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterDataBase.OuterSingleton, Z_Construct_UClass_UWaterDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterDataBase.OuterSingleton;
	}
	template<> DWP2_API UClass* StaticClass<UWaterDataBase>()
	{
		return UWaterDataBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterDataBase);
	UWaterDataBase::~UWaterDataBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterDataBase, UWaterDataBase::StaticClass, TEXT("UWaterDataBase"), &Z_Registration_Info_UClass_UWaterDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterDataBase), 1506208506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataBase_h_3807374934(TEXT("/Script/DWP2"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterDataBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
