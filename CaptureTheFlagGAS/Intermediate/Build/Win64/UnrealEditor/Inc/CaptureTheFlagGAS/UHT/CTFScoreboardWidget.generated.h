// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CTFScoreboardWidget.h"

#ifdef CAPTURETHEFLAGGAS_CTFScoreboardWidget_generated_h
#error "CTFScoreboardWidget.generated.h already included, missing '#pragma once' in CTFScoreboardWidget.h"
#endif
#define CAPTURETHEFLAGGAS_CTFScoreboardWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACTFPlayerState;
enum class ETeam : uint8;

// ********** Begin Class UCTFScoreboardWidget *****************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleFlagCaptured); \
	DECLARE_FUNCTION(execHandleScoreChanged); \
	DECLARE_FUNCTION(execUpdateScoreboard);


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_CALLBACK_WRAPPERS
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFScoreboardWidget_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCTFScoreboardWidget(); \
	friend struct Z_Construct_UClass_UCTFScoreboardWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFScoreboardWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCTFScoreboardWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_UCTFScoreboardWidget_NoRegister) \
	DECLARE_SERIALIZER(UCTFScoreboardWidget)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCTFScoreboardWidget(UCTFScoreboardWidget&&) = delete; \
	UCTFScoreboardWidget(const UCTFScoreboardWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCTFScoreboardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCTFScoreboardWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCTFScoreboardWidget) \
	NO_API virtual ~UCTFScoreboardWidget();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_15_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_CALLBACK_WRAPPERS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCTFScoreboardWidget;

// ********** End Class UCTFScoreboardWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_UI_CTFScoreboardWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
