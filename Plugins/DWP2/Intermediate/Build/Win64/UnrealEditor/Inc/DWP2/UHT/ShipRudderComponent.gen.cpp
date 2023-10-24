// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWP2/Public/ShipRudderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipRudderComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DWP2_API UClass* Z_Construct_UClass_UShipRudderComponent();
	DWP2_API UClass* Z_Construct_UClass_UShipRudderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DWP2();
// End Cross Module References
	void UShipRudderComponent::StaticRegisterNativesUShipRudderComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShipRudderComponent);
	UClass* Z_Construct_UClass_UShipRudderComponent_NoRegister()
	{
		return UShipRudderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShipRudderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRudder_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputRudder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShipRudderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DWP2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipRudderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * SceneComponent that rotates the child object(s) around its transform position based on input.\n * Should be attached as a child to UShipComponent.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ShipRudderComponent.h" },
		{ "ModuleRelativePath", "Public/ShipRudderComponent.h" },
		{ "ToolTip", "SceneComponent that rotates the child object(s) around its transform position based on input.\nShould be attached as a child to UShipComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Rudder" },
		{ "ModuleRelativePath", "Public/ShipRudderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipRudderComponent, MaxAngle), METADATA_PARAMS(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rudder" },
		{ "ModuleRelativePath", "Public/ShipRudderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipRudderComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Rudder" },
		{ "ModuleRelativePath", "Public/ShipRudderComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipRudderComponent, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_InputRudder_MetaData[] = {
		{ "Category", "Rudder" },
		{ "ModuleRelativePath", "Public/ShipRudderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_InputRudder = { "InputRudder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipRudderComponent, InputRudder), METADATA_PARAMS(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_InputRudder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_InputRudder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_Angle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rudder" },
		{ "ModuleRelativePath", "Public/ShipRudderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipRudderComponent, Angle), METADATA_PARAMS(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShipRudderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_MaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_RotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_InputRudder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipRudderComponent_Statics::NewProp_Angle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShipRudderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShipRudderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShipRudderComponent_Statics::ClassParams = {
		&UShipRudderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShipRudderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShipRudderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShipRudderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShipRudderComponent()
	{
		if (!Z_Registration_Info_UClass_UShipRudderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShipRudderComponent.OuterSingleton, Z_Construct_UClass_UShipRudderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShipRudderComponent.OuterSingleton;
	}
	template<> DWP2_API UClass* StaticClass<UShipRudderComponent>()
	{
		return UShipRudderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShipRudderComponent);
	UShipRudderComponent::~UShipRudderComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipRudderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipRudderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShipRudderComponent, UShipRudderComponent::StaticClass, TEXT("UShipRudderComponent"), &Z_Registration_Info_UClass_UShipRudderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShipRudderComponent), 3050758634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipRudderComponent_h_1182374551(TEXT("/Script/DWP2"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipRudderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipRudderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
