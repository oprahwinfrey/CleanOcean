// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWP2/Public/ShipEngineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipEngineComponent() {}
// Cross Module References
	DWP2_API UClass* Z_Construct_UClass_UShipEngineComponent();
	DWP2_API UClass* Z_Construct_UClass_UShipEngineComponent_NoRegister();
	DWP2_API UEnum* Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection();
	DWP2_API UEnum* Z_Construct_UEnum_DWP2_ShipEngineState();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DWP2();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ShipEngineState;
	static UEnum* ShipEngineState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ShipEngineState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ShipEngineState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DWP2_ShipEngineState, Z_Construct_UPackage__Script_DWP2(), TEXT("ShipEngineState"));
		}
		return Z_Registration_Info_UEnum_ShipEngineState.OuterSingleton;
	}
	template<> DWP2_API UEnum* StaticEnum<ShipEngineState>()
	{
		return ShipEngineState_StaticEnum();
	}
	struct Z_Construct_UEnum_DWP2_ShipEngineState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DWP2_ShipEngineState_Statics::Enumerators[] = {
		{ "ShipEngineState::On", (int64)ShipEngineState::On },
		{ "ShipEngineState::Off", (int64)ShipEngineState::Off },
		{ "ShipEngineState::Starting", (int64)ShipEngineState::Starting },
		{ "ShipEngineState::Stopping", (int64)ShipEngineState::Stopping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DWP2_ShipEngineState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "Off.Name", "ShipEngineState::Off" },
		{ "On.Name", "ShipEngineState::On" },
		{ "Starting.Name", "ShipEngineState::Starting" },
		{ "Stopping.Name", "ShipEngineState::Stopping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DWP2_ShipEngineState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DWP2,
		nullptr,
		"ShipEngineState",
		"ShipEngineState",
		Z_Construct_UEnum_DWP2_ShipEngineState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DWP2_ShipEngineState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DWP2_ShipEngineState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DWP2_ShipEngineState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DWP2_ShipEngineState()
	{
		if (!Z_Registration_Info_UEnum_ShipEngineState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ShipEngineState.InnerSingleton, Z_Construct_UEnum_DWP2_ShipEngineState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ShipEngineState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ShipEnginePropRotationDirection;
	static UEnum* ShipEnginePropRotationDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ShipEnginePropRotationDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ShipEnginePropRotationDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection, Z_Construct_UPackage__Script_DWP2(), TEXT("ShipEnginePropRotationDirection"));
		}
		return Z_Registration_Info_UEnum_ShipEnginePropRotationDirection.OuterSingleton;
	}
	template<> DWP2_API UEnum* StaticEnum<ShipEnginePropRotationDirection>()
	{
		return ShipEnginePropRotationDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::Enumerators[] = {
		{ "ShipEnginePropRotationDirection::Left", (int64)ShipEnginePropRotationDirection::Left },
		{ "ShipEnginePropRotationDirection::Right", (int64)ShipEnginePropRotationDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::Enum_MetaDataParams[] = {
		{ "Left.Name", "ShipEnginePropRotationDirection::Left" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "Right.Name", "ShipEnginePropRotationDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DWP2,
		nullptr,
		"ShipEnginePropRotationDirection",
		"ShipEnginePropRotationDirection",
		Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection()
	{
		if (!Z_Registration_Info_UEnum_ShipEnginePropRotationDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ShipEnginePropRotationDirection.InnerSingleton, Z_Construct_UEnum_DWP2_ShipEnginePropRotationDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ShipEnginePropRotationDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execStartStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execIsSubmerged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubmerged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execStopEngine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEngine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execStartEngine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEngine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execGetThrust)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThrust();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execGetRpmPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRpmPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execGetThrottle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThrottle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipEngineComponent::execSetThrottle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrottle(Z_Param_Value);
		P_NATIVE_END;
	}
	void UShipEngineComponent::StaticRegisterNativesUShipEngineComponent()
	{
		UClass* Class = UShipEngineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRpmPercent", &UShipEngineComponent::execGetRpmPercent },
			{ "GetSpeed", &UShipEngineComponent::execGetSpeed },
			{ "GetThrottle", &UShipEngineComponent::execGetThrottle },
			{ "GetThrust", &UShipEngineComponent::execGetThrust },
			{ "IsSubmerged", &UShipEngineComponent::execIsSubmerged },
			{ "SetThrottle", &UShipEngineComponent::execSetThrottle },
			{ "StartEngine", &UShipEngineComponent::execStartEngine },
			{ "StartStop", &UShipEngineComponent::execStartStop },
			{ "StopEngine", &UShipEngineComponent::execStopEngine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics
	{
		struct ShipEngineComponent_eventGetRpmPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShipEngineComponent_eventGetRpmPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Gets the RPM as a percentage.\n\x09 * \x09@return RPM percentage in relation to max RPM in range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Gets the RPM as a percentage.\n     @return RPM percentage in relation to max RPM in range [0, 1]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "GetRpmPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::ShipEngineComponent_eventGetRpmPercent_Parms), Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics
	{
		struct ShipEngineComponent_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShipEngineComponent_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Gets the ship speed.\n\x09 * @return Ship speed in [cm/s].\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Gets the ship speed.\n@return Ship speed in [cm/s]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "GetSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::ShipEngineComponent_eventGetSpeed_Parms), Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics
	{
		struct ShipEngineComponent_eventGetThrottle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShipEngineComponent_eventGetThrottle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Gets the throttle value.\n\x09 * \x09@return Value throttle value in range [-1, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Gets the throttle value.\n     @return Value throttle value in range [-1, 1]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "GetThrottle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::ShipEngineComponent_eventGetThrottle_Parms), Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_GetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_GetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics
	{
		struct ShipEngineComponent_eventGetThrust_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShipEngineComponent_eventGetThrust_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Gets the current thrust generated by the engine.\n\x09 * \x09@return Thrust in [N * 100]\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Gets the current thrust generated by the engine.\n     @return Thrust in [N * 100]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "GetThrust", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::ShipEngineComponent_eventGetThrust_Parms), Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_GetThrust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_GetThrust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics
	{
		struct ShipEngineComponent_eventIsSubmerged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShipEngineComponent_eventIsSubmerged_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ShipEngineComponent_eventIsSubmerged_Parms), &Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Checks if the engine is submerged.\n\x09 * @return True if under water.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Checks if the engine is submerged.\n@return True if under water." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "IsSubmerged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::ShipEngineComponent_eventIsSubmerged_Parms), Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_IsSubmerged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_IsSubmerged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics
	{
		struct ShipEngineComponent_eventSetThrottle_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShipEngineComponent_eventSetThrottle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Sets the throttle value.\n\x09 * \x09@param Value throttle value in range [-1, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Sets the throttle value.\n     @param Value throttle value in range [-1, 1]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "SetThrottle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::ShipEngineComponent_eventSetThrottle_Parms), Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_SetThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_SetThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_StartEngine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_StartEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Starts the engine.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Starts the engine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_StartEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "StartEngine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_StartEngine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_StartEngine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_StartEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_StartEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_StartStop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_StartStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Toggles the engine state. If running it stops the engine and vice versa.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Toggles the engine state. If running it stops the engine and vice versa." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_StartStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "StartStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_StartStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_StartStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_StartStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_StartStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipEngineComponent_StopEngine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipEngineComponent_StopEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Stops the engine.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Stops the engine." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipEngineComponent_StopEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipEngineComponent, nullptr, "StopEngine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipEngineComponent_StopEngine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipEngineComponent_StopEngine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipEngineComponent_StopEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipEngineComponent_StopEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShipEngineComponent);
	UClass* Z_Construct_UClass_UShipEngineComponent_NoRegister()
	{
		return UShipEngineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShipEngineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsOn_MetaData[];
#endif
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxThrust_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxThrust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpinUpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpinUpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyThrustWhenAboveWater_MetaData[];
#endif
		static void NewProp_ApplyThrustWhenAboveWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyThrustWhenAboveWater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseThrustCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseThrustCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropellerRPMRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropellerRPMRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulatingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropellerStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropellerStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputThrottle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputThrottle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thrust_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thrust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShipEngineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DWP2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShipEngineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShipEngineComponent_GetRpmPercent, "GetRpmPercent" }, // 1199740745
		{ &Z_Construct_UFunction_UShipEngineComponent_GetSpeed, "GetSpeed" }, // 240165698
		{ &Z_Construct_UFunction_UShipEngineComponent_GetThrottle, "GetThrottle" }, // 543052754
		{ &Z_Construct_UFunction_UShipEngineComponent_GetThrust, "GetThrust" }, // 1302170779
		{ &Z_Construct_UFunction_UShipEngineComponent_IsSubmerged, "IsSubmerged" }, // 199739570
		{ &Z_Construct_UFunction_UShipEngineComponent_SetThrottle, "SetThrottle" }, // 2128340280
		{ &Z_Construct_UFunction_UShipEngineComponent_StartEngine, "StartEngine" }, // 2001100368
		{ &Z_Construct_UFunction_UShipEngineComponent_StartStop, "StartStop" }, // 1211939615
		{ &Z_Construct_UFunction_UShipEngineComponent_StopEngine, "StopEngine" }, // 3109040952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * SceneComponent that applies thrust, manages engine audio and propeller rotation.\n * Should be attached as a child to UShipComponent.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ShipEngineComponent.h" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "SceneComponent that applies thrust, manages engine audio and propeller rotation.\nShould be attached as a child to UShipComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Should the engine be running on BeginPlay?\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Should the engine be running on BeginPlay?" },
	};
#endif
	void Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((UShipEngineComponent*)Obj)->IsOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShipEngineComponent), &Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Current engine state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Current engine state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, State), Z_Construct_UEnum_DWP2_ShipEngineState, METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State_MetaData)) }; // 1119913703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MinRPM_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Minimum engine RPM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Minimum engine RPM." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MinRPM = { "MinRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, MinRPM), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MinRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MinRPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxRPM_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Maximum engine RPM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Maximum engine RPM." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxRPM = { "MaxRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, MaxRPM), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxRPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxThrust_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Maximum thrust in [N * 100]\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Maximum thrust in [N * 100]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxThrust = { "MaxThrust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, MaxThrust), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxThrust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxThrust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SpinUpSpeed_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Time needed to spin up the engines up to max RPM\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Time needed to spin up the engines up to max RPM" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SpinUpSpeed = { "SpinUpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, SpinUpSpeed), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SpinUpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SpinUpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartingRPM_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * RPM while the engine is spun using the starter motor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "RPM while the engine is spun using the starter motor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartingRPM = { "StartingRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, StartingRPM), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartingRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartingRPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartDuration_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Engine starting duration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Engine starting duration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartDuration = { "StartDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, StartDuration), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StopDuration_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Engine stopping duration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Engine stopping duration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StopDuration = { "StopDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, StopDuration), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StopDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StopDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Should thrust be applied when engine is out of water?\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Should thrust be applied when engine is out of water?" },
	};
#endif
	void Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater_SetBit(void* Obj)
	{
		((UShipEngineComponent*)Obj)->ApplyThrustWhenAboveWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater = { "ApplyThrustWhenAboveWater", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShipEngineComponent), &Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ReverseThrustCoefficient_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Thrust when reversing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Thrust when reversing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ReverseThrustCoefficient = { "ReverseThrustCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, ReverseThrustCoefficient), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ReverseThrustCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ReverseThrustCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * Max speed that can be achieved with the current propeller pitch [m/s].\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Max speed that can be achieved with the current propeller pitch [m/s]." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerRPMRatio_MetaData[] = {
		{ "Category", "Propeller" },
		{ "Comment", "/**\n\x09 * Ratio betweent the propeller and engine RPM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Ratio betweent the propeller and engine RPM." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerRPMRatio = { "PropellerRPMRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, PropellerRPMRatio), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerRPMRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerRPMRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BaseVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09* Idle volume of the engine\n\x09*/" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Idle volume of the engine" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BaseVolume = { "BaseVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, BaseVolume), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BaseVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BaseVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BasePitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Idle pitch of the engine\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Idle pitch of the engine" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BasePitch = { "BasePitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, BasePitch), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BasePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BasePitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_VolumeRange_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Volume range of the engine.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Volume range of the engine." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_VolumeRange = { "VolumeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, VolumeRange), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_VolumeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_VolumeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PitchRange_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Pitch range of the engine.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Pitch range of the engine." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, PitchRange), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PitchRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_EngineAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Engine running audio source.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Engine running audio source." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_EngineAudioComponent = { "EngineAudioComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, EngineAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_EngineAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_EngineAudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SimulatingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Engine" },
		{ "Comment", "/**\n\x09 * PrimitiveComponent to which the forces will be applied.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "PrimitiveComponent to which the forces will be applied." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SimulatingComponent = { "SimulatingComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, SimulatingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SimulatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SimulatingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerStaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Propeller" },
		{ "Comment", "/**\n\x09 * Mesh representing the propeller.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
		{ "ToolTip", "Mesh representing the propeller." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerStaticMeshComponent = { "PropellerStaticMeshComponent", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, PropellerStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_InputThrottle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Engine Values" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_InputThrottle = { "InputThrottle", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, InputThrottle), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_InputThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_InputThrottle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_RPM_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Engine Values" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, RPM), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_RPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_RPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_Thrust_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Engine Values" },
		{ "ModuleRelativePath", "Public/ShipEngineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_Thrust = { "Thrust", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipEngineComponent, Thrust), METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_Thrust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_Thrust_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShipEngineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_IsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MinRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxThrust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SpinUpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartingRPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StartDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_StopDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ApplyThrustWhenAboveWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_ReverseThrustCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerRPMRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BaseVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_BasePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_VolumeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PitchRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_EngineAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_SimulatingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_PropellerStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_InputThrottle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_RPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipEngineComponent_Statics::NewProp_Thrust,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShipEngineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShipEngineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShipEngineComponent_Statics::ClassParams = {
		&UShipEngineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShipEngineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShipEngineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShipEngineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShipEngineComponent()
	{
		if (!Z_Registration_Info_UClass_UShipEngineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShipEngineComponent.OuterSingleton, Z_Construct_UClass_UShipEngineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShipEngineComponent.OuterSingleton;
	}
	template<> DWP2_API UClass* StaticClass<UShipEngineComponent>()
	{
		return UShipEngineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShipEngineComponent);
	UShipEngineComponent::~UShipEngineComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics::EnumInfo[] = {
		{ ShipEngineState_StaticEnum, TEXT("ShipEngineState"), &Z_Registration_Info_UEnum_ShipEngineState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1119913703U) },
		{ ShipEnginePropRotationDirection_StaticEnum, TEXT("ShipEnginePropRotationDirection"), &Z_Registration_Info_UEnum_ShipEnginePropRotationDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3446109336U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShipEngineComponent, UShipEngineComponent::StaticClass, TEXT("UShipEngineComponent"), &Z_Registration_Info_UClass_UShipEngineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShipEngineComponent), 505666035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_1029130019(TEXT("/Script/DWP2"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DWP2_Source_DWP2_Public_ShipEngineComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
