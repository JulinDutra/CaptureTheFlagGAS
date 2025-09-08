// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureTheFlagGASCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCaptureTheFlagGASCharacter() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASCharacter();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASCharacter_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFAttributeSet_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFPlayerComponent_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function DoAim *******************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics
{
	struct CaptureTheFlagGASCharacter_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aim inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aim inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "DoAim", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::CaptureTheFlagGASCharacter_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::CaptureTheFlagGASCharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function DoAim *********************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function DoInteract **************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "DoInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execDoInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoInteract();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function DoInteract ****************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function DoJumpEnd ***************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump end inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump end inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function DoJumpEnd *****************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function DoJumpStart *************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump start inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump start inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function DoJumpStart ***************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function DoMove ******************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics
{
	struct CaptureTheFlagGASCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "DoMove", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::CaptureTheFlagGASCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::CaptureTheFlagGASCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function DoMove ********************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function GetCTFPlayerComponent ***************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics
{
	struct CaptureTheFlagGASCharacter_eventGetCTFPlayerComponent_Parms
	{
		UCTFPlayerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component Access - Delegated to CTFPlayerComponent\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component Access - Delegated to CTFPlayerComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventGetCTFPlayerComponent_Parms, ReturnValue), Z_Construct_UClass_UCTFPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "GetCTFPlayerComponent", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::CaptureTheFlagGASCharacter_eventGetCTFPlayerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::CaptureTheFlagGASCharacter_eventGetCTFPlayerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execGetCTFPlayerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCTFPlayerComponent**)Z_Param__Result=P_THIS->GetCTFPlayerComponent();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function GetCTFPlayerComponent *****************

// ********** Begin Class ACaptureTheFlagGASCharacter Function GetHealth ***************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics
{
	struct CaptureTheFlagGASCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute Access\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Access" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "GetHealth", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::CaptureTheFlagGASCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::CaptureTheFlagGASCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function GetHealth *****************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function GetHealthPercentage *****************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics
{
	struct CaptureTheFlagGASCharacter_eventGetHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "GetHealthPercentage", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::CaptureTheFlagGASCharacter_eventGetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::CaptureTheFlagGASCharacter_eventGetHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execGetHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function GetHealthPercentage *******************

// ********** Begin Class ACaptureTheFlagGASCharacter Function GetMaxHealth ************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics
{
	struct CaptureTheFlagGASCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "GetMaxHealth", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::CaptureTheFlagGASCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::CaptureTheFlagGASCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function GetMaxHealth **************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function IsAlive *****************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics
{
	struct CaptureTheFlagGASCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CaptureTheFlagGASCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureTheFlagGASCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "IsAlive", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::CaptureTheFlagGASCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::CaptureTheFlagGASCharacter_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function IsAlive *******************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function OnFlagStatusChanged *****************
struct CaptureTheFlagGASCharacter_eventOnFlagStatusChanged_Parms
{
	bool bHasFlag;
};
static FName NAME_ACaptureTheFlagGASCharacter_OnFlagStatusChanged = FName(TEXT("OnFlagStatusChanged"));
void ACaptureTheFlagGASCharacter::OnFlagStatusChanged(bool bHasFlag)
{
	CaptureTheFlagGASCharacter_eventOnFlagStatusChanged_Parms Parms;
	Parms.bHasFlag=bHasFlag ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACaptureTheFlagGASCharacter_OnFlagStatusChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::NewProp_bHasFlag_SetBit(void* Obj)
{
	((CaptureTheFlagGASCharacter_eventOnFlagStatusChanged_Parms*)Obj)->bHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::NewProp_bHasFlag = { "bHasFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CaptureTheFlagGASCharacter_eventOnFlagStatusChanged_Parms), &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::NewProp_bHasFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::NewProp_bHasFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "OnFlagStatusChanged", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::PropPointers), sizeof(CaptureTheFlagGASCharacter_eventOnFlagStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CaptureTheFlagGASCharacter_eventOnFlagStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACaptureTheFlagGASCharacter Function OnFlagStatusChanged *******************

// ********** Begin Class ACaptureTheFlagGASCharacter Function OnHealthChanged *********************
struct CaptureTheFlagGASCharacter_eventOnHealthChanged_Parms
{
	float NewHealth;
	float MaxHealth;
};
static FName NAME_ACaptureTheFlagGASCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
void ACaptureTheFlagGASCharacter::OnHealthChanged(float NewHealth, float MaxHealth)
{
	CaptureTheFlagGASCharacter_eventOnHealthChanged_Parms Parms;
	Parms.NewHealth=NewHealth;
	Parms.MaxHealth=MaxHealth;
	UFunction* Func = FindFunctionChecked(NAME_ACaptureTheFlagGASCharacter_OnHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "OnHealthChanged", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::PropPointers), sizeof(CaptureTheFlagGASCharacter_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CaptureTheFlagGASCharacter_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACaptureTheFlagGASCharacter Function OnHealthChanged ***********************

// ********** Begin Class ACaptureTheFlagGASCharacter Function OnKilled ****************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics
{
	struct CaptureTheFlagGASCharacter_eventOnKilled_Parms
	{
		ACaptureTheFlagGASCharacter* Killer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Killer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::NewProp_Killer = { "Killer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventOnKilled_Parms, Killer), Z_Construct_UClass_ACaptureTheFlagGASCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::NewProp_Killer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "OnKilled", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::CaptureTheFlagGASCharacter_eventOnKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::CaptureTheFlagGASCharacter_eventOnKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execOnKilled)
{
	P_GET_OBJECT(ACaptureTheFlagGASCharacter,Z_Param_Killer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnKilled(Z_Param_Killer);
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function OnKilled ******************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function OnRespawn ***************************
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "OnRespawn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACaptureTheFlagGASCharacter::execOnRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRespawn();
	P_NATIVE_END;
}
// ********** End Class ACaptureTheFlagGASCharacter Function OnRespawn *****************************

// ********** Begin Class ACaptureTheFlagGASCharacter Function OnTeamChanged ***********************
struct CaptureTheFlagGASCharacter_eventOnTeamChanged_Parms
{
	ETeam NewTeam;
};
static FName NAME_ACaptureTheFlagGASCharacter_OnTeamChanged = FName(TEXT("OnTeamChanged"));
void ACaptureTheFlagGASCharacter::OnTeamChanged(ETeam NewTeam)
{
	CaptureTheFlagGASCharacter_eventOnTeamChanged_Parms Parms;
	Parms.NewTeam=NewTeam;
	UFunction* Func = FindFunctionChecked(NAME_ACaptureTheFlagGASCharacter_OnTeamChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CaptureTheFlagGASCharacter_eventOnTeamChanged_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACaptureTheFlagGASCharacter, nullptr, "OnTeamChanged", Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::PropPointers), sizeof(CaptureTheFlagGASCharacter_eventOnTeamChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CaptureTheFlagGASCharacter_eventOnTeamChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACaptureTheFlagGASCharacter Function OnTeamChanged *************************

// ********** Begin Class ACaptureTheFlagGASCharacter **********************************************
void ACaptureTheFlagGASCharacter::StaticRegisterNativesACaptureTheFlagGASCharacter()
{
	UClass* Class = ACaptureTheFlagGASCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoAim", &ACaptureTheFlagGASCharacter::execDoAim },
		{ "DoInteract", &ACaptureTheFlagGASCharacter::execDoInteract },
		{ "DoJumpEnd", &ACaptureTheFlagGASCharacter::execDoJumpEnd },
		{ "DoJumpStart", &ACaptureTheFlagGASCharacter::execDoJumpStart },
		{ "DoMove", &ACaptureTheFlagGASCharacter::execDoMove },
		{ "GetCTFPlayerComponent", &ACaptureTheFlagGASCharacter::execGetCTFPlayerComponent },
		{ "GetHealth", &ACaptureTheFlagGASCharacter::execGetHealth },
		{ "GetHealthPercentage", &ACaptureTheFlagGASCharacter::execGetHealthPercentage },
		{ "GetMaxHealth", &ACaptureTheFlagGASCharacter::execGetMaxHealth },
		{ "IsAlive", &ACaptureTheFlagGASCharacter::execIsAlive },
		{ "OnKilled", &ACaptureTheFlagGASCharacter::execOnKilled },
		{ "OnRespawn", &ACaptureTheFlagGASCharacter::execOnRespawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter;
UClass* ACaptureTheFlagGASCharacter::GetPrivateStaticClass()
{
	using TClass = ACaptureTheFlagGASCharacter;
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CaptureTheFlagGASCharacter"),
			Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter.InnerSingleton,
			StaticRegisterNativesACaptureTheFlagGASCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACaptureTheFlagGASCharacter_NoRegister()
{
	return ACaptureTheFlagGASCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic first person character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CaptureTheFlagGASCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic first person character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTFPlayerComponent_MetaData[] = {
		{ "Category", "CTF Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CTF Player Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CTF Player Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GAS Components (owned by PlayerState)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAS Components (owned by PlayerState)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTFPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached References\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached References" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CTFGameState_MetaData[] = {
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRange_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "CaptureTheFlagGASCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CTFPlayerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CTFPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CTFGameState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoAim, "DoAim" }, // 2072800058
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoInteract, "DoInteract" }, // 1374687350
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpEnd, "DoJumpEnd" }, // 18976354
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoJumpStart, "DoJumpStart" }, // 3722457685
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_DoMove, "DoMove" }, // 3179110003
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetCTFPlayerComponent, "GetCTFPlayerComponent" }, // 2003815476
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealth, "GetHealth" }, // 1373639210
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetHealthPercentage, "GetHealthPercentage" }, // 2440821760
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_GetMaxHealth, "GetMaxHealth" }, // 1924829495
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_IsAlive, "IsAlive" }, // 1333188146
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnFlagStatusChanged, "OnFlagStatusChanged" }, // 154045243
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnHealthChanged, "OnHealthChanged" }, // 716172363
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnKilled, "OnKilled" }, // 1268555096
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnRespawn, "OnRespawn" }, // 3980546874
		{ &Z_Construct_UFunction_ACaptureTheFlagGASCharacter_OnTeamChanged, "OnTeamChanged" }, // 1539870318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureTheFlagGASCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_CTFPlayerComponent = { "CTFPlayerComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, CTFPlayerComponent), Z_Construct_UClass_UCTFPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTFPlayerComponent_MetaData), NewProp_CTFPlayerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, AttributeSet), Z_Construct_UClass_UCTFAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_CTFPlayerState = { "CTFPlayerState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, CTFPlayerState), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTFPlayerState_MetaData), NewProp_CTFPlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_CTFGameState = { "CTFGameState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, CTFGameState), Z_Construct_UClass_ACTFGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CTFGameState_MetaData), NewProp_CTFGameState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_InteractionRange = { "InteractionRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACaptureTheFlagGASCharacter, InteractionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRange_MetaData), NewProp_InteractionRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_CTFPlayerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_CTFPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_CTFGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::NewProp_InteractionRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACaptureTheFlagGASCharacter, IAbilitySystemInterface), false },  // 1199015870
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::ClassParams = {
	&ACaptureTheFlagGASCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACaptureTheFlagGASCharacter()
{
	if (!Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter.OuterSingleton, Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureTheFlagGASCharacter);
ACaptureTheFlagGASCharacter::~ACaptureTheFlagGASCharacter() {}
// ********** End Class ACaptureTheFlagGASCharacter ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACaptureTheFlagGASCharacter, ACaptureTheFlagGASCharacter::StaticClass, TEXT("ACaptureTheFlagGASCharacter"), &Z_Registration_Info_UClass_ACaptureTheFlagGASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptureTheFlagGASCharacter), 3922254787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h__Script_CaptureTheFlagGAS_39050118(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
