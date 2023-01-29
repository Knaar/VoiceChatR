// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealTimeImportAsyncNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealTimeImportAsyncNodeCreateSoundWaveFromBytes;
class URealTimeImportAsyncNodeCreateSoundWaveFromFile;
class URealTimeImportAsyncNodeLoadAllFilesFromDirectory;
class URealTimeImportAsyncNodeLoadFile;
class URealTimeImportAsyncNodeLoadImageBytes;
class URealTimeImportAsyncNodeLoadImageFile;
class URealTimeImportAsyncNodeLoadMesh;
class URealTimeImportAsyncNodeSaveFile;
class USoundWaveProcedural;
class UTexture2D;
enum class ERTICoordinateSystem : uint8;
enum class ERTIDirectoryType : uint8;
enum class ERTIFileType : uint8;
enum class ERTIMeshType : uint8;
enum class ERTISoundFileType : uint8;
struct FRTIModelStruct;
#ifdef REALTIMEIMPORT_RealTimeImportAsyncNodes_generated_h
#error "RealTimeImportAsyncNodes.generated.h already included, missing '#pragma once' in RealTimeImportAsyncNodes.h"
#endif
#define REALTIMEIMPORT_RealTimeImportAsyncNodes_generated_h

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_19_DELEGATE \
struct RealTimeImportAsyncNodeLoadMesh_eventLoadMeshCompleteDelegate_Parms \
{ \
	TArray<FRTIModelStruct> modelStructs; \
	FString errorMessage; \
}; \
static inline void FLoadMeshCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadMeshCompleteDelegate, TArray<FRTIModelStruct> const& modelStructs, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeLoadMesh_eventLoadMeshCompleteDelegate_Parms Parms; \
	Parms.modelStructs=modelStructs; \
	Parms.errorMessage=errorMessage; \
	LoadMeshCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadMeshFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadMeshFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadMesh(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadMesh, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadMesh)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadMesh(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadMesh, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadMesh)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadMesh(URealTimeImportAsyncNodeLoadMesh&&); \
	NO_API URealTimeImportAsyncNodeLoadMesh(const URealTimeImportAsyncNodeLoadMesh&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeLoadMesh();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadMesh(URealTimeImportAsyncNodeLoadMesh&&); \
	NO_API URealTimeImportAsyncNodeLoadMesh(const URealTimeImportAsyncNodeLoadMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadMesh) \
	NO_API virtual ~URealTimeImportAsyncNodeLoadMesh();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_12_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeLoadMesh>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_62_DELEGATE \
struct RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms \
{ \
	FString fileName; \
	TArray<uint8> bytes; \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FLoadFileCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadFileCompleteDelegate, const FString& fileName, TArray<uint8> const& bytes, const int32 errorCode, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms Parms; \
	Parms.fileName=fileName; \
	Parms.bytes=bytes; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	LoadFileCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadFile(URealTimeImportAsyncNodeLoadFile&&); \
	NO_API URealTimeImportAsyncNodeLoadFile(const URealTimeImportAsyncNodeLoadFile&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeLoadFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadFile(URealTimeImportAsyncNodeLoadFile&&); \
	NO_API URealTimeImportAsyncNodeLoadFile(const URealTimeImportAsyncNodeLoadFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadFile) \
	NO_API virtual ~URealTimeImportAsyncNodeLoadFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_55_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeLoadFile>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_94_DELEGATE \
struct RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms \
{ \
	FString fileName; \
	FString fullPath; \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FSaveFileCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& SaveFileCompleteDelegate, const FString& fileName, const FString& fullPath, const int32 errorCode, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms Parms; \
	Parms.fileName=fileName; \
	Parms.fullPath=fullPath; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	SaveFileCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeSaveFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeSaveFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeSaveFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeSaveFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeSaveFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeSaveFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeSaveFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeSaveFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeSaveFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeSaveFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeSaveFile(URealTimeImportAsyncNodeSaveFile&&); \
	NO_API URealTimeImportAsyncNodeSaveFile(const URealTimeImportAsyncNodeSaveFile&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeSaveFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeSaveFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeSaveFile(URealTimeImportAsyncNodeSaveFile&&); \
	NO_API URealTimeImportAsyncNodeSaveFile(const URealTimeImportAsyncNodeSaveFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeSaveFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeSaveFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeSaveFile) \
	NO_API virtual ~URealTimeImportAsyncNodeSaveFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_87_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeSaveFile>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_126_DELEGATE \
struct RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms \
{ \
	int32 count; \
	TArray<FString> files; \
	TArray<FString> filePaths; \
}; \
static inline void FLoadAllFilesFromDirectoryCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadAllFilesFromDirectoryCompleteDelegate, int32 const& count, TArray<FString> const& files, TArray<FString> const& filePaths) \
{ \
	RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms Parms; \
	Parms.count=count; \
	Parms.files=files; \
	Parms.filePaths=filePaths; \
	LoadAllFilesFromDirectoryCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadAllFilesFromDirectoryAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadAllFilesFromDirectory(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadAllFilesFromDirectory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadAllFilesFromDirectory)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadAllFilesFromDirectory(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadAllFilesFromDirectory, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadAllFilesFromDirectory)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadAllFilesFromDirectory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadAllFilesFromDirectory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadAllFilesFromDirectory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory(URealTimeImportAsyncNodeLoadAllFilesFromDirectory&&); \
	NO_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory(const URealTimeImportAsyncNodeLoadAllFilesFromDirectory&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeLoadAllFilesFromDirectory();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory(URealTimeImportAsyncNodeLoadAllFilesFromDirectory&&); \
	NO_API URealTimeImportAsyncNodeLoadAllFilesFromDirectory(const URealTimeImportAsyncNodeLoadAllFilesFromDirectory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadAllFilesFromDirectory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadAllFilesFromDirectory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadAllFilesFromDirectory) \
	NO_API virtual ~URealTimeImportAsyncNodeLoadAllFilesFromDirectory();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_119_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeLoadAllFilesFromDirectory>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_159_DELEGATE \
struct RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms \
{ \
	FString fileID; \
	const USoundWaveProcedural* soundWave; \
	FString fileName; \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FCreateSoundWaveFromFileCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSoundWaveFromFileCompleteDelegate, const FString& fileID, const USoundWaveProcedural* soundWave, const FString& fileName, const int32 errorCode, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms Parms; \
	Parms.fileID=fileID; \
	Parms.soundWave=soundWave; \
	Parms.fileName=fileName; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	CreateSoundWaveFromFileCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSoundWaveFromFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeCreateSoundWaveFromFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeCreateSoundWaveFromFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeCreateSoundWaveFromFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeCreateSoundWaveFromFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeCreateSoundWaveFromFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeCreateSoundWaveFromFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeCreateSoundWaveFromFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeCreateSoundWaveFromFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeCreateSoundWaveFromFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromFile(URealTimeImportAsyncNodeCreateSoundWaveFromFile&&); \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromFile(const URealTimeImportAsyncNodeCreateSoundWaveFromFile&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeCreateSoundWaveFromFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromFile(URealTimeImportAsyncNodeCreateSoundWaveFromFile&&); \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromFile(const URealTimeImportAsyncNodeCreateSoundWaveFromFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeCreateSoundWaveFromFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeCreateSoundWaveFromFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeCreateSoundWaveFromFile) \
	NO_API virtual ~URealTimeImportAsyncNodeCreateSoundWaveFromFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_151_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeCreateSoundWaveFromFile>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_199_DELEGATE \
struct RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms \
{ \
	const USoundWaveProcedural* soundWave; \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FCreateSoundWaveFromBytesCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateSoundWaveFromBytesCompleteDelegate, const USoundWaveProcedural* soundWave, const int32 errorCode, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms Parms; \
	Parms.soundWave=soundWave; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	CreateSoundWaveFromBytesCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSoundWaveFromBytesAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeCreateSoundWaveFromBytes(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeCreateSoundWaveFromBytes, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeCreateSoundWaveFromBytes)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeCreateSoundWaveFromBytes(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeCreateSoundWaveFromBytes, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeCreateSoundWaveFromBytes)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeCreateSoundWaveFromBytes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeCreateSoundWaveFromBytes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeCreateSoundWaveFromBytes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes(URealTimeImportAsyncNodeCreateSoundWaveFromBytes&&); \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes(const URealTimeImportAsyncNodeCreateSoundWaveFromBytes&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeCreateSoundWaveFromBytes();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes(URealTimeImportAsyncNodeCreateSoundWaveFromBytes&&); \
	NO_API URealTimeImportAsyncNodeCreateSoundWaveFromBytes(const URealTimeImportAsyncNodeCreateSoundWaveFromBytes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeCreateSoundWaveFromBytes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeCreateSoundWaveFromBytes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeCreateSoundWaveFromBytes) \
	NO_API virtual ~URealTimeImportAsyncNodeCreateSoundWaveFromBytes();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_192_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeCreateSoundWaveFromBytes>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_239_DELEGATE \
struct RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms \
{ \
	const UTexture2D* texture; \
	FString fileName; \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FLoadImageFromFileCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadImageFromFileCompleteDelegate, const UTexture2D* texture, const FString& fileName, const int32 errorCode, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms Parms; \
	Parms.texture=texture; \
	Parms.fileName=fileName; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	LoadImageFromFileCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadImageFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadImageFileAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadImageFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadImageFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadImageFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadImageFile(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadImageFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadImageFile)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadImageFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadImageFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadImageFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadImageFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadImageFile(URealTimeImportAsyncNodeLoadImageFile&&); \
	NO_API URealTimeImportAsyncNodeLoadImageFile(const URealTimeImportAsyncNodeLoadImageFile&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeLoadImageFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadImageFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadImageFile(URealTimeImportAsyncNodeLoadImageFile&&); \
	NO_API URealTimeImportAsyncNodeLoadImageFile(const URealTimeImportAsyncNodeLoadImageFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadImageFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadImageFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadImageFile) \
	NO_API virtual ~URealTimeImportAsyncNodeLoadImageFile();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_232_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_235_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeLoadImageFile>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_277_DELEGATE \
struct RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms \
{ \
	const UTexture2D* texture; \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FLoadImageFromBytesCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadImageFromBytesCompleteDelegate, const UTexture2D* texture, const int32 errorCode, const FString& errorMessage) \
{ \
	RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms Parms; \
	Parms.texture=texture; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	LoadImageFromBytesCompleteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_SPARSE_DATA
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadImageBytesAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadImageBytesAsyncNode);


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_ACCESSORS
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadImageBytes(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadImageBytes, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadImageBytes)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportAsyncNodeLoadImageBytes(); \
	friend struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportAsyncNodeLoadImageBytes, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportAsyncNodeLoadImageBytes)


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadImageBytes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadImageBytes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadImageBytes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadImageBytes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadImageBytes(URealTimeImportAsyncNodeLoadImageBytes&&); \
	NO_API URealTimeImportAsyncNodeLoadImageBytes(const URealTimeImportAsyncNodeLoadImageBytes&); \
public: \
	NO_API virtual ~URealTimeImportAsyncNodeLoadImageBytes();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportAsyncNodeLoadImageBytes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportAsyncNodeLoadImageBytes(URealTimeImportAsyncNodeLoadImageBytes&&); \
	NO_API URealTimeImportAsyncNodeLoadImageBytes(const URealTimeImportAsyncNodeLoadImageBytes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportAsyncNodeLoadImageBytes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportAsyncNodeLoadImageBytes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportAsyncNodeLoadImageBytes) \
	NO_API virtual ~URealTimeImportAsyncNodeLoadImageBytes();


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_270_PROLOG
#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_RPC_WRAPPERS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_INCLASS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_SPARSE_DATA \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_ACCESSORS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_INCLASS_NO_PURE_DECLS \
	FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportAsyncNodeLoadImageBytes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
