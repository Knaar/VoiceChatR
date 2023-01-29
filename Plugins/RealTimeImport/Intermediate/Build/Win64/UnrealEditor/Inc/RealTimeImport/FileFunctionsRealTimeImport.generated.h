// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERTIDirectoryType : uint8;
struct FDateTime;
class UFileFunctionsRealTimeImport;
#ifdef REALTIMEIMPORT_FileFunctionsRealTimeImport_generated_h
#error "FileFunctionsRealTimeImport.generated.h already included, missing '#pragma once' in FileFunctionsRealTimeImport.h"
#endif
#define REALTIMEIMPORT_FileFunctionsRealTimeImport_generated_h

#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_SPARSE_DATA
#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execcreateDirectory); \
	DECLARE_FUNCTION(execgetFilenameOnDisk); \
	DECLARE_FUNCTION(execgetAccessTimeStamp); \
	DECLARE_FUNCTION(execsetTimeStamp); \
	DECLARE_FUNCTION(execgetTimeStamp); \
	DECLARE_FUNCTION(execsetReadOnly); \
	DECLARE_FUNCTION(execmoveFile); \
	DECLARE_FUNCTION(execisReadOnly); \
	DECLARE_FUNCTION(execdeleteDirectory); \
	DECLARE_FUNCTION(execdeleteFile); \
	DECLARE_FUNCTION(execfileSize); \
	DECLARE_FUNCTION(execdirectoryExists); \
	DECLARE_FUNCTION(execfileExists); \
	DECLARE_FUNCTION(execfileToBase64String); \
	DECLARE_FUNCTION(execbase64StringToBytes); \
	DECLARE_FUNCTION(execbytesToBase64String); \
	DECLARE_FUNCTION(execgetMD5FromFile); \
	DECLARE_FUNCTION(execwriteStringToFile); \
	DECLARE_FUNCTION(execreadStringFromFile); \
	DECLARE_FUNCTION(execreadBytesFromFile); \
	DECLARE_FUNCTION(execaddBytesToFile); \
	DECLARE_FUNCTION(execwriteBytesToFile); \
	DECLARE_FUNCTION(execgetFileFunctionsRealTimeImport);


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBase64Decode); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execcreateDirectory); \
	DECLARE_FUNCTION(execgetFilenameOnDisk); \
	DECLARE_FUNCTION(execgetAccessTimeStamp); \
	DECLARE_FUNCTION(execsetTimeStamp); \
	DECLARE_FUNCTION(execgetTimeStamp); \
	DECLARE_FUNCTION(execsetReadOnly); \
	DECLARE_FUNCTION(execmoveFile); \
	DECLARE_FUNCTION(execisReadOnly); \
	DECLARE_FUNCTION(execdeleteDirectory); \
	DECLARE_FUNCTION(execdeleteFile); \
	DECLARE_FUNCTION(execfileSize); \
	DECLARE_FUNCTION(execdirectoryExists); \
	DECLARE_FUNCTION(execfileExists); \
	DECLARE_FUNCTION(execfileToBase64String); \
	DECLARE_FUNCTION(execbase64StringToBytes); \
	DECLARE_FUNCTION(execbytesToBase64String); \
	DECLARE_FUNCTION(execgetMD5FromFile); \
	DECLARE_FUNCTION(execwriteStringToFile); \
	DECLARE_FUNCTION(execreadStringFromFile); \
	DECLARE_FUNCTION(execreadBytesFromFile); \
	DECLARE_FUNCTION(execaddBytesToFile); \
	DECLARE_FUNCTION(execwriteBytesToFile); \
	DECLARE_FUNCTION(execgetFileFunctionsRealTimeImport);


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileFunctionsRealTimeImport(); \
	friend struct Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics; \
public: \
	DECLARE_CLASS(UFileFunctionsRealTimeImport, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(UFileFunctionsRealTimeImport)


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFileFunctionsRealTimeImport(); \
	friend struct Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics; \
public: \
	DECLARE_CLASS(UFileFunctionsRealTimeImport, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(UFileFunctionsRealTimeImport)


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileFunctionsRealTimeImport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileFunctionsRealTimeImport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileFunctionsRealTimeImport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileFunctionsRealTimeImport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileFunctionsRealTimeImport(UFileFunctionsRealTimeImport&&); \
	NO_API UFileFunctionsRealTimeImport(const UFileFunctionsRealTimeImport&); \
public:


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileFunctionsRealTimeImport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileFunctionsRealTimeImport(UFileFunctionsRealTimeImport&&); \
	NO_API UFileFunctionsRealTimeImport(const UFileFunctionsRealTimeImport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileFunctionsRealTimeImport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileFunctionsRealTimeImport); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileFunctionsRealTimeImport)


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_12_PROLOG
#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_SPARSE_DATA \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_RPC_WRAPPERS \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_INCLASS \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_SPARSE_DATA \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FileFunctionsRealTimeImport."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class UFileFunctionsRealTimeImport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
