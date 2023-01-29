// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealTimeImportBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URealTimeImportBPLibrary;
class USoundWaveProcedural;
class UTexture2D;
class UTextureRenderTarget2D;
enum class ERTICoordinateSystem : uint8;
enum class ERTIDirectoryType : uint8;
enum class ERTIExportImageType : uint8;
enum class ERTIFileType : uint8;
enum class ERTIMeshType : uint8;
enum class ERTISoundFileType : uint8;
enum class ERTITextureType : uint8;
struct FColor;
struct FLinearColor;
struct FRTIMaterialStruct;
struct FRTIMeshStruct;
struct FRTIModelStruct;
struct FRTITextureStruct;
#ifdef REALTIMEIMPORT_RealTimeImportBPLibrary_generated_h
#error "RealTimeImportBPLibrary.generated.h already included, missing '#pragma once' in RealTimeImportBPLibrary.h"
#endif
#define REALTIMEIMPORT_RealTimeImportBPLibrary_generated_h

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_18_DELEGATE \
struct RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString eventID; \
	TArray<uint8> bytes; \
	FString fileName; \
	FString errorMessage; \
}; \
static inline void FLoadFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadFileEventDelegate, int32 errorCode, const FString& eventID, TArray<uint8> const& bytes, const FString& fileName, const FString& errorMessage) \
{ \
	RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.eventID=eventID; \
	Parms.bytes=bytes; \
	Parms.fileName=fileName; \
	Parms.errorMessage=errorMessage; \
	LoadFileEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_24_DELEGATE \
struct RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString eventID; \
	FString fileName; \
	FString fullPath; \
	FString errorMessage; \
}; \
static inline void FSaveFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& SaveFileEventDelegate, int32 errorCode, const FString& eventID, const FString& fileName, const FString& fullPath, const FString& errorMessage) \
{ \
	RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.eventID=eventID; \
	Parms.fileName=fileName; \
	Parms.fullPath=fullPath; \
	Parms.errorMessage=errorMessage; \
	SaveFileEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_30_DELEGATE \
struct RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms \
{ \
	FString eventID; \
	int32 count; \
	TArray<FString> files; \
	TArray<FString> filePaths; \
}; \
static inline void FLoadAllFilesFromDirectoryEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadAllFilesFromDirectoryEventDelegate, const FString& eventID, int32 count, TArray<FString> const& files, TArray<FString> const& filePaths) \
{ \
	RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms Parms; \
	Parms.eventID=eventID; \
	Parms.count=count; \
	Parms.files=files; \
	Parms.filePaths=filePaths; \
	LoadAllFilesFromDirectoryEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_39_DELEGATE \
struct RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString eventID; \
	USoundWaveProcedural* Sound; \
	FString fileName; \
	FString errorMessage; \
}; \
static inline void FCreateSoundWaveFromFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSoundWaveFromFileEventDelegate, int32 errorCode, const FString& eventID, USoundWaveProcedural* Sound, const FString& fileName, const FString& errorMessage) \
{ \
	RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.eventID=eventID; \
	Parms.Sound=Sound; \
	Parms.fileName=fileName; \
	Parms.errorMessage=errorMessage; \
	CreateSoundWaveFromFileEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_45_DELEGATE \
struct RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString eventID; \
	USoundWaveProcedural* Sound; \
	FString errorMessage; \
}; \
static inline void FCreateSoundWaveFromBytesEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSoundWaveFromBytesEventDelegate, int32 errorCode, const FString& eventID, USoundWaveProcedural* Sound, const FString& errorMessage) \
{ \
	RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.eventID=eventID; \
	Parms.Sound=Sound; \
	Parms.errorMessage=errorMessage; \
	CreateSoundWaveFromBytesEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_51_DELEGATE \
struct RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString fileID; \
	FString errorMessage; \
	float durationInSeconds; \
}; \
static inline void FPlaySoundEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlaySoundEventDelegate, int32 errorCode, const FString& fileID, const FString& errorMessage, float durationInSeconds) \
{ \
	RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.fileID=fileID; \
	Parms.errorMessage=errorMessage; \
	Parms.durationInSeconds=durationInSeconds; \
	PlaySoundEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_57_DELEGATE \
struct RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms \
{ \
	FString fileID; \
	float positionSecondsStart; \
	float positionSecondsEnd; \
	float positionPercent; \
}; \
static inline void FActiveSoundPositionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveSoundPositionEventDelegate, const FString& fileID, float positionSecondsStart, float positionSecondsEnd, float positionPercent) \
{ \
	RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms Parms; \
	Parms.fileID=fileID; \
	Parms.positionSecondsStart=positionSecondsStart; \
	Parms.positionSecondsEnd=positionSecondsEnd; \
	Parms.positionPercent=positionPercent; \
	ActiveSoundPositionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_63_DELEGATE \
struct RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms \
{ \
	float averageEnvelopeValue; \
	float maxEnvelope; \
	int32 numWaveInstances; \
}; \
static inline void FActiveSoundEnvelopeValueEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActiveSoundEnvelopeValueEventDelegate, float averageEnvelopeValue, float maxEnvelope, int32 numWaveInstances) \
{ \
	RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms Parms; \
	Parms.averageEnvelopeValue=averageEnvelopeValue; \
	Parms.maxEnvelope=maxEnvelope; \
	Parms.numWaveInstances=numWaveInstances; \
	ActiveSoundEnvelopeValueEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_70_DELEGATE \
struct RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms \
{ \
	FString fileID; \
}; \
static inline void FStopSoundEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& StopSoundEventDelegate, const FString& fileID) \
{ \
	RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms Parms; \
	Parms.fileID=fileID; \
	StopSoundEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_77_DELEGATE \
struct RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString eventID; \
	UTexture2D* texture; \
	FString fileName; \
	FString errorMessage; \
}; \
static inline void FLoadImageFileEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadImageFileEventDelegate, int32 errorCode, const FString& eventID, UTexture2D* texture, const FString& fileName, const FString& errorMessage) \
{ \
	RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.eventID=eventID; \
	Parms.texture=texture; \
	Parms.fileName=fileName; \
	Parms.errorMessage=errorMessage; \
	LoadImageFileEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_83_DELEGATE \
struct RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms \
{ \
	int32 errorCode; \
	FString eventID; \
	UTexture2D* texture; \
	FString errorMessage; \
}; \
static inline void FLoadImageBytesEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadImageBytesEventDelegate, int32 errorCode, const FString& eventID, UTexture2D* texture, const FString& errorMessage) \
{ \
	RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.eventID=eventID; \
	Parms.texture=texture; \
	Parms.errorMessage=errorMessage; \
	LoadImageBytesEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbreakTextureStruct); \
	DECLARE_FUNCTION(execbreakMaterialStruct); \
	DECLARE_FUNCTION(execbreakMeshStruct); \
	DECLARE_FUNCTION(execbreakModelStruct); \
	DECLARE_FUNCTION(execLoadMeshFile); \
	DECLARE_FUNCTION(exectexture2dToByteArray); \
	DECLARE_FUNCTION(exectextureRenderTarget2D_ToByteArray); \
	DECLARE_FUNCTION(execemptyTextureCacheAndDestroyTextures); \
	DECLARE_FUNCTION(execremoveTextureFromCacheAndDestroyTexture); \
	DECLARE_FUNCTION(execLoadImageBytesAsync); \
	DECLARE_FUNCTION(execLoadImageBytes); \
	DECLARE_FUNCTION(execLoadImageFileAsync); \
	DECLARE_FUNCTION(execLoadImageFile); \
	DECLARE_FUNCTION(execgetSoundInfo); \
	DECLARE_FUNCTION(execisSoundActive); \
	DECLARE_FUNCTION(execchangeVolumeSound); \
	DECLARE_FUNCTION(execstopAllSounds); \
	DECLARE_FUNCTION(execstopSound); \
	DECLARE_FUNCTION(execresumeSound); \
	DECLARE_FUNCTION(execpauseSound); \
	DECLARE_FUNCTION(execseekWavFileStream); \
	DECLARE_FUNCTION(execstreamWavFile); \
	DECLARE_FUNCTION(execloadAndPlaySoundBytesAsync); \
	DECLARE_FUNCTION(execloadAndPlaySoundFileAsync); \
	DECLARE_FUNCTION(execemptySoundCache); \
	DECLARE_FUNCTION(execremoveSoundFromCache); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytes); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFile); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryAsync); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectory); \
	DECLARE_FUNCTION(execSaveFileAsync); \
	DECLARE_FUNCTION(execSaveFile); \
	DECLARE_FUNCTION(execLoadFileAsync); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execgetRealTimeImportTarget); \
	DECLARE_FUNCTION(execLoadImageBytesEventDelegate); \
	DECLARE_FUNCTION(execLoadImageFileEventDelegate); \
	DECLARE_FUNCTION(execStopSoundEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundEnvelopeValueEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundPositionEventDelegate); \
	DECLARE_FUNCTION(execPlaySoundEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileEventDelegate); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryEventDelegate); \
	DECLARE_FUNCTION(execSaveFileEventDelegate); \
	DECLARE_FUNCTION(execLoadFileEventDelegate);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbreakTextureStruct); \
	DECLARE_FUNCTION(execbreakMaterialStruct); \
	DECLARE_FUNCTION(execbreakMeshStruct); \
	DECLARE_FUNCTION(execbreakModelStruct); \
	DECLARE_FUNCTION(execLoadMeshFile); \
	DECLARE_FUNCTION(exectexture2dToByteArray); \
	DECLARE_FUNCTION(exectextureRenderTarget2D_ToByteArray); \
	DECLARE_FUNCTION(execemptyTextureCacheAndDestroyTextures); \
	DECLARE_FUNCTION(execremoveTextureFromCacheAndDestroyTexture); \
	DECLARE_FUNCTION(execLoadImageBytesAsync); \
	DECLARE_FUNCTION(execLoadImageBytes); \
	DECLARE_FUNCTION(execLoadImageFileAsync); \
	DECLARE_FUNCTION(execLoadImageFile); \
	DECLARE_FUNCTION(execgetSoundInfo); \
	DECLARE_FUNCTION(execisSoundActive); \
	DECLARE_FUNCTION(execchangeVolumeSound); \
	DECLARE_FUNCTION(execstopAllSounds); \
	DECLARE_FUNCTION(execstopSound); \
	DECLARE_FUNCTION(execresumeSound); \
	DECLARE_FUNCTION(execpauseSound); \
	DECLARE_FUNCTION(execseekWavFileStream); \
	DECLARE_FUNCTION(execstreamWavFile); \
	DECLARE_FUNCTION(execloadAndPlaySoundBytesAsync); \
	DECLARE_FUNCTION(execloadAndPlaySoundFileAsync); \
	DECLARE_FUNCTION(execemptySoundCache); \
	DECLARE_FUNCTION(execremoveSoundFromCache); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytes); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileAsync); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFile); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryAsync); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectory); \
	DECLARE_FUNCTION(execSaveFileAsync); \
	DECLARE_FUNCTION(execSaveFile); \
	DECLARE_FUNCTION(execLoadFileAsync); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execgetRealTimeImportTarget); \
	DECLARE_FUNCTION(execLoadImageBytesEventDelegate); \
	DECLARE_FUNCTION(execLoadImageFileEventDelegate); \
	DECLARE_FUNCTION(execStopSoundEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundEnvelopeValueEventDelegate); \
	DECLARE_FUNCTION(execActiveSoundPositionEventDelegate); \
	DECLARE_FUNCTION(execPlaySoundEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesEventDelegate); \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileEventDelegate); \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryEventDelegate); \
	DECLARE_FUNCTION(execSaveFileEventDelegate); \
	DECLARE_FUNCTION(execLoadFileEventDelegate);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportBPLibrary(); \
	friend struct Z_Construct_UClass_URealTimeImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportBPLibrary)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportBPLibrary(); \
	friend struct Z_Construct_UClass_URealTimeImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportBPLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportBPLibrary)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportBPLibrary(URealTimeImportBPLibrary&&); \
	NO_API URealTimeImportBPLibrary(const URealTimeImportBPLibrary&); \
public: \
	NO_API virtual ~URealTimeImportBPLibrary();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportBPLibrary(URealTimeImportBPLibrary&&); \
	NO_API URealTimeImportBPLibrary(const URealTimeImportBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportBPLibrary) \
	NO_API virtual ~URealTimeImportBPLibrary();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_9_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RealTimeImportBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
