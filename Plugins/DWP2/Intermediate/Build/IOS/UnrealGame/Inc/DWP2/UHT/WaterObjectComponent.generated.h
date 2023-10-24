// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterObjectComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef DWP2_WaterObjectComponent_generated_h
#error "WaterObjectComponent.generated.h already included, missing '#pragma once' in WaterObjectComponent.h"
#endif
#define DWP2_WaterObjectComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDebugGizmos); \
	DECLARE_FUNCTION(execIsTouchingWater); \
	DECLARE_FUNCTION(execGetTriangleCount); \
	DECLARE_FUNCTION(execGetVertexCount); \
	DECLARE_FUNCTION(execGetWorldVertices); \
	DECLARE_FUNCTION(execGetTriStates); \
	DECLARE_FUNCTION(execGetResultDistances); \
	DECLARE_FUNCTION(execGetResultAreas); \
	DECLARE_FUNCTION(execGetResultVelocities); \
	DECLARE_FUNCTION(execGetResultNormals); \
	DECLARE_FUNCTION(execGetResultP0s); \
	DECLARE_FUNCTION(execGetResultPoints); \
	DECLARE_FUNCTION(execGetResultForces); \
	DECLARE_FUNCTION(execGetResultTorque); \
	DECLARE_FUNCTION(execGetResultForce); \
	DECLARE_FUNCTION(execSetWaterNormalSingle); \
	DECLARE_FUNCTION(execSetWaterNormals); \
	DECLARE_FUNCTION(execSetWaterFlowSingle); \
	DECLARE_FUNCTION(execSetWaterFlows); \
	DECLARE_FUNCTION(execSetWaterHeightSingle); \
	DECLARE_FUNCTION(execSetWaterHeights); \
	DECLARE_FUNCTION(execCalcTri); \
	DECLARE_FUNCTION(execInitializeSimMesh); \
	DECLARE_FUNCTION(execCalculateForces); \
	DECLARE_FUNCTION(execUseManualTick); \
	DECLARE_FUNCTION(execSimulate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDebugGizmos); \
	DECLARE_FUNCTION(execIsTouchingWater); \
	DECLARE_FUNCTION(execGetTriangleCount); \
	DECLARE_FUNCTION(execGetVertexCount); \
	DECLARE_FUNCTION(execGetWorldVertices); \
	DECLARE_FUNCTION(execGetTriStates); \
	DECLARE_FUNCTION(execGetResultDistances); \
	DECLARE_FUNCTION(execGetResultAreas); \
	DECLARE_FUNCTION(execGetResultVelocities); \
	DECLARE_FUNCTION(execGetResultNormals); \
	DECLARE_FUNCTION(execGetResultP0s); \
	DECLARE_FUNCTION(execGetResultPoints); \
	DECLARE_FUNCTION(execGetResultForces); \
	DECLARE_FUNCTION(execGetResultTorque); \
	DECLARE_FUNCTION(execGetResultForce); \
	DECLARE_FUNCTION(execSetWaterNormalSingle); \
	DECLARE_FUNCTION(execSetWaterNormals); \
	DECLARE_FUNCTION(execSetWaterFlowSingle); \
	DECLARE_FUNCTION(execSetWaterFlows); \
	DECLARE_FUNCTION(execSetWaterHeightSingle); \
	DECLARE_FUNCTION(execSetWaterHeights); \
	DECLARE_FUNCTION(execCalcTri); \
	DECLARE_FUNCTION(execInitializeSimMesh); \
	DECLARE_FUNCTION(execCalculateForces); \
	DECLARE_FUNCTION(execUseManualTick); \
	DECLARE_FUNCTION(execSimulate);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterObjectComponent(); \
	friend struct Z_Construct_UClass_UWaterObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterObjectComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DWP2"), NO_API) \
	DECLARE_SERIALIZER(UWaterObjectComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUWaterObjectComponent(); \
	friend struct Z_Construct_UClass_UWaterObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterObjectComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DWP2"), NO_API) \
	DECLARE_SERIALIZER(UWaterObjectComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterObjectComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterObjectComponent(UWaterObjectComponent&&); \
	NO_API UWaterObjectComponent(const UWaterObjectComponent&); \
public: \
	NO_API virtual ~UWaterObjectComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterObjectComponent(UWaterObjectComponent&&); \
	NO_API UWaterObjectComponent(const UWaterObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterObjectComponent) \
	NO_API virtual ~UWaterObjectComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_21_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DWP2_API UClass* StaticClass<class UWaterObjectComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
