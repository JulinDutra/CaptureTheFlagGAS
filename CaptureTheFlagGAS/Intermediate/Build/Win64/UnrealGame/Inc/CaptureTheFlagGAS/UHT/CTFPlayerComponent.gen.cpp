// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/CTFPlayerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCTFPlayerComponent() {}

// ********** Begin Cross Module References ********************************************************
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFCaptureZone_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFGameState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerState_NoRegister();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFPlayerComponent();
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFPlayerComponent_NoRegister();
CAPTURETHEFLAGGAS_API UEnum* Z_Construct_UEnum_CaptureTheFlagGAS_ETeam();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature();
CAPTURETHEFLAGGAS_API UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CaptureTheFlagGAS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPlayerFlagPickedUpDelegate *****************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerFlagPickedUpDelegate_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerFlagPickedUpDelegate_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnPlayerFlagPickedUpDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerFlagPickedUpDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerFlagPickedUpDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerFlagPickedUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerFlagPickedUpDelegate, ACTFFlag* Flag)
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerFlagPickedUpDelegate_Parms
	{
		ACTFFlag* Flag;
	};
	_Script_CaptureTheFlagGAS_eventOnPlayerFlagPickedUpDelegate_Parms Parms;
	Parms.Flag=Flag;
	OnPlayerFlagPickedUpDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerFlagPickedUpDelegate *******************************************

// ********** Begin Delegate FOnPlayerFlagDroppedDelegate ******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerFlagDroppedDelegate_Parms
	{
		ACTFFlag* Flag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerFlagDroppedDelegate_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnPlayerFlagDroppedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerFlagDroppedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerFlagDroppedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerFlagDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerFlagDroppedDelegate, ACTFFlag* Flag)
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerFlagDroppedDelegate_Parms
	{
		ACTFFlag* Flag;
	};
	_Script_CaptureTheFlagGAS_eventOnPlayerFlagDroppedDelegate_Parms Parms;
	Parms.Flag=Flag;
	OnPlayerFlagDroppedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerFlagDroppedDelegate ********************************************

