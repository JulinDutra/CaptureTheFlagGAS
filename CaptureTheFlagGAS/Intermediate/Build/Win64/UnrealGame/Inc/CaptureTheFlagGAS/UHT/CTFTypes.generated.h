// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CTFTypes.h"

#ifdef CAPTURETHEFLAGGAS_CTFTypes_generated_h
#error "CTFTypes.generated.h already included, missing '#pragma once' in CTFTypes.h"
#endif
#define CAPTURETHEFLAGGAS_CTFTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTeamInfo *********************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTeamInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FTeamInfo;
// ********** End ScriptStruct FTeamInfo ***********************************************************

// ********** Begin ScriptStruct FPlayerStats ******************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStats_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPlayerStats;
// ********** End ScriptStruct FPlayerStats ********************************************************

// ********** Begin ScriptStruct FGameConfig *******************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGameConfig;
// ********** End ScriptStruct FGameConfig *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Core_CTFTypes_h

// ********** Begin Enum ETeam *********************************************************************
#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::None) \
	op(ETeam::Red) \
	op(ETeam::Blue) \
	op(ETeam::Spectator) 

enum class ETeam : uint8;
template<> struct TIsUEnumClass<ETeam> { enum { Value = true }; };
template<> CAPTURETHEFLAGGAS_API UEnum* StaticEnum<ETeam>();
// ********** End Enum ETeam ***********************************************************************

// ********** Begin Enum EGamePhase ****************************************************************
#define FOREACH_ENUM_EGAMEPHASE(op) \
	op(EGamePhase::WaitingToStart) \
	op(EGamePhase::InProgress) \
	op(EGamePhase::PostMatch) \
	op(EGamePhase::Aborted) 

enum class EGamePhase : uint8;
template<> struct TIsUEnumClass<EGamePhase> { enum { Value = true }; };
template<> CAPTURETHEFLAGGAS_API UEnum* StaticEnum<EGamePhase>();
// ********** End Enum EGamePhase ******************************************************************

// ********** Begin Enum EFlagState ****************************************************************
#define FOREACH_ENUM_EFLAGSTATE(op) \
	op(EFlagState::AtBase) \
	op(EFlagState::Carried) \
	op(EFlagState::Dropped) 

enum class EFlagState : uint8;
template<> struct TIsUEnumClass<EFlagState> { enum { Value = true }; };
template<> CAPTURETHEFLAGGAS_API UEnum* StaticEnum<EFlagState>();
// ********** End Enum EFlagState ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
