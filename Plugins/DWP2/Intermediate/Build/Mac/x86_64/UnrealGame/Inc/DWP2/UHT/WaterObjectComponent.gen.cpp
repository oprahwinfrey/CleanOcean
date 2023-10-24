// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWP2/Public/WaterObjectComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterObjectComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DWP2_API UClass* Z_Construct_UClass_UWaterDataBase_NoRegister();
	DWP2_API UClass* Z_Construct_UClass_UWaterObjectComponent();
	DWP2_API UClass* Z_Construct_UClass_UWaterObjectComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DWP2();
// End Cross Module References
	DEFINE_FUNCTION(UWaterObjectComponent::execDrawDebugGizmos)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugGizmos(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execIsTouchingWater)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsTouchingWater();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetTriangleCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTriangleCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetVertexCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVertexCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetWorldVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetWorldVertices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetTriStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetTriStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultDistances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetResultDistances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultAreas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetResultAreas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultVelocities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetResultVelocities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultNormals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetResultNormals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultP0s)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetResultP0s();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetResultPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultForces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetResultForces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultTorque)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetResultTorque();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execGetResultForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetResultForce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSetWaterNormalSingle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT(FVector,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterNormalSingle(Z_Param_index,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSetWaterNormals)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_waterNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterNormals(Z_Param_Out_waterNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSetWaterFlowSingle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT(FVector,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterFlowSingle(Z_Param_index,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSetWaterFlows)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_waterFlows);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterFlows(Z_Param_Out_waterFlows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSetWaterHeightSingle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterHeightSingle(Z_Param_index,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSetWaterHeights)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_waterHeights);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterHeights(Z_Param_Out_waterHeights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execCalcTri)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcTri(Z_Param_i);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execInitializeSimMesh)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSimMesh(Z_Param_StaticMeshComponent,Z_Param_LOD,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execCalculateForces)
	{
		P_GET_STRUCT(FVector,Z_Param_rigidbodyCoM);
		P_GET_STRUCT(FVector,Z_Param_rigidbodyLinVel);
		P_GET_STRUCT(FVector,Z_Param_rigidbodyAngVel);
		P_GET_STRUCT(FMatrix,Z_Param_l2wMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateForces(Z_Param_rigidbodyCoM,Z_Param_rigidbodyLinVel,Z_Param_rigidbodyAngVel,Z_Param_l2wMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execUseManualTick)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseManualTick(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterObjectComponent::execSimulate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Simulate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UWaterObjectComponent::StaticRegisterNativesUWaterObjectComponent()
	{
		UClass* Class = UWaterObjectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcTri", &UWaterObjectComponent::execCalcTri },
			{ "CalculateForces", &UWaterObjectComponent::execCalculateForces },
			{ "DrawDebugGizmos", &UWaterObjectComponent::execDrawDebugGizmos },
			{ "GetResultAreas", &UWaterObjectComponent::execGetResultAreas },
			{ "GetResultDistances", &UWaterObjectComponent::execGetResultDistances },
			{ "GetResultForce", &UWaterObjectComponent::execGetResultForce },
			{ "GetResultForces", &UWaterObjectComponent::execGetResultForces },
			{ "GetResultNormals", &UWaterObjectComponent::execGetResultNormals },
			{ "GetResultP0s", &UWaterObjectComponent::execGetResultP0s },
			{ "GetResultPoints", &UWaterObjectComponent::execGetResultPoints },
			{ "GetResultTorque", &UWaterObjectComponent::execGetResultTorque },
			{ "GetResultVelocities", &UWaterObjectComponent::execGetResultVelocities },
			{ "GetTriangleCount", &UWaterObjectComponent::execGetTriangleCount },
			{ "GetTriStates", &UWaterObjectComponent::execGetTriStates },
			{ "GetVertexCount", &UWaterObjectComponent::execGetVertexCount },
			{ "GetWorldVertices", &UWaterObjectComponent::execGetWorldVertices },
			{ "InitializeSimMesh", &UWaterObjectComponent::execInitializeSimMesh },
			{ "IsTouchingWater", &UWaterObjectComponent::execIsTouchingWater },
			{ "SetWaterFlows", &UWaterObjectComponent::execSetWaterFlows },
			{ "SetWaterFlowSingle", &UWaterObjectComponent::execSetWaterFlowSingle },
			{ "SetWaterHeights", &UWaterObjectComponent::execSetWaterHeights },
			{ "SetWaterHeightSingle", &UWaterObjectComponent::execSetWaterHeightSingle },
			{ "SetWaterNormals", &UWaterObjectComponent::execSetWaterNormals },
			{ "SetWaterNormalSingle", &UWaterObjectComponent::execSetWaterNormalSingle },
			{ "Simulate", &UWaterObjectComponent::execSimulate },
			{ "UseManualTick", &UWaterObjectComponent::execUseManualTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics
	{
		struct WaterObjectComponent_eventCalcTri_Parms
		{
			int32 i;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventCalcTri_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::NewProp_i,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Object" },
		{ "Comment", "/**\n\x09 * Runs calculations on a single triangle.\n\x09 * @param i Triangle index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Runs calculations on a single triangle.\n@param i Triangle index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "CalcTri", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::WaterObjectComponent_eventCalcTri_Parms), Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_CalcTri()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_CalcTri_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct WaterObjectComponent_eventCalculateForces_Parms
		{
			FVector rigidbodyCoM;
			FVector rigidbodyLinVel;
			FVector rigidbodyAngVel;
			FMatrix l2wMatrix;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_rigidbodyCoM;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rigidbodyLinVel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rigidbodyAngVel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_l2wMatrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_rigidbodyCoM = { "rigidbodyCoM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventCalculateForces_Parms, rigidbodyCoM), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_rigidbodyLinVel = { "rigidbodyLinVel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventCalculateForces_Parms, rigidbodyLinVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_rigidbodyAngVel = { "rigidbodyAngVel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventCalculateForces_Parms, rigidbodyAngVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_l2wMatrix = { "l2wMatrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventCalculateForces_Parms, l2wMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_rigidbodyCoM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_rigidbodyLinVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_rigidbodyAngVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::NewProp_l2wMatrix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Object" },
		{ "Comment", "/**\n\x09 * Ticks the WaterObject simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Ticks the WaterObject simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "CalculateForces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::WaterObjectComponent_eventCalculateForces_Parms), Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_CalculateForces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_CalculateForces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics
	{
		struct WaterObjectComponent_eventDrawDebugGizmos_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventDrawDebugGizmos_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "DrawDebugGizmos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::WaterObjectComponent_eventDrawDebugGizmos_Parms), Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics
	{
		struct WaterObjectComponent_eventGetResultAreas_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultAreas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns triangle areas.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns triangle areas." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultAreas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::WaterObjectComponent_eventGetResultAreas_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics
	{
		struct WaterObjectComponent_eventGetResultDistances_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultDistances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns triangle distances to water.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns triangle distances to water." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultDistances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::WaterObjectComponent_eventGetResultDistances_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics
	{
		struct WaterObjectComponent_eventGetResultForce_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultForce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 * Returns total force acting on the body at the CoM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns total force acting on the body at the CoM." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultForce", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::WaterObjectComponent_eventGetResultForce_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics
	{
		struct WaterObjectComponent_eventGetResultForces_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultForces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns per-triangle result forces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns per-triangle result forces." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultForces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::WaterObjectComponent_eventGetResultForces_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultForces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultForces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics
	{
		struct WaterObjectComponent_eventGetResultNormals_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultNormals_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns per-triangle result normals.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns per-triangle result normals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::WaterObjectComponent_eventGetResultNormals_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics
	{
		struct WaterObjectComponent_eventGetResultP0s_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultP0s_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09*  Returns per-triangle water intersection points.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns per-triangle water intersection points." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultP0s", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::WaterObjectComponent_eventGetResultP0s_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics
	{
		struct WaterObjectComponent_eventGetResultPoints_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns per-triangle result force application points.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns per-triangle result force application points." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::WaterObjectComponent_eventGetResultPoints_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics
	{
		struct WaterObjectComponent_eventGetResultTorque_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultTorque_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns total torque acting on the body at the CoM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns total torque acting on the body at the CoM." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultTorque", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::WaterObjectComponent_eventGetResultTorque_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics
	{
		struct WaterObjectComponent_eventGetResultVelocities_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetResultVelocities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns per-triangle result water flow / velocities.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns per-triangle result water flow / velocities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetResultVelocities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::WaterObjectComponent_eventGetResultVelocities_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics
	{
		struct WaterObjectComponent_eventGetTriangleCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetTriangleCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetTriangleCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::WaterObjectComponent_eventGetTriangleCount_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics
	{
		struct WaterObjectComponent_eventGetTriStates_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetTriStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09*     Returns the states of triangles.\n\x09*     0 - Triangle is under water\n\x09*     1 - Triangle is partially under water\n\x09*     2 - Triangle is above water\n\x09*     3 - Triangle is disabled\n\x09*     4 - Triangle is deleted\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns the states of triangles.\n0 - Triangle is under water\n1 - Triangle is partially under water\n2 - Triangle is above water\n3 - Triangle is disabled\n4 - Triangle is deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetTriStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::WaterObjectComponent_eventGetTriStates_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetTriStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetTriStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics
	{
		struct WaterObjectComponent_eventGetVertexCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetVertexCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::WaterObjectComponent_eventGetVertexCount_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics
	{
		struct WaterObjectComponent_eventGetWorldVertices_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventGetWorldVertices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  Returns world vertex coordinates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Returns world vertex coordinates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "GetWorldVertices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::WaterObjectComponent_eventGetWorldVertices_Parms), Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics
	{
		struct WaterObjectComponent_eventInitializeSimMesh_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 LOD;
			int32 SectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventInitializeSimMesh_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventInitializeSimMesh_Parms, LOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventInitializeSimMesh_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Object" },
		{ "Comment", "/**\n\x09 * Initializes simulation data from a StaticMeshComponent\n\x09 * @param LOD LOD to use.\n\x09 * @param SectionIndex Mesh section index which will be used.\n\x09 */" },
		{ "CPP_Default_LOD", "0" },
		{ "CPP_Default_SectionIndex", "0" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Initializes simulation data from a StaticMeshComponent\n@param LOD LOD to use.\n@param SectionIndex Mesh section index which will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "InitializeSimMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::WaterObjectComponent_eventInitializeSimMesh_Parms), Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics
	{
		struct WaterObjectComponent_eventIsTouchingWater_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventIsTouchingWater_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sim Results" },
		{ "Comment", "/**\n\x09 *  True if any triangle is partially or fully submerged.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "True if any triangle is partially or fully submerged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "IsTouchingWater", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::WaterObjectComponent_eventIsTouchingWater_Parms), Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics
	{
		struct WaterObjectComponent_eventSetWaterFlows_Parms
		{
			TArray<FVector> waterFlows;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_waterFlows_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_waterFlows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::NewProp_waterFlows_Inner = { "waterFlows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::NewProp_waterFlows = { "waterFlows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterFlows_Parms, waterFlows), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::NewProp_waterFlows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::NewProp_waterFlows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Sets the water flows/surface velocities array. Normally filled in by WaterData class.\n\x09 * @param waterFlows World water flows at vertex positions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Sets the water flows/surface velocities array. Normally filled in by WaterData class.\n@param waterFlows World water flows at vertex positions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "SetWaterFlows", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::WaterObjectComponent_eventSetWaterFlows_Parms), Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics
	{
		struct WaterObjectComponent_eventSetWaterFlowSingle_Parms
		{
			int32 index;
			FVector value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterFlowSingle_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterFlowSingle_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Sets the single water flow at index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Sets the single water flow at index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "SetWaterFlowSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::WaterObjectComponent_eventSetWaterFlowSingle_Parms), Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics
	{
		struct WaterObjectComponent_eventSetWaterHeights_Parms
		{
			TArray<float> waterHeights;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_waterHeights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_waterHeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::NewProp_waterHeights_Inner = { "waterHeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::NewProp_waterHeights = { "waterHeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterHeights_Parms, waterHeights), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::NewProp_waterHeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::NewProp_waterHeights,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Sets the water heights array. Normally filled in by WaterData class.\n\x09 * @param waterHeights World water heights at vertex positions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Sets the water heights array. Normally filled in by WaterData class.\n@param waterHeights World water heights at vertex positions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "SetWaterHeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::WaterObjectComponent_eventSetWaterHeights_Parms), Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics
	{
		struct WaterObjectComponent_eventSetWaterHeightSingle_Parms
		{
			int32 index;
			float value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterHeightSingle_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterHeightSingle_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Sets the single water height at index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Sets the single water height at index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "SetWaterHeightSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::WaterObjectComponent_eventSetWaterHeightSingle_Parms), Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics
	{
		struct WaterObjectComponent_eventSetWaterNormals_Parms
		{
			TArray<FVector> waterNormals;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_waterNormals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_waterNormals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::NewProp_waterNormals_Inner = { "waterNormals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::NewProp_waterNormals = { "waterNormals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterNormals_Parms, waterNormals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::NewProp_waterNormals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::NewProp_waterNormals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Sets the water normals array. Normally filled in by WaterData class.\n\x09 * @param waterNormals World water normals at vertex positions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Sets the water normals array. Normally filled in by WaterData class.\n@param waterNormals World water normals at vertex positions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "SetWaterNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::WaterObjectComponent_eventSetWaterNormals_Parms), Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics
	{
		struct WaterObjectComponent_eventSetWaterNormalSingle_Parms
		{
			int32 index;
			FVector value;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterNormalSingle_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSetWaterNormalSingle_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Sets the single water normal at index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Sets the single water normal at index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "SetWaterNormalSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::WaterObjectComponent_eventSetWaterNormalSingle_Parms), Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics
	{
		struct WaterObjectComponent_eventSimulate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterObjectComponent_eventSimulate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Object" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "Simulate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::WaterObjectComponent_eventSimulate_Parms), Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_Simulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_Simulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics
	{
		struct WaterObjectComponent_eventUseManualTick_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::NewProp_value_SetBit(void* Obj)
	{
		((WaterObjectComponent_eventUseManualTick_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterObjectComponent_eventUseManualTick_Parms), &Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Object" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterObjectComponent, nullptr, "UseManualTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::WaterObjectComponent_eventUseManualTick_Parms), Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterObjectComponent_UseManualTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterObjectComponent_UseManualTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterObjectComponent);
	UClass* Z_Construct_UClass_UWaterObjectComponent_NoRegister()
	{
		return UWaterObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterDataComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterDataComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateWaterHeights_MetaData[];
#endif
		static void NewProp_bCalculateWaterHeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateWaterHeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateWaterNormals_MetaData[];
#endif
		static void NewProp_bCalculateWaterNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateWaterNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateWaterFlow_MetaData[];
#endif
		static void NewProp_bCalculateWaterFlow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateWaterFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQuerySinglePoint_MetaData[];
#endif
		static void NewProp_bQuerySinglePoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuerySinglePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FluidDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FluidDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDotPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityDotPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlamForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlamForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuctionForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuctionForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalForceCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalForceCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalTorqueCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalTorqueCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinDragCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkinDragCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWaterHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWaterNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterFlow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWaterFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldUpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldUpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeldVertices_MetaData[];
#endif
		static void NewProp_bWeldVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimMeshLOD_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SimMeshLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimMeshSection_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SimMeshSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulatingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManualTickWaterObject_MetaData[];
#endif
		static void NewProp_bManualTickWaterObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualTickWaterObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DWP2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterObjectComponent_CalcTri, "CalcTri" }, // 2811481876
		{ &Z_Construct_UFunction_UWaterObjectComponent_CalculateForces, "CalculateForces" }, // 807875770
		{ &Z_Construct_UFunction_UWaterObjectComponent_DrawDebugGizmos, "DrawDebugGizmos" }, // 3702861492
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultAreas, "GetResultAreas" }, // 1471835477
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultDistances, "GetResultDistances" }, // 3770142296
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultForce, "GetResultForce" }, // 4220588227
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultForces, "GetResultForces" }, // 1430790902
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultNormals, "GetResultNormals" }, // 1976818375
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultP0s, "GetResultP0s" }, // 177883797
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultPoints, "GetResultPoints" }, // 3827246442
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultTorque, "GetResultTorque" }, // 1867864592
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetResultVelocities, "GetResultVelocities" }, // 541510029
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetTriangleCount, "GetTriangleCount" }, // 2972866009
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetTriStates, "GetTriStates" }, // 3229968328
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetVertexCount, "GetVertexCount" }, // 1165102769
		{ &Z_Construct_UFunction_UWaterObjectComponent_GetWorldVertices, "GetWorldVertices" }, // 1530799952
		{ &Z_Construct_UFunction_UWaterObjectComponent_InitializeSimMesh, "InitializeSimMesh" }, // 298262028
		{ &Z_Construct_UFunction_UWaterObjectComponent_IsTouchingWater, "IsTouchingWater" }, // 682965740
		{ &Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlows, "SetWaterFlows" }, // 3410615499
		{ &Z_Construct_UFunction_UWaterObjectComponent_SetWaterFlowSingle, "SetWaterFlowSingle" }, // 4152164484
		{ &Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeights, "SetWaterHeights" }, // 2289896918
		{ &Z_Construct_UFunction_UWaterObjectComponent_SetWaterHeightSingle, "SetWaterHeightSingle" }, // 2666971982
		{ &Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormals, "SetWaterNormals" }, // 1418773082
		{ &Z_Construct_UFunction_UWaterObjectComponent_SetWaterNormalSingle, "SetWaterNormalSingle" }, // 3591781216
		{ &Z_Construct_UFunction_UWaterObjectComponent_Simulate, "Simulate" }, // 384231141
		{ &Z_Construct_UFunction_UWaterObjectComponent_UseManualTick, "UseManualTick" }, // 2899070277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Class for simulating interaction of objects with water based on mesh data.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "WaterObjectComponent.h" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Class for simulating interaction of objects with water based on mesh data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WaterDataComponent_MetaData[] = {
		{ "Category", "Water Data" },
		{ "Comment", "/**\n\x09 * Component from which the water data will be retrieved.\n\x09 * @param waterFlows World water flows at vertex positions.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Component from which the water data will be retrieved.\n@param waterFlows World water flows at vertex positions." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WaterDataComponent = { "WaterDataComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, WaterDataComponent), Z_Construct_UClass_UWaterDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WaterDataComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WaterDataComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bCalculateWaterHeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights = { "bCalculateWaterHeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09 *     Should water normals be taken into account when calculating forces?\n\x09 *     Should be disabled if the water if flat or the water system does not support water normal queries\n\x09 *     to save on performance.\n\x09 *     Will be automatically disabled if the water system does not support normal queries.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Should water normals be taken into account when calculating forces?\nShould be disabled if the water if flat or the water system does not support water normal queries\nto save on performance.\nWill be automatically disabled if the water system does not support normal queries." },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bCalculateWaterNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals = { "bCalculateWaterNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09 *     Should water velocities be taken into account when calculating forces?\n\x09 *     Should be disabled if the water used does not support velocity/flow map queries\n\x09 *     Will be automatically disabled if the water system does not support velocity queries.\n\x09 *     to save on performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Should water velocities be taken into account when calculating forces?\nShould be disabled if the water used does not support velocity/flow map queries\nWill be automatically disabled if the water system does not support velocity queries.\nto save on performance." },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bCalculateWaterFlow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow = { "bCalculateWaterFlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09* If true and WaterData component is present water height will only be queried once, at the center of the\n\x09* actor, instead of center of each mesh triangle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "If true and WaterData component is present water height will only be queried once, at the center of the\nactor, instead of center of each mesh triangle." },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bQuerySinglePoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint = { "bQuerySinglePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FluidDensity_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09 *     Density of the fluid the object is in.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Density of the fluid the object is in." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FluidDensity = { "FluidDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, FluidDensity), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FluidDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FluidDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_BuoyForceCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Coefficient by which the buoyancy forces are multiplied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Coefficient by which the buoyancy forces are multiplied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_BuoyForceCoefficient = { "BuoyForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, BuoyForceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_BuoyForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_BuoyForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DynamicForceCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 *     Coefficient by which all the non-buoyancy forces are multiplied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Coefficient by which all the non-buoyancy forces are multiplied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DynamicForceCoefficient = { "DynamicForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, DynamicForceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DynamicForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DynamicForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_VelocityDotPower_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09*     Set to 1 for linear dot/force ratio or other than 1 for exponential ratio.\n\x09*     When force is calculated it is multiplied by the dot value between normal of the surface and the velocity.\n\x09*    High power values will result in shallow angles between the two having less of an effect on the final force, and\n\x09*     vice versa.\n\x09*     Use 1 for best performance. Any other value will result in additional Mathf.Pow() call per triangle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Set to 1 for linear dot/force ratio or other than 1 for exponential ratio.\nWhen force is calculated it is multiplied by the dot value between normal of the surface and the velocity.\nHigh power values will result in shallow angles between the two having less of an effect on the final force, and\nvice versa.\nUse 1 for best performance. Any other value will result in additional Mathf.Pow() call per triangle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_VelocityDotPower = { "VelocityDotPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, VelocityDotPower), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_VelocityDotPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_VelocityDotPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SlamForceCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Force coefficient when the surface is entering the water. */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Force coefficient when the surface is entering the water." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SlamForceCoefficient = { "SlamForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SlamForceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SlamForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SlamForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SuctionForceCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Force coefficient when the surface is exiting the water. */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Force coefficient when the surface is exiting the water." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SuctionForceCoefficient = { "SuctionForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SuctionForceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SuctionForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SuctionForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalForceCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Coefficient by which the final (total) force is multiplied. */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Coefficient by which the final (total) force is multiplied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalForceCoefficient = { "FinalForceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, FinalForceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalForceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalForceCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalTorqueCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Coefficient by which the final (totale) torque is multiplied. */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Coefficient by which the final (totale) torque is multiplied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalTorqueCoefficient = { "FinalTorqueCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, FinalTorqueCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalTorqueCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalTorqueCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SkinDragCoefficient_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "ClampMax", "0.2" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Resistant force exerted on an object moving in a fluid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Resistant force exerted on an object moving in a fluid." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SkinDragCoefficient = { "SkinDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SkinDragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SkinDragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SkinDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterHeight_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09* Default water height. This value will be used if there are no WaterData components attached.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Default water height. This value will be used if there are no WaterData components attached." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterHeight = { "DefaultWaterHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, DefaultWaterHeight), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterNormal_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09* Default water height. This value will be used if there are no WaterData components attached.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Default water height. This value will be used if there are no WaterData components attached." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterNormal = { "DefaultWaterNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, DefaultWaterNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterFlow_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09* Default water height. This value will be used if there are no WaterData components attached.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Default water height. This value will be used if there are no WaterData components attached." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterFlow = { "DefaultWaterFlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, DefaultWaterFlow), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_GravityZ_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09 * Global gravity value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Global gravity value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_GravityZ = { "GravityZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, GravityZ), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_GravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_GravityZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WorldUpVector_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09 * Global up direction. On flat water buoyancy forces will be applied along this direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Global up direction. On flat water buoyancy forces will be applied along this direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WorldUpVector = { "WorldUpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, WorldUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WorldUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WorldUpVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Water Settings" },
		{ "Comment", "/**\n\x09* Should debug gizmos be drawn? Impacts performance. \n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Should debug gizmos be drawn? Impacts performance." },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices_MetaData[] = {
		{ "Category", "Mesh Settings" },
		{ "Comment", "/**\n\x09* Welds co-located vertices reducing water height query count \n\x09* which drastically improves Unreal Water and 3rd party plugin performance\n\x09* when using waves with bSingleWaterQuery disabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "Welds co-located vertices reducing water height query count\nwhich drastically improves Unreal Water and 3rd party plugin performance\nwhen using waves with bSingleWaterQuery disabled." },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bWeldVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices = { "bWeldVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshLOD_MetaData[] = {
		{ "Category", "Mesh Settings" },
		{ "Comment", "/**\n\x09* StaticMesh LOD that will be used to simulate water physics. \n\x09* Default (-1) uses the lowest LOD available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "StaticMesh LOD that will be used to simulate water physics.\nDefault (-1) uses the lowest LOD available." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshLOD = { "SimMeshLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SimMeshLOD), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshSection_MetaData[] = {
		{ "Category", "Mesh Settings" },
		{ "Comment", "/**\n\x09* StaticMesh section that will be used to simulate water physics.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "StaticMesh section that will be used to simulate water physics." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshSection = { "SimMeshSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SimMeshSection), METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimStaticMeshComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* Static mesh that will be used to simulate physics. It is recommended that this mesh contains the\n\x09* minimum amount of triangles as the performance is directly proportional to the triangle count.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "* Static mesh that will be used to simulate physics. It is recommended that this mesh contains the\n* minimum amount of triangles as the performance is directly proportional to the triangle count." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimStaticMeshComponent = { "SimStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SimStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimulatingComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* PrimitiveComponent to which the forces will be applied.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "* PrimitiveComponent to which the forces will be applied." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimulatingComponent = { "SimulatingComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterObjectComponent, SimulatingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimulatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimulatingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject_MetaData[] = {
		{ "Comment", "/*\n\x09* If enabled tick will have to be called manually but the engine Tick event will still run.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaterObjectComponent.h" },
		{ "ToolTip", "* If enabled tick will have to be called manually but the engine Tick event will still run." },
	};
#endif
	void Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject_SetBit(void* Obj)
	{
		((UWaterObjectComponent*)Obj)->bManualTickWaterObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject = { "bManualTickWaterObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterObjectComponent), &Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterObjectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WaterDataComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterHeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bCalculateWaterFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bQuerySinglePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FluidDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_BuoyForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DynamicForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_VelocityDotPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SlamForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SuctionForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalForceCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_FinalTorqueCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SkinDragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_DefaultWaterFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_GravityZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_WorldUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bWeldVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimMeshSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_SimulatingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterObjectComponent_Statics::NewProp_bManualTickWaterObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterObjectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterObjectComponent_Statics::ClassParams = {
		&UWaterObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaterObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterObjectComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterObjectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterObjectComponent.OuterSingleton, Z_Construct_UClass_UWaterObjectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterObjectComponent.OuterSingleton;
	}
	template<> DWP2_API UClass* StaticClass<UWaterObjectComponent>()
	{
		return UWaterObjectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterObjectComponent);
	UWaterObjectComponent::~UWaterObjectComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterObjectComponent, UWaterObjectComponent::StaticClass, TEXT("UWaterObjectComponent"), &Z_Registration_Info_UClass_UWaterObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterObjectComponent), 3128358882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_3578473177(TEXT("/Script/DWP2"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_WaterObjectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