// ********** Begin Delegate FOnPlayerTeamChangedDelegate ******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms
	{
		ETeam OldTeam;
		ETeam NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms, OldTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnPlayerTeamChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerTeamChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerTeamChangedDelegate, ETeam OldTeam, ETeam NewTeam)
{
	struct _Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms
	{
		ETeam OldTeam;
		ETeam NewTeam;
	};
	_Script_CaptureTheFlagGAS_eventOnPlayerTeamChangedDelegate_Parms Parms;
	Parms.OldTeam=OldTeam;
	Parms.NewTeam=NewTeam;
	OnPlayerTeamChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerTeamChangedDelegate ********************************************

// ********** Begin Delegate FOnHealthChangedDelegate **********************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms
	{
		float OldHealth;
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnHealthChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedDelegate, float OldHealth, float NewHealth)
{
	struct _Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms
	{
		float OldHealth;
		float NewHealth;
	};
	_Script_CaptureTheFlagGAS_eventOnHealthChangedDelegate_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	OnHealthChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChangedDelegate ************************************************

// ********** Begin Delegate FOnEnteredCaptureZoneDelegate *****************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnEnteredCaptureZoneDelegate_Parms
	{
		ACTFCaptureZone* Zone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnEnteredCaptureZoneDelegate_Parms, Zone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::NewProp_Zone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnEnteredCaptureZoneDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnEnteredCaptureZoneDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnEnteredCaptureZoneDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnteredCaptureZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnteredCaptureZoneDelegate, ACTFCaptureZone* Zone)
{
	struct _Script_CaptureTheFlagGAS_eventOnEnteredCaptureZoneDelegate_Parms
	{
		ACTFCaptureZone* Zone;
	};
	_Script_CaptureTheFlagGAS_eventOnEnteredCaptureZoneDelegate_Parms Parms;
	Parms.Zone=Zone;
	OnEnteredCaptureZoneDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEnteredCaptureZoneDelegate *******************************************

// ********** Begin Delegate FOnExitedCaptureZoneDelegate ******************************************
struct Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics
{
	struct _Script_CaptureTheFlagGAS_eventOnExitedCaptureZoneDelegate_Parms
	{
		ACTFCaptureZone* Zone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CaptureTheFlagGAS_eventOnExitedCaptureZoneDelegate_Parms, Zone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::NewProp_Zone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS, nullptr, "OnExitedCaptureZoneDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnExitedCaptureZoneDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::_Script_CaptureTheFlagGAS_eventOnExitedCaptureZoneDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExitedCaptureZoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnExitedCaptureZoneDelegate, ACTFCaptureZone* Zone)
{
	struct _Script_CaptureTheFlagGAS_eventOnExitedCaptureZoneDelegate_Parms
	{
		ACTFCaptureZone* Zone;
	};
	_Script_CaptureTheFlagGAS_eventOnExitedCaptureZoneDelegate_Parms Parms;
	Parms.Zone=Zone;
	OnExitedCaptureZoneDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnExitedCaptureZoneDelegate ********************************************

// ********** Begin Class UCTFPlayerComponent Function CanCaptureFlag ******************************
struct Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics
{
	struct CTFPlayerComponent_eventCanCaptureFlag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Capture" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventCanCaptureFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventCanCaptureFlag_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "CanCaptureFlag", Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::CTFPlayerComponent_eventCanCaptureFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::CTFPlayerComponent_eventCanCaptureFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execCanCaptureFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCaptureFlag();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function CanCaptureFlag ********************************

// ********** Begin Class UCTFPlayerComponent Function DoInteract **********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_DoInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_DoInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "DoInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_DoInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_DoInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_DoInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_DoInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execDoInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoInteract();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function DoInteract ************************************

// ********** Begin Class UCTFPlayerComponent Function DropFlag ************************************
struct Z_Construct_UFunction_UCTFPlayerComponent_DropFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Flag" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_DropFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "DropFlag", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_DropFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_DropFlag_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_DropFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_DropFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execDropFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropFlag();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function DropFlag **************************************

// ********** Begin Class UCTFPlayerComponent Function FindNearestCaptureZone **********************
struct Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics
{
	struct CTFPlayerComponent_eventFindNearestCaptureZone_Parms
	{
		float MaxDistance;
		ACTFCaptureZone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Interaction" },
		{ "CPP_Default_MaxDistance", "300.000000" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventFindNearestCaptureZone_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventFindNearestCaptureZone_Parms, ReturnValue), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "FindNearestCaptureZone", Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::CTFPlayerComponent_eventFindNearestCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::CTFPlayerComponent_eventFindNearestCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execFindNearestCaptureZone)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFCaptureZone**)Z_Param__Result=P_THIS->FindNearestCaptureZone(Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function FindNearestCaptureZone ************************

// ********** Begin Class UCTFPlayerComponent Function FindNearestInteractableFlag *****************
struct Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics
{
	struct CTFPlayerComponent_eventFindNearestInteractableFlag_Parms
	{
		float MaxDistance;
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Interaction" },
		{ "CPP_Default_MaxDistance", "200.000000" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventFindNearestInteractableFlag_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventFindNearestInteractableFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "FindNearestInteractableFlag", Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::CTFPlayerComponent_eventFindNearestInteractableFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::CTFPlayerComponent_eventFindNearestInteractableFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execFindNearestInteractableFlag)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->FindNearestInteractableFlag(Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function FindNearestInteractableFlag *******************

// ********** Begin Class UCTFPlayerComponent Function GetAbilitySystemComponent *******************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics
{
	struct CTFPlayerComponent_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|References" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetAbilitySystemComponent", Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::CTFPlayerComponent_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::CTFPlayerComponent_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetAbilitySystemComponent *********************

// ********** Begin Class UCTFPlayerComponent Function GetCarriedFlag ******************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics
{
	struct CTFPlayerComponent_eventGetCarriedFlag_Parms
	{
		ACTFFlag* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Flag" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetCarriedFlag_Parms, ReturnValue), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetCarriedFlag", Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::CTFPlayerComponent_eventGetCarriedFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::CTFPlayerComponent_eventGetCarriedFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetCarriedFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFFlag**)Z_Param__Result=P_THIS->GetCarriedFlag();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetCarriedFlag ********************************

// ********** Begin Class UCTFPlayerComponent Function GetCTFPlayerState ***************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics
{
	struct CTFPlayerComponent_eventGetCTFPlayerState_Parms
	{
		ACTFPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|References" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters for cached references\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters for cached references" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetCTFPlayerState_Parms, ReturnValue), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetCTFPlayerState", Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::CTFPlayerComponent_eventGetCTFPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::CTFPlayerComponent_eventGetCTFPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetCTFPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFPlayerState**)Z_Param__Result=P_THIS->GetCTFPlayerState();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetCTFPlayerState *****************************

// ********** Begin Class UCTFPlayerComponent Function GetCurrentCaptureZone ***********************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics
{
	struct CTFPlayerComponent_eventGetCurrentCaptureZone_Parms
	{
		ACTFCaptureZone* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Capture" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetCurrentCaptureZone_Parms, ReturnValue), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetCurrentCaptureZone", Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::CTFPlayerComponent_eventGetCurrentCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::CTFPlayerComponent_eventGetCurrentCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetCurrentCaptureZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACTFCaptureZone**)Z_Param__Result=P_THIS->GetCurrentCaptureZone();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetCurrentCaptureZone *************************

// ********** Begin Class UCTFPlayerComponent Function GetHealth ***********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics
{
	struct CTFPlayerComponent_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health and Abilities\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health and Abilities" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetHealth", Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::CTFPlayerComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::CTFPlayerComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetHealth *************************************

// ********** Begin Class UCTFPlayerComponent Function GetHealthPercentage *************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics
{
	struct CTFPlayerComponent_eventGetHealthPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Health" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetHealthPercentage", Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::CTFPlayerComponent_eventGetHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::CTFPlayerComponent_eventGetHealthPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetHealthPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetHealthPercentage ***************************

// ********** Begin Class UCTFPlayerComponent Function GetMaxHealth ********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics
{
	struct CTFPlayerComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Health" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetMaxHealth", Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::CTFPlayerComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::CTFPlayerComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetMaxHealth **********************************

// ********** Begin Class UCTFPlayerComponent Function GetTeam *************************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics
{
	struct CTFPlayerComponent_eventGetTeam_Parms
	{
		ETeam ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Team Management\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Team Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetTeam", Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::CTFPlayerComponent_eventGetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::CTFPlayerComponent_eventGetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetTeam ***************************************

// ********** Begin Class UCTFPlayerComponent Function GetTeamColor ********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics
{
	struct CTFPlayerComponent_eventGetTeamColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Team" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventGetTeamColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "GetTeamColor", Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::CTFPlayerComponent_eventGetTeamColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::CTFPlayerComponent_eventGetTeamColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execGetTeamColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetTeamColor();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function GetTeamColor **********************************

// ********** Begin Class UCTFPlayerComponent Function HandleFlagStatusChanged *********************
struct Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics
{
	struct CTFPlayerComponent_eventHandleFlagStatusChanged_Parms
	{
		bool bHasFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::NewProp_bHasFlag_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventHandleFlagStatusChanged_Parms*)Obj)->bHasFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::NewProp_bHasFlag = { "bHasFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventHandleFlagStatusChanged_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::NewProp_bHasFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::NewProp_bHasFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "HandleFlagStatusChanged", Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::CTFPlayerComponent_eventHandleFlagStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::CTFPlayerComponent_eventHandleFlagStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execHandleFlagStatusChanged)
{
	P_GET_UBOOL(Z_Param_bHasFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleFlagStatusChanged(Z_Param_bHasFlag);
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function HandleFlagStatusChanged ***********************

// ********** Begin Class UCTFPlayerComponent Function HandlePlayerEnteredZone *********************
struct Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics
{
	struct CTFPlayerComponent_eventHandlePlayerEnteredZone_Parms
	{
		ACTFPlayerState* Player;
		ETeam ZoneTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZoneTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoneTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventHandlePlayerEnteredZone_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::NewProp_ZoneTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::NewProp_ZoneTeam = { "ZoneTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventHandlePlayerEnteredZone_Parms, ZoneTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::NewProp_ZoneTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::NewProp_ZoneTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "HandlePlayerEnteredZone", Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::CTFPlayerComponent_eventHandlePlayerEnteredZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::CTFPlayerComponent_eventHandlePlayerEnteredZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execHandlePlayerEnteredZone)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_GET_ENUM(ETeam,Z_Param_ZoneTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerEnteredZone(Z_Param_Player,ETeam(Z_Param_ZoneTeam));
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function HandlePlayerEnteredZone ***********************

// ********** Begin Class UCTFPlayerComponent Function HandlePlayerExitedZone **********************
struct Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics
{
	struct CTFPlayerComponent_eventHandlePlayerExitedZone_Parms
	{
		ACTFPlayerState* Player;
		ETeam ZoneTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZoneTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoneTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventHandlePlayerExitedZone_Parms, Player), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::NewProp_ZoneTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::NewProp_ZoneTeam = { "ZoneTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventHandlePlayerExitedZone_Parms, ZoneTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::NewProp_ZoneTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::NewProp_ZoneTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "HandlePlayerExitedZone", Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::CTFPlayerComponent_eventHandlePlayerExitedZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::CTFPlayerComponent_eventHandlePlayerExitedZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execHandlePlayerExitedZone)
{
	P_GET_OBJECT(ACTFPlayerState,Z_Param_Player);
	P_GET_ENUM(ETeam,Z_Param_ZoneTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerExitedZone(Z_Param_Player,ETeam(Z_Param_ZoneTeam));
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function HandlePlayerExitedZone ************************

// ********** Begin Class UCTFPlayerComponent Function HandleTeamChanged ***************************
struct Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics
{
	struct CTFPlayerComponent_eventHandleTeamChanged_Parms
	{
		ETeam OldTeam;
		ETeam NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handlers\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_OldTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventHandleTeamChanged_Parms, OldTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventHandleTeamChanged_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_OldTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "HandleTeamChanged", Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::CTFPlayerComponent_eventHandleTeamChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::CTFPlayerComponent_eventHandleTeamChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execHandleTeamChanged)
{
	P_GET_ENUM(ETeam,Z_Param_OldTeam);
	P_GET_ENUM(ETeam,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTeamChanged(ETeam(Z_Param_OldTeam),ETeam(Z_Param_NewTeam));
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function HandleTeamChanged *****************************

// ********** Begin Class UCTFPlayerComponent Function HasFlag *************************************
struct Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics
{
	struct CTFPlayerComponent_eventHasFlag_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Flag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag Management\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag Management" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventHasFlag_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "HasFlag", Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::CTFPlayerComponent_eventHasFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::CTFPlayerComponent_eventHasFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_HasFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_HasFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execHasFlag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFlag();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function HasFlag ***************************************

// ********** Begin Class UCTFPlayerComponent Function InitializeComponent *************************
struct Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialization\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "InitializeComponent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execInitializeComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeComponent();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function InitializeComponent ***************************

// ********** Begin Class UCTFPlayerComponent Function IsAlive *************************************
struct Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics
{
	struct CTFPlayerComponent_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Health" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "IsAlive", Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::CTFPlayerComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::CTFPlayerComponent_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function IsAlive ***************************************

// ********** Begin Class UCTFPlayerComponent Function IsEnemyOf ***********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics
{
	struct CTFPlayerComponent_eventIsEnemyOf_Parms
	{
		const UCTFPlayerComponent* OtherComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Team" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventIsEnemyOf_Parms, OtherComponent), Z_Construct_UClass_UCTFPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
void Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventIsEnemyOf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventIsEnemyOf_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "IsEnemyOf", Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::CTFPlayerComponent_eventIsEnemyOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::CTFPlayerComponent_eventIsEnemyOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execIsEnemyOf)
{
	P_GET_OBJECT(UCTFPlayerComponent,Z_Param_OtherComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnemyOf(Z_Param_OtherComponent);
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function IsEnemyOf *************************************

// ********** Begin Class UCTFPlayerComponent Function IsInCaptureZone *****************************
struct Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics
{
	struct CTFPlayerComponent_eventIsInCaptureZone_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Capture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Capture Zone Tracking\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Capture Zone Tracking" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventIsInCaptureZone_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventIsInCaptureZone_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "IsInCaptureZone", Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::CTFPlayerComponent_eventIsInCaptureZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::CTFPlayerComponent_eventIsInCaptureZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execIsInCaptureZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInCaptureZone();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function IsInCaptureZone *******************************

// ********** Begin Class UCTFPlayerComponent Function IsInitialized *******************************
struct Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics
{
	struct CTFPlayerComponent_eventIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventIsInitialized_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "IsInitialized", Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::CTFPlayerComponent_eventIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::CTFPlayerComponent_eventIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitialized();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function IsInitialized *********************************

// ********** Begin Class UCTFPlayerComponent Function IsOnSameTeam ********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics
{
	struct CTFPlayerComponent_eventIsOnSameTeam_Parms
	{
		const UCTFPlayerComponent* OtherComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Team" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventIsOnSameTeam_Parms, OtherComponent), Z_Construct_UClass_UCTFPlayerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
void Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventIsOnSameTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventIsOnSameTeam_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "IsOnSameTeam", Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::CTFPlayerComponent_eventIsOnSameTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::CTFPlayerComponent_eventIsOnSameTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execIsOnSameTeam)
{
	P_GET_OBJECT(UCTFPlayerComponent,Z_Param_OtherComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnSameTeam(Z_Param_OtherComponent);
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function IsOnSameTeam **********************************

// ********** Begin Class UCTFPlayerComponent Function OnDeathEvent ********************************
static FName NAME_UCTFPlayerComponent_OnDeathEvent = FName(TEXT("OnDeathEvent"));
void UCTFPlayerComponent::OnDeathEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_UCTFPlayerComponent_OnDeathEvent);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "OnDeathEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFPlayerComponent Function OnDeathEvent **********************************

// ********** Begin Class UCTFPlayerComponent Function OnFlagDroppedEvent **************************
struct CTFPlayerComponent_eventOnFlagDroppedEvent_Parms
{
	ACTFFlag* Flag;
};
static FName NAME_UCTFPlayerComponent_OnFlagDroppedEvent = FName(TEXT("OnFlagDroppedEvent"));
void UCTFPlayerComponent::OnFlagDroppedEvent(ACTFFlag* Flag)
{
	CTFPlayerComponent_eventOnFlagDroppedEvent_Parms Parms;
	Parms.Flag=Flag;
	UFunction* Func = FindFunctionChecked(NAME_UCTFPlayerComponent_OnFlagDroppedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventOnFlagDroppedEvent_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "OnFlagDroppedEvent", Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::PropPointers), sizeof(CTFPlayerComponent_eventOnFlagDroppedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerComponent_eventOnFlagDroppedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFPlayerComponent Function OnFlagDroppedEvent ****************************

// ********** Begin Class UCTFPlayerComponent Function OnFlagPickedUpEvent *************************
struct CTFPlayerComponent_eventOnFlagPickedUpEvent_Parms
{
	ACTFFlag* Flag;
};
static FName NAME_UCTFPlayerComponent_OnFlagPickedUpEvent = FName(TEXT("OnFlagPickedUpEvent"));
void UCTFPlayerComponent::OnFlagPickedUpEvent(ACTFFlag* Flag)
{
	CTFPlayerComponent_eventOnFlagPickedUpEvent_Parms Parms;
	Parms.Flag=Flag;
	UFunction* Func = FindFunctionChecked(NAME_UCTFPlayerComponent_OnFlagPickedUpEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventOnFlagPickedUpEvent_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::NewProp_Flag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "OnFlagPickedUpEvent", Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::PropPointers), sizeof(CTFPlayerComponent_eventOnFlagPickedUpEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerComponent_eventOnFlagPickedUpEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFPlayerComponent Function OnFlagPickedUpEvent ***************************

// ********** Begin Class UCTFPlayerComponent Function OnHealthChangedEvent ************************
struct CTFPlayerComponent_eventOnHealthChangedEvent_Parms
{
	float OldHealth;
	float NewHealth;
};
static FName NAME_UCTFPlayerComponent_OnHealthChangedEvent = FName(TEXT("OnHealthChangedEvent"));
void UCTFPlayerComponent::OnHealthChangedEvent(float OldHealth, float NewHealth)
{
	CTFPlayerComponent_eventOnHealthChangedEvent_Parms Parms;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	UFunction* Func = FindFunctionChecked(NAME_UCTFPlayerComponent_OnHealthChangedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventOnHealthChangedEvent_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventOnHealthChangedEvent_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "OnHealthChangedEvent", Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::PropPointers), sizeof(CTFPlayerComponent_eventOnHealthChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerComponent_eventOnHealthChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFPlayerComponent Function OnHealthChangedEvent **************************

// ********** Begin Class UCTFPlayerComponent Function OnRespawnEvent ******************************
static FName NAME_UCTFPlayerComponent_OnRespawnEvent = FName(TEXT("OnRespawnEvent"));
void UCTFPlayerComponent::OnRespawnEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_UCTFPlayerComponent_OnRespawnEvent);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "OnRespawnEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFPlayerComponent Function OnRespawnEvent ********************************

// ********** Begin Class UCTFPlayerComponent Function OnTeamChangedEvent **************************
struct CTFPlayerComponent_eventOnTeamChangedEvent_Parms
{
	ETeam OldTeam;
	ETeam NewTeam;
};
static FName NAME_UCTFPlayerComponent_OnTeamChangedEvent = FName(TEXT("OnTeamChangedEvent"));
void UCTFPlayerComponent::OnTeamChangedEvent(ETeam OldTeam, ETeam NewTeam)
{
	CTFPlayerComponent_eventOnTeamChangedEvent_Parms Parms;
	Parms.OldTeam=OldTeam;
	Parms.NewTeam=NewTeam;
	UFunction* Func = FindFunctionChecked(NAME_UCTFPlayerComponent_OnTeamChangedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTeam_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_OldTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventOnTeamChangedEvent_Parms, OldTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_NewTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventOnTeamChangedEvent_Parms, NewTeam), Z_Construct_UEnum_CaptureTheFlagGAS_ETeam, METADATA_PARAMS(0, nullptr) }; // 576107608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_OldTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_NewTeam_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "OnTeamChangedEvent", Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::PropPointers), sizeof(CTFPlayerComponent_eventOnTeamChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CTFPlayerComponent_eventOnTeamChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCTFPlayerComponent Function OnTeamChangedEvent ****************************

// ********** Begin Class UCTFPlayerComponent Function TryCapture **********************************
struct Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics
{
	struct CTFPlayerComponent_eventTryCapture_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Flag" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventTryCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventTryCapture_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "TryCapture", Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::CTFPlayerComponent_eventTryCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::CTFPlayerComponent_eventTryCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_TryCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_TryCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execTryCapture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryCapture();
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function TryCapture ************************************

// ********** Begin Class UCTFPlayerComponent Function TryPickupFlag *******************************
struct Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics
{
	struct CTFPlayerComponent_eventTryPickupFlag_Parms
	{
		ACTFFlag* Flag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CTF Player|Flag" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Flag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CTFPlayerComponent_eventTryPickupFlag_Parms, Flag), Z_Construct_UClass_ACTFFlag_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CTFPlayerComponent_eventTryPickupFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CTFPlayerComponent_eventTryPickupFlag_Parms), &Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCTFPlayerComponent, nullptr, "TryPickupFlag", Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::CTFPlayerComponent_eventTryPickupFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::CTFPlayerComponent_eventTryPickupFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCTFPlayerComponent::execTryPickupFlag)
{
	P_GET_OBJECT(ACTFFlag,Z_Param_Flag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPickupFlag(Z_Param_Flag);
	P_NATIVE_END;
}
// ********** End Class UCTFPlayerComponent Function TryPickupFlag *********************************

// ********** Begin Class UCTFPlayerComponent ******************************************************
void UCTFPlayerComponent::StaticRegisterNativesUCTFPlayerComponent()
{
	UClass* Class = UCTFPlayerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanCaptureFlag", &UCTFPlayerComponent::execCanCaptureFlag },
		{ "DoInteract", &UCTFPlayerComponent::execDoInteract },
		{ "DropFlag", &UCTFPlayerComponent::execDropFlag },
		{ "FindNearestCaptureZone", &UCTFPlayerComponent::execFindNearestCaptureZone },
		{ "FindNearestInteractableFlag", &UCTFPlayerComponent::execFindNearestInteractableFlag },
		{ "GetAbilitySystemComponent", &UCTFPlayerComponent::execGetAbilitySystemComponent },
		{ "GetCarriedFlag", &UCTFPlayerComponent::execGetCarriedFlag },
		{ "GetCTFPlayerState", &UCTFPlayerComponent::execGetCTFPlayerState },
		{ "GetCurrentCaptureZone", &UCTFPlayerComponent::execGetCurrentCaptureZone },
		{ "GetHealth", &UCTFPlayerComponent::execGetHealth },
		{ "GetHealthPercentage", &UCTFPlayerComponent::execGetHealthPercentage },
		{ "GetMaxHealth", &UCTFPlayerComponent::execGetMaxHealth },
		{ "GetTeam", &UCTFPlayerComponent::execGetTeam },
		{ "GetTeamColor", &UCTFPlayerComponent::execGetTeamColor },
		{ "HandleFlagStatusChanged", &UCTFPlayerComponent::execHandleFlagStatusChanged },
		{ "HandlePlayerEnteredZone", &UCTFPlayerComponent::execHandlePlayerEnteredZone },
		{ "HandlePlayerExitedZone", &UCTFPlayerComponent::execHandlePlayerExitedZone },
		{ "HandleTeamChanged", &UCTFPlayerComponent::execHandleTeamChanged },
		{ "HasFlag", &UCTFPlayerComponent::execHasFlag },
		{ "InitializeComponent", &UCTFPlayerComponent::execInitializeComponent },
		{ "IsAlive", &UCTFPlayerComponent::execIsAlive },
		{ "IsEnemyOf", &UCTFPlayerComponent::execIsEnemyOf },
		{ "IsInCaptureZone", &UCTFPlayerComponent::execIsInCaptureZone },
		{ "IsInitialized", &UCTFPlayerComponent::execIsInitialized },
		{ "IsOnSameTeam", &UCTFPlayerComponent::execIsOnSameTeam },
		{ "TryCapture", &UCTFPlayerComponent::execTryCapture },
		{ "TryPickupFlag", &UCTFPlayerComponent::execTryPickupFlag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCTFPlayerComponent;
UClass* UCTFPlayerComponent::GetPrivateStaticClass()
{
	using TClass = UCTFPlayerComponent;
	if (!Z_Registration_Info_UClass_UCTFPlayerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CTFPlayerComponent"),
			Z_Registration_Info_UClass_UCTFPlayerComponent.InnerSingleton,
			StaticRegisterNativesUCTFPlayerComponent,
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
	return Z_Registration_Info_UClass_UCTFPlayerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCTFPlayerComponent_NoRegister()
{
	return UCTFPlayerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCTFPlayerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CTFPlayerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagPickedUp_MetaData[] = {
		{ "Category", "CTF Player|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFlagDropped_MetaData[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChanged_MetaData[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnteredCaptureZone_MetaData[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExitedCaptureZone_MetaData[] = {
		{ "Category", "CTF Player|Events" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "CTF Player|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDropFlagOnDeath_MetaData[] = {
		{ "Category", "CTF Player|Config" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoTryCaptureInZone_MetaData[] = {
		{ "Category", "CTF Player|Config" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached references\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached references" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCaptureZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CTFPlayerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagPickedUp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFlagDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnteredCaptureZone;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExitedCaptureZone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static void NewProp_bAutoDropFlagOnDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDropFlagOnDeath;
	static void NewProp_bAutoTryCaptureInZone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoTryCaptureInZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCaptureZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCTFPlayerComponent_CanCaptureFlag, "CanCaptureFlag" }, // 2847926625
		{ &Z_Construct_UFunction_UCTFPlayerComponent_DoInteract, "DoInteract" }, // 1144313934
		{ &Z_Construct_UFunction_UCTFPlayerComponent_DropFlag, "DropFlag" }, // 3331288582
		{ &Z_Construct_UFunction_UCTFPlayerComponent_FindNearestCaptureZone, "FindNearestCaptureZone" }, // 3296915415
		{ &Z_Construct_UFunction_UCTFPlayerComponent_FindNearestInteractableFlag, "FindNearestInteractableFlag" }, // 519095996
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 725821717
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetCarriedFlag, "GetCarriedFlag" }, // 1887578842
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetCTFPlayerState, "GetCTFPlayerState" }, // 444314540
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetCurrentCaptureZone, "GetCurrentCaptureZone" }, // 989042372
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetHealth, "GetHealth" }, // 1178244311
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetHealthPercentage, "GetHealthPercentage" }, // 1459022439
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetMaxHealth, "GetMaxHealth" }, // 3406898414
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetTeam, "GetTeam" }, // 2030120137
		{ &Z_Construct_UFunction_UCTFPlayerComponent_GetTeamColor, "GetTeamColor" }, // 870791557
		{ &Z_Construct_UFunction_UCTFPlayerComponent_HandleFlagStatusChanged, "HandleFlagStatusChanged" }, // 2299151212
		{ &Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerEnteredZone, "HandlePlayerEnteredZone" }, // 2737303699
		{ &Z_Construct_UFunction_UCTFPlayerComponent_HandlePlayerExitedZone, "HandlePlayerExitedZone" }, // 1532005948
		{ &Z_Construct_UFunction_UCTFPlayerComponent_HandleTeamChanged, "HandleTeamChanged" }, // 1728221070
		{ &Z_Construct_UFunction_UCTFPlayerComponent_HasFlag, "HasFlag" }, // 3085364712
		{ &Z_Construct_UFunction_UCTFPlayerComponent_InitializeComponent, "InitializeComponent" }, // 796662617
		{ &Z_Construct_UFunction_UCTFPlayerComponent_IsAlive, "IsAlive" }, // 663332341
		{ &Z_Construct_UFunction_UCTFPlayerComponent_IsEnemyOf, "IsEnemyOf" }, // 3821284566
		{ &Z_Construct_UFunction_UCTFPlayerComponent_IsInCaptureZone, "IsInCaptureZone" }, // 1739304738
		{ &Z_Construct_UFunction_UCTFPlayerComponent_IsInitialized, "IsInitialized" }, // 113468140
		{ &Z_Construct_UFunction_UCTFPlayerComponent_IsOnSameTeam, "IsOnSameTeam" }, // 2114039718
		{ &Z_Construct_UFunction_UCTFPlayerComponent_OnDeathEvent, "OnDeathEvent" }, // 2995955240
		{ &Z_Construct_UFunction_UCTFPlayerComponent_OnFlagDroppedEvent, "OnFlagDroppedEvent" }, // 3062509865
		{ &Z_Construct_UFunction_UCTFPlayerComponent_OnFlagPickedUpEvent, "OnFlagPickedUpEvent" }, // 2464554442
		{ &Z_Construct_UFunction_UCTFPlayerComponent_OnHealthChangedEvent, "OnHealthChangedEvent" }, // 988550123
		{ &Z_Construct_UFunction_UCTFPlayerComponent_OnRespawnEvent, "OnRespawnEvent" }, // 2397305499
		{ &Z_Construct_UFunction_UCTFPlayerComponent_OnTeamChangedEvent, "OnTeamChangedEvent" }, // 2163408887
		{ &Z_Construct_UFunction_UCTFPlayerComponent_TryCapture, "TryCapture" }, // 267621053
		{ &Z_Construct_UFunction_UCTFPlayerComponent_TryPickupFlag, "TryPickupFlag" }, // 2704814269
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCTFPlayerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnFlagPickedUp = { "OnFlagPickedUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OnFlagPickedUp), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagPickedUpDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagPickedUp_MetaData), NewProp_OnFlagPickedUp_MetaData) }; // 3025974604
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnFlagDropped = { "OnFlagDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OnFlagDropped), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerFlagDroppedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFlagDropped_MetaData), NewProp_OnFlagDropped_MetaData) }; // 26057861
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnTeamChanged = { "OnTeamChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OnTeamChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnPlayerTeamChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChanged_MetaData), NewProp_OnTeamChanged_MetaData) }; // 2807347303
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OnHealthChanged), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnHealthChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 3651768523
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnEnteredCaptureZone = { "OnEnteredCaptureZone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OnEnteredCaptureZone), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnEnteredCaptureZoneDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnteredCaptureZone_MetaData), NewProp_OnEnteredCaptureZone_MetaData) }; // 1764790118
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnExitedCaptureZone = { "OnExitedCaptureZone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OnExitedCaptureZone), Z_Construct_UDelegateFunction_CaptureTheFlagGAS_OnExitedCaptureZoneDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExitedCaptureZone_MetaData), NewProp_OnExitedCaptureZone_MetaData) }; // 4066742892
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
void Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoDropFlagOnDeath_SetBit(void* Obj)
{
	((UCTFPlayerComponent*)Obj)->bAutoDropFlagOnDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoDropFlagOnDeath = { "bAutoDropFlagOnDeath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTFPlayerComponent), &Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoDropFlagOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDropFlagOnDeath_MetaData), NewProp_bAutoDropFlagOnDeath_MetaData) };
void Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoTryCaptureInZone_SetBit(void* Obj)
{
	((UCTFPlayerComponent*)Obj)->bAutoTryCaptureInZone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoTryCaptureInZone = { "bAutoTryCaptureInZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCTFPlayerComponent), &Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoTryCaptureInZone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoTryCaptureInZone_MetaData), NewProp_bAutoTryCaptureInZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CachedPlayerState = { "CachedPlayerState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, CachedPlayerState), Z_Construct_UClass_ACTFPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerState_MetaData), NewProp_CachedPlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CachedASC = { "CachedASC", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, CachedASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedASC_MetaData), NewProp_CachedASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CachedGameState = { "CachedGameState", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, CachedGameState), Z_Construct_UClass_ACTFGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameState_MetaData), NewProp_CachedGameState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CurrentCaptureZone = { "CurrentCaptureZone", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCTFPlayerComponent, CurrentCaptureZone), Z_Construct_UClass_ACTFCaptureZone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCaptureZone_MetaData), NewProp_CurrentCaptureZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCTFPlayerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnFlagPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnFlagDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnTeamChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnEnteredCaptureZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OnExitedCaptureZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoDropFlagOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_bAutoTryCaptureInZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CachedPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CachedASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CachedGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCTFPlayerComponent_Statics::NewProp_CurrentCaptureZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFPlayerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCTFPlayerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CaptureTheFlagGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFPlayerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCTFPlayerComponent_Statics::ClassParams = {
	&UCTFPlayerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCTFPlayerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCTFPlayerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCTFPlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCTFPlayerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCTFPlayerComponent()
{
	if (!Z_Registration_Info_UClass_UCTFPlayerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCTFPlayerComponent.OuterSingleton, Z_Construct_UClass_UCTFPlayerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCTFPlayerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCTFPlayerComponent);
UCTFPlayerComponent::~UCTFPlayerComponent() {}
// ********** End Class UCTFPlayerComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h__Script_CaptureTheFlagGAS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCTFPlayerComponent, UCTFPlayerComponent::StaticClass, TEXT("UCTFPlayerComponent"), &Z_Registration_Info_UClass_UCTFPlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCTFPlayerComponent), 772968795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h__Script_CaptureTheFlagGAS_1971791687(TEXT("/Script/CaptureTheFlagGAS"),
	Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h__Script_CaptureTheFlagGAS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Components_CTFPlayerComponent_h__Script_CaptureTheFlagGAS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
