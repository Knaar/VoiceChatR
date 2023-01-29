// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportBPLibrary() {}
// Cross Module References
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportBPLibrary();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIMaterialStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTITextureStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIMeshStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIModelStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTITextureType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTISoundFileType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIFileType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIMeshType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIExportImageType();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			TArray<uint8> bytes;
			FString fileName;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n//Files\n" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Delegates\nFiles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadFileEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			FString fileName;
			FString fullPath;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fullPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_fullPath = { "fullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, fullPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_fullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "SaveFileEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms
		{
			FString eventID;
			int32 count;
			TArray<FString> files;
			TArray<FString> filePaths;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FStrPropertyParams NewProp_files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_filePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths_Inner = { "filePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths = { "filePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, filePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::NewProp_filePaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadAllFilesFromDirectoryEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			USoundWaveProcedural* Sound;
			FString fileName;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, Sound), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//WAV\n" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "WAV" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromFileEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			USoundWaveProcedural* Sound;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, Sound), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromBytesEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms
		{
			int32 errorCode;
			FString fileID;
			FString errorMessage;
			float durationInSeconds;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_durationInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_durationInSeconds = { "durationInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, durationInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::NewProp_durationInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "PlaySoundEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms
		{
			FString fileID;
			float positionSecondsStart;
			float positionSecondsEnd;
			float positionPercent;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionSecondsStart;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionSecondsEnd;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_positionSecondsStart = { "positionSecondsStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, positionSecondsStart), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_positionSecondsEnd = { "positionSecondsEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, positionSecondsEnd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_positionPercent = { "positionPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, positionPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_positionSecondsStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_positionSecondsEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::NewProp_positionPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "ActiveSoundPositionEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms
		{
			float averageEnvelopeValue;
			float maxEnvelope;
			int32 numWaveInstances;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_averageEnvelopeValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxEnvelope;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numWaveInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::NewProp_averageEnvelopeValue = { "averageEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms, averageEnvelopeValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::NewProp_maxEnvelope = { "maxEnvelope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms, maxEnvelope), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::NewProp_numWaveInstances = { "numWaveInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms, numWaveInstances), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::NewProp_averageEnvelopeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::NewProp_maxEnvelope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::NewProp_numWaveInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "ActiveSoundEnvelopeValueEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms
		{
			FString fileID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::NewProp_fileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "StopSoundEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			UTexture2D* texture;
			FString fileName;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Images\n" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Images" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageFileEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			UTexture2D* texture;
			FString errorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageBytesEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execbreakTextureStruct)
	{
		P_GET_STRUCT(FRTITextureStruct,Z_Param_textureData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_textureName);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture);
		P_GET_ENUM_REF(ERTITextureType,Z_Param_Out_textureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::breakTextureStruct(Z_Param_textureData,Z_Param_Out_textureName,Z_Param_Out_texture,(ERTITextureType&)(Z_Param_Out_textureType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execbreakMaterialStruct)
	{
		P_GET_STRUCT(FRTIMaterialStruct,Z_Param_materialData);
		P_GET_UBOOL_REF(Z_Param_Out_hasTexture);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_materialName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_textureName);
		P_GET_TARRAY_REF(FRTITextureStruct,Z_Param_Out_textures);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ambient);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_diffuse);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_specular);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_specularExponent);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_dissolved);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_dissolvedInverted);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::breakMaterialStruct(Z_Param_materialData,Z_Param_Out_hasTexture,Z_Param_Out_materialName,Z_Param_Out_textureName,Z_Param_Out_textures,Z_Param_Out_ambient,Z_Param_Out_diffuse,Z_Param_Out_specular,Z_Param_Out_specularExponent,Z_Param_Out_dissolved,Z_Param_Out_dissolvedInverted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execbreakMeshStruct)
	{
		P_GET_STRUCT(FRTIMeshStruct,Z_Param_meshStruct);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_geometryName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_vertexColors);
		P_GET_STRUCT_REF(FRTIMaterialStruct,Z_Param_Out_materialStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::breakMeshStruct(Z_Param_meshStruct,Z_Param_Out_geometryName,Z_Param_Out_vertices,Z_Param_Out_triangles,Z_Param_Out_normals,Z_Param_Out_UV0,Z_Param_Out_vertexColors,Z_Param_Out_materialStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execbreakModelStruct)
	{
		P_GET_STRUCT(FRTIModelStruct,Z_Param_modelStruct);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_relativeTransform);
		P_GET_TARRAY_REF(FRTIMeshStruct,Z_Param_Out_meshStructs);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::breakModelStruct(Z_Param_modelStruct,Z_Param_Out_name,Z_Param_Out_relativeTransform,Z_Param_Out_meshStructs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadMeshFile)
	{
		P_GET_ENUM(ERTIMeshType,Z_Param_fileType);
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_successMessage);
		P_GET_TARRAY_REF(FRTIModelStruct,Z_Param_Out_modelStructs);
		P_GET_ENUM(ERTICoordinateSystem,Z_Param_coordinateSystem);
		P_GET_UBOOL(Z_Param_autoDetectionNormalMap);
		P_GET_UBOOL(Z_Param_useSRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::LoadMeshFile(ERTIMeshType(Z_Param_fileType),ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_successMessage,Z_Param_Out_modelStructs,ERTICoordinateSystem(Z_Param_coordinateSystem),Z_Param_autoDetectionNormalMap,Z_Param_useSRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::exectexture2dToByteArray)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture2D);
		P_GET_ENUM(ERTIExportImageType,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=URealTimeImportBPLibrary::texture2dToByteArray(Z_Param_texture2D,ERTIExportImageType(Z_Param_type),Z_Param_quality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::exectextureRenderTarget2D_ToByteArray)
	{
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_textureRenderTarget2D);
		P_GET_ENUM(ERTIExportImageType,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=URealTimeImportBPLibrary::textureRenderTarget2D_ToByteArray(Z_Param_Out_success,Z_Param_Out_errorMessage,Z_Param_textureRenderTarget2D,ERTIExportImageType(Z_Param_type),Z_Param_quality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execemptyTextureCacheAndDestroyTextures)
	{
		P_GET_UBOOL(Z_Param_emptyTexturesBeforeDeleting);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::emptyTextureCacheAndDestroyTextures(Z_Param_emptyTexturesBeforeDeleting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execremoveTextureFromCacheAndDestroyTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_GET_UBOOL(Z_Param_emptyTextureBeforeDeleting);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::removeTextureFromCacheAndDestroyTexture(Z_Param_texture,Z_Param_emptyTextureBeforeDeleting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadImageBytesAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_PROPERTY(FByteProperty,Z_Param_compressionSettings);
		P_GET_UBOOL(Z_Param_SRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=URealTimeImportBPLibrary::LoadImageBytesAsync(Z_Param_name,Z_Param_bytes,Z_Param_eventID,TextureCompressionSettings(Z_Param_compressionSettings),Z_Param_SRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadImageBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_errorCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_PROPERTY(FByteProperty,Z_Param_compressionSettings);
		P_GET_UBOOL(Z_Param_SRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::LoadImageBytes(Z_Param_name,Z_Param_bytes,Z_Param_Out_texture,Z_Param_Out_errorCode,Z_Param_Out_errorMessage,TextureCompressionSettings(Z_Param_compressionSettings),Z_Param_SRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadImageFileAsync)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_PROPERTY(FByteProperty,Z_Param_compressionSettings);
		P_GET_UBOOL(Z_Param_SRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=URealTimeImportBPLibrary::LoadImageFileAsync(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_eventID,TextureCompressionSettings(Z_Param_compressionSettings),Z_Param_SRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadImageFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_texture);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_errorCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_PROPERTY(FByteProperty,Z_Param_compressionSettings);
		P_GET_UBOOL(Z_Param_SRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::LoadImageFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_texture,Z_Param_Out_fileName,Z_Param_Out_errorCode,Z_Param_Out_errorMessage,TextureCompressionSettings(Z_Param_compressionSettings),Z_Param_SRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execgetSoundInfo)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileNameExtension);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_fileSize);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_duration);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_numChannels);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_quality);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_sampleDataSize);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_sampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::getSoundInfo(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_name,Z_Param_Out_fileNameExtension,Z_Param_Out_fileSize,Z_Param_Out_duration,Z_Param_Out_numChannels,Z_Param_Out_quality,Z_Param_Out_sampleDataSize,Z_Param_Out_sampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execisSoundActive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URealTimeImportBPLibrary::isSoundActive(Z_Param_fileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execchangeVolumeSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_volumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::changeVolumeSound(Z_Param_fileID,Z_Param_volumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execstopAllSounds)
	{
		P_GET_UBOOL(Z_Param_removeFromCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::stopAllSounds(Z_Param_removeFromCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execstopSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_GET_UBOOL(Z_Param_removeFromCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::stopSound(Z_Param_fileID,Z_Param_removeFromCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execresumeSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::resumeSound(Z_Param_fileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execpauseSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::pauseSound(Z_Param_fileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execseekWavFileStream)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_positionInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::seekWavFileStream(Z_Param_fileID,Z_Param_positionInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execstreamWavFile)
	{
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_volumeMultiplier);
		P_GET_PROPERTY(FIntProperty,Z_Param_startTimeInSeconds);
		P_GET_UBOOL(Z_Param_persistAcrossLevelTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::streamWavFile(Z_Param_Out_success,Z_Param_Out_errorMessage,Z_Param_WorldContextObject,ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_volumeMultiplier,Z_Param_startTimeInSeconds,Z_Param_persistAcrossLevelTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execloadAndPlaySoundBytesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_volumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_startTimeInSeconds);
		P_GET_UBOOL(Z_Param_persistAcrossLevelTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::loadAndPlaySoundBytesAsync(Z_Param_WorldContextObject,Z_Param_bytes,Z_Param_volumeMultiplier,Z_Param_playSpeed,Z_Param_startTimeInSeconds,Z_Param_persistAcrossLevelTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execloadAndPlaySoundFileAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_volumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_playSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_startTimeInSeconds);
		P_GET_UBOOL(Z_Param_persistAcrossLevelTransition);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::loadAndPlaySoundFileAsync(Z_Param_WorldContextObject,ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_maxFileSize,Z_Param_volumeMultiplier,Z_Param_playSpeed,Z_Param_startTimeInSeconds,Z_Param_persistAcrossLevelTransition,ERTISoundFileType(Z_Param_soundFileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execemptySoundCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::emptySoundCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execremoveSoundFromCache)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::removeSoundFromCache(Z_Param_fileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execCreateSoundWaveFromBytesAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=URealTimeImportBPLibrary::CreateSoundWaveFromBytesAsync(Z_Param_name,Z_Param_bytes,Z_Param_maxFileSize,ERTISoundFileType(Z_Param_soundFileType),Z_Param_eventID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execCreateSoundWaveFromBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_GET_OBJECT_REF(USoundWaveProcedural,Z_Param_Out_Sound);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_errorCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::CreateSoundWaveFromBytes(Z_Param_name,Z_Param_bytes,Z_Param_maxFileSize,ERTISoundFileType(Z_Param_soundFileType),Z_Param_Out_Sound,Z_Param_Out_errorCode,Z_Param_Out_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execCreateSoundWaveFromFileAsync)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=URealTimeImportBPLibrary::CreateSoundWaveFromFileAsync(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_maxFileSize,ERTISoundFileType(Z_Param_soundFileType),Z_Param_eventID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execCreateSoundWaveFromFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileID);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_GET_OBJECT_REF(USoundWaveProcedural,Z_Param_Out_soundWave);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_errorCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::CreateSoundWaveFromFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_maxFileSize,Z_Param_Out_fileID,ERTISoundFileType(Z_Param_soundFileType),Z_Param_Out_soundWave,Z_Param_Out_fileName,Z_Param_Out_errorCode,Z_Param_Out_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadAllFilesFromDirectoryAsync)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_ENUM(ERTIFileType,Z_Param_fileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_dirPath);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=P_THIS->LoadAllFilesFromDirectoryAsync(ERTIDirectoryType(Z_Param_directoryType),ERTIFileType(Z_Param_fileType),Z_Param_dirPath,Z_Param_recursiveSearch,Z_Param_eventID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadAllFilesFromDirectory)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_ENUM(ERTIFileType,Z_Param_fileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_dirPath);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_count);
		P_GET_TARRAY_REF(FString,Z_Param_Out_files);
		P_GET_TARRAY_REF(FString,Z_Param_Out_filePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URealTimeImportBPLibrary::LoadAllFilesFromDirectory(ERTIDirectoryType(Z_Param_directoryType),ERTIFileType(Z_Param_fileType),Z_Param_dirPath,Z_Param_recursiveSearch,Z_Param_Out_count,Z_Param_Out_files,Z_Param_Out_filePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execSaveFileAsync)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL(Z_Param_createDirectories);
		P_GET_UBOOL(Z_Param_overwriteFile);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=P_THIS->SaveFileAsync(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_createDirectories,Z_Param_overwriteFile,Z_Param_bytes,Z_Param_eventID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execSaveFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL(Z_Param_createDirectories);
		P_GET_UBOOL(Z_Param_overwriteFile);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fullPath);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_errorCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::SaveFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_createDirectories,Z_Param_overwriteFile,Z_Param_bytes,Z_Param_Out_fileName,Z_Param_Out_fullPath,Z_Param_Out_errorCode,Z_Param_Out_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadFileAsync)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=P_THIS->LoadFileAsync(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_eventID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileName);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_bytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_errorCode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportBPLibrary::LoadFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_fileName,Z_Param_Out_bytes,Z_Param_Out_errorCode,Z_Param_Out_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execgetRealTimeImportTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportBPLibrary**)Z_Param__Result=URealTimeImportBPLibrary::getRealTimeImportTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadImageBytesEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImageBytesEventDelegate(Z_Param_errorCode,Z_Param_eventID,Z_Param_texture,Z_Param_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadImageFileEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadImageFileEventDelegate(Z_Param_errorCode,Z_Param_eventID,Z_Param_texture,Z_Param_fileName,Z_Param_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execStopSoundEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSoundEventDelegate(Z_Param_fileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execActiveSoundEnvelopeValueEventDelegate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_averageEnvelopeValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxEnvelope);
		P_GET_PROPERTY(FIntProperty,Z_Param_numWaveInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveSoundEnvelopeValueEventDelegate(Z_Param_averageEnvelopeValue,Z_Param_maxEnvelope,Z_Param_numWaveInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execActiveSoundPositionEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_positionSecondsStart);
		P_GET_PROPERTY(FFloatProperty,Z_Param_positionSecondsEnd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_positionPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveSoundPositionEventDelegate(Z_Param_fileID,Z_Param_positionSecondsStart,Z_Param_positionSecondsEnd,Z_Param_positionPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execPlaySoundEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileID);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_durationInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundEventDelegate(Z_Param_errorCode,Z_Param_fileID,Z_Param_errorMessage,Z_Param_durationInSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execCreateSoundWaveFromBytesEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_OBJECT(USoundWaveProcedural,Z_Param_Sound);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSoundWaveFromBytesEventDelegate(Z_Param_errorCode,Z_Param_eventID,Z_Param_Sound,Z_Param_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execCreateSoundWaveFromFileEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_OBJECT(USoundWaveProcedural,Z_Param_Sound);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSoundWaveFromFileEventDelegate(Z_Param_errorCode,Z_Param_eventID,Z_Param_Sound,Z_Param_fileName,Z_Param_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadAllFilesFromDirectoryEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_count);
		P_GET_TARRAY_REF(FString,Z_Param_Out_files);
		P_GET_TARRAY_REF(FString,Z_Param_Out_filePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAllFilesFromDirectoryEventDelegate(Z_Param_eventID,Z_Param_Out_count,Z_Param_Out_files,Z_Param_Out_filePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execSaveFileEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_fullPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFileEventDelegate(Z_Param_errorCode,Z_Param_eventID,Z_Param_fileName,Z_Param_fullPath,Z_Param_errorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportBPLibrary::execLoadFileEventDelegate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_errorCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_eventID);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_errorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFileEventDelegate(Z_Param_errorCode,Z_Param_eventID,Z_Param_Out_bytes,Z_Param_fileName,Z_Param_errorMessage);
		P_NATIVE_END;
	}
	void URealTimeImportBPLibrary::StaticRegisterNativesURealTimeImportBPLibrary()
	{
		UClass* Class = URealTimeImportBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveSoundEnvelopeValueEventDelegate", &URealTimeImportBPLibrary::execActiveSoundEnvelopeValueEventDelegate },
			{ "ActiveSoundPositionEventDelegate", &URealTimeImportBPLibrary::execActiveSoundPositionEventDelegate },
			{ "breakMaterialStruct", &URealTimeImportBPLibrary::execbreakMaterialStruct },
			{ "breakMeshStruct", &URealTimeImportBPLibrary::execbreakMeshStruct },
			{ "breakModelStruct", &URealTimeImportBPLibrary::execbreakModelStruct },
			{ "breakTextureStruct", &URealTimeImportBPLibrary::execbreakTextureStruct },
			{ "changeVolumeSound", &URealTimeImportBPLibrary::execchangeVolumeSound },
			{ "CreateSoundWaveFromBytes", &URealTimeImportBPLibrary::execCreateSoundWaveFromBytes },
			{ "CreateSoundWaveFromBytesAsync", &URealTimeImportBPLibrary::execCreateSoundWaveFromBytesAsync },
			{ "CreateSoundWaveFromBytesEventDelegate", &URealTimeImportBPLibrary::execCreateSoundWaveFromBytesEventDelegate },
			{ "CreateSoundWaveFromFile", &URealTimeImportBPLibrary::execCreateSoundWaveFromFile },
			{ "CreateSoundWaveFromFileAsync", &URealTimeImportBPLibrary::execCreateSoundWaveFromFileAsync },
			{ "CreateSoundWaveFromFileEventDelegate", &URealTimeImportBPLibrary::execCreateSoundWaveFromFileEventDelegate },
			{ "emptySoundCache", &URealTimeImportBPLibrary::execemptySoundCache },
			{ "emptyTextureCacheAndDestroyTextures", &URealTimeImportBPLibrary::execemptyTextureCacheAndDestroyTextures },
			{ "getRealTimeImportTarget", &URealTimeImportBPLibrary::execgetRealTimeImportTarget },
			{ "getSoundInfo", &URealTimeImportBPLibrary::execgetSoundInfo },
			{ "isSoundActive", &URealTimeImportBPLibrary::execisSoundActive },
			{ "LoadAllFilesFromDirectory", &URealTimeImportBPLibrary::execLoadAllFilesFromDirectory },
			{ "LoadAllFilesFromDirectoryAsync", &URealTimeImportBPLibrary::execLoadAllFilesFromDirectoryAsync },
			{ "LoadAllFilesFromDirectoryEventDelegate", &URealTimeImportBPLibrary::execLoadAllFilesFromDirectoryEventDelegate },
			{ "loadAndPlaySoundBytesAsync", &URealTimeImportBPLibrary::execloadAndPlaySoundBytesAsync },
			{ "loadAndPlaySoundFileAsync", &URealTimeImportBPLibrary::execloadAndPlaySoundFileAsync },
			{ "LoadFile", &URealTimeImportBPLibrary::execLoadFile },
			{ "LoadFileAsync", &URealTimeImportBPLibrary::execLoadFileAsync },
			{ "LoadFileEventDelegate", &URealTimeImportBPLibrary::execLoadFileEventDelegate },
			{ "LoadImageBytes", &URealTimeImportBPLibrary::execLoadImageBytes },
			{ "LoadImageBytesAsync", &URealTimeImportBPLibrary::execLoadImageBytesAsync },
			{ "LoadImageBytesEventDelegate", &URealTimeImportBPLibrary::execLoadImageBytesEventDelegate },
			{ "LoadImageFile", &URealTimeImportBPLibrary::execLoadImageFile },
			{ "LoadImageFileAsync", &URealTimeImportBPLibrary::execLoadImageFileAsync },
			{ "LoadImageFileEventDelegate", &URealTimeImportBPLibrary::execLoadImageFileEventDelegate },
			{ "LoadMeshFile", &URealTimeImportBPLibrary::execLoadMeshFile },
			{ "pauseSound", &URealTimeImportBPLibrary::execpauseSound },
			{ "PlaySoundEventDelegate", &URealTimeImportBPLibrary::execPlaySoundEventDelegate },
			{ "removeSoundFromCache", &URealTimeImportBPLibrary::execremoveSoundFromCache },
			{ "removeTextureFromCacheAndDestroyTexture", &URealTimeImportBPLibrary::execremoveTextureFromCacheAndDestroyTexture },
			{ "resumeSound", &URealTimeImportBPLibrary::execresumeSound },
			{ "SaveFile", &URealTimeImportBPLibrary::execSaveFile },
			{ "SaveFileAsync", &URealTimeImportBPLibrary::execSaveFileAsync },
			{ "SaveFileEventDelegate", &URealTimeImportBPLibrary::execSaveFileEventDelegate },
			{ "seekWavFileStream", &URealTimeImportBPLibrary::execseekWavFileStream },
			{ "stopAllSounds", &URealTimeImportBPLibrary::execstopAllSounds },
			{ "stopSound", &URealTimeImportBPLibrary::execstopSound },
			{ "StopSoundEventDelegate", &URealTimeImportBPLibrary::execStopSoundEventDelegate },
			{ "streamWavFile", &URealTimeImportBPLibrary::execstreamWavFile },
			{ "texture2dToByteArray", &URealTimeImportBPLibrary::exectexture2dToByteArray },
			{ "textureRenderTarget2D_ToByteArray", &URealTimeImportBPLibrary::exectextureRenderTarget2D_ToByteArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms
		{
			float averageEnvelopeValue;
			float maxEnvelope;
			int32 numWaveInstances;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_averageEnvelopeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_averageEnvelopeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxEnvelope_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxEnvelope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numWaveInstances_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numWaveInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_averageEnvelopeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_averageEnvelopeValue = { "averageEnvelopeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms, averageEnvelopeValue), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_averageEnvelopeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_averageEnvelopeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_maxEnvelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_maxEnvelope = { "maxEnvelope", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms, maxEnvelope), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_maxEnvelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_maxEnvelope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_numWaveInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_numWaveInstances = { "numWaveInstances", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms, numWaveInstances), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_numWaveInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_numWaveInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_averageEnvelopeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_maxEnvelope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::NewProp_numWaveInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "ActiveSoundEnvelopeValueEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::RealTimeImportBPLibrary_eventActiveSoundEnvelopeValueEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms
		{
			FString fileID;
			float positionSecondsStart;
			float positionSecondsEnd;
			float positionPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionSecondsStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionSecondsStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionSecondsEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionSecondsEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_fileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, fileID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_fileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_fileID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsStart = { "positionSecondsStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, positionSecondsStart), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsEnd = { "positionSecondsEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, positionSecondsEnd), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionPercent = { "positionPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms, positionPercent), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionSecondsEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::NewProp_positionPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "ActiveSoundPositionEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::RealTimeImportBPLibrary_eventActiveSoundPositionEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics
	{
		struct RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms
		{
			FRTIMaterialStruct materialData;
			bool hasTexture;
			FString materialName;
			FString textureName;
			TArray<FRTITextureStruct> textures;
			FColor ambient;
			FColor diffuse;
			FColor specular;
			float specularExponent;
			float dissolved;
			float dissolvedInverted;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialData;
		static void NewProp_hasTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasTexture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_materialName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_textureName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_textures_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_textures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ambient;
		static const UECodeGen_Private::FStructPropertyParams NewProp_diffuse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_specular;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_specularExponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dissolved;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dissolvedInverted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_materialData = { "materialData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, materialData), Z_Construct_UScriptStruct_FRTIMaterialStruct, METADATA_PARAMS(nullptr, 0) }; // 3222276403
	void Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_hasTexture_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms*)Obj)->hasTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_hasTexture = { "hasTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_hasTexture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, materialName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_textureName = { "textureName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, textureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_textures_Inner = { "textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRTITextureStruct, METADATA_PARAMS(nullptr, 0) }; // 3599092058
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_textures = { "textures", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, textures), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3599092058
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_ambient = { "ambient", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, ambient), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_diffuse = { "diffuse", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, diffuse), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_specular = { "specular", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, specular), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_specularExponent = { "specularExponent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, specularExponent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_dissolved = { "dissolved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, dissolved), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_dissolvedInverted = { "dissolvedInverted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms, dissolvedInverted), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_materialData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_hasTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_materialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_textureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_ambient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_diffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_specularExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_dissolved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::NewProp_dissolvedInverted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Mesh" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "breakMaterialStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::RealTimeImportBPLibrary_eventbreakMaterialStruct_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics
	{
		struct RealTimeImportBPLibrary_eventbreakMeshStruct_Parms
		{
			FRTIMeshStruct meshStruct;
			FString geometryName;
			TArray<FVector> vertices;
			TArray<int32> triangles;
			TArray<FVector> normals;
			TArray<FVector2D> UV0;
			TArray<FLinearColor> vertexColors;
			FRTIMaterialStruct materialStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshStruct;
		static const UECodeGen_Private::FStrPropertyParams NewProp_geometryName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_triangles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normals_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_meshStruct = { "meshStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, meshStruct), Z_Construct_UScriptStruct_FRTIMeshStruct, METADATA_PARAMS(nullptr, 0) }; // 2261423237
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_geometryName = { "geometryName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, geometryName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_triangles_Inner = { "triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_triangles = { "triangles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_normals_Inner = { "normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_normals = { "normals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, vertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_materialStruct = { "materialStruct", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakMeshStruct_Parms, materialStruct), Z_Construct_UScriptStruct_FRTIMaterialStruct, METADATA_PARAMS(nullptr, 0) }; // 3222276403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_meshStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_geometryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_vertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::NewProp_materialStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Mesh" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "breakMeshStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::RealTimeImportBPLibrary_eventbreakMeshStruct_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics
	{
		struct RealTimeImportBPLibrary_eventbreakModelStruct_Parms
		{
			FRTIModelStruct modelStruct;
			FString name;
			FTransform relativeTransform;
			TArray<FRTIMeshStruct> meshStructs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_modelStruct;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_relativeTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshStructs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_modelStruct = { "modelStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakModelStruct_Parms, modelStruct), Z_Construct_UScriptStruct_FRTIModelStruct, METADATA_PARAMS(nullptr, 0) }; // 754723136
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakModelStruct_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_relativeTransform = { "relativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakModelStruct_Parms, relativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_meshStructs_Inner = { "meshStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRTIMeshStruct, METADATA_PARAMS(nullptr, 0) }; // 2261423237
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_meshStructs = { "meshStructs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakModelStruct_Parms, meshStructs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2261423237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_modelStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_relativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_meshStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::NewProp_meshStructs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Mesh" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "breakModelStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::RealTimeImportBPLibrary_eventbreakModelStruct_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics
	{
		struct RealTimeImportBPLibrary_eventbreakTextureStruct_Parms
		{
			FRTITextureStruct textureData;
			FString textureName;
			UTexture2D* texture;
			ERTITextureType textureType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_textureData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_textureName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_textureType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_textureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureData = { "textureData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakTextureStruct_Parms, textureData), Z_Construct_UScriptStruct_FRTITextureStruct, METADATA_PARAMS(nullptr, 0) }; // 3599092058
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureName = { "textureName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakTextureStruct_Parms, textureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakTextureStruct_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureType = { "textureType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventbreakTextureStruct_Parms, textureType), Z_Construct_UEnum_RealTimeImport_ERTITextureType, METADATA_PARAMS(nullptr, 0) }; // 2810687149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::NewProp_textureType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Mesh" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "breakTextureStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::RealTimeImportBPLibrary_eventbreakTextureStruct_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics
	{
		struct RealTimeImportBPLibrary_eventchangeVolumeSound_Parms
		{
			FString fileID;
			float volumeMultiplier;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventchangeVolumeSound_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::NewProp_volumeMultiplier = { "volumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventchangeVolumeSound_Parms, volumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::NewProp_volumeMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* The volume can be changed during playback.\n\x09*@param fileID This ID is generated when starting playback.\n\x09*@param volumeMultiplier Volume.\n\x09*/" },
		{ "CPP_Default_volumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "The volume can be changed during playback.\n@param fileID This ID is generated when starting playback.\n@param volumeMultiplier Volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "changeVolumeSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::RealTimeImportBPLibrary_eventchangeVolumeSound_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms
		{
			FString name;
			TArray<uint8> bytes;
			float maxFileSize;
			ERTISoundFileType soundFileType;
			USoundWaveProcedural* Sound;
			int32 errorCode;
			FString errorMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, Sound), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_soundFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n\x09*@param name An individual name to cache the sound better in RAM\n\x09*@param bytes Image bytes\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n@param name An individual name to cache the sound better in RAM\n@param bytes Image bytes\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromBytes_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms
		{
			FString name;
			TArray<uint8> bytes;
			float maxFileSize;
			ERTISoundFileType soundFileType;
			FString eventID;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_soundFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n\x09*@param name An individual name to cache the image better in RAM\n\x09*@param bytes Image bytes\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n@param name An individual name to cache the image better in RAM\n@param bytes Image bytes\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded\n@param eventID To identify different events, you can enter an ID here which will be output again in the matching event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromBytesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			const USoundWaveProcedural* Sound;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_eventID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, Sound), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromBytesEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromBytesEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			float maxFileSize;
			FString fileID;
			ERTISoundFileType soundFileType;
			USoundWaveProcedural* soundWave;
			FString fileName;
			int32 errorCode;
			FString errorMessage;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundWave;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_soundWave = { "soundWave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, soundWave), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_soundFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_soundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file.\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromFile_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			float maxFileSize;
			ERTISoundFileType soundFileType;
			FString eventID;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_soundFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file.\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded\n@param eventID To identify different events, you can enter an ID here which will be output again in the matching event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromFileAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			const USoundWaveProcedural* Sound;
			FString fileName;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_eventID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_Sound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, Sound), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "CreateSoundWaveFromFileEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::RealTimeImportBPLibrary_eventCreateSoundWaveFromFileEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Removes all sound files from the cache. Can only be removed when it is not playing.\n\x09*@param fileID\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Removes all sound files from the cache. Can only be removed when it is not playing.\n@param fileID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "emptySoundCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics
	{
		struct RealTimeImportBPLibrary_eventemptyTextureCacheAndDestroyTextures_Parms
		{
			bool emptyTexturesBeforeDeleting;
		};
		static void NewProp_emptyTexturesBeforeDeleting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_emptyTexturesBeforeDeleting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::NewProp_emptyTexturesBeforeDeleting_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventemptyTextureCacheAndDestroyTextures_Parms*)Obj)->emptyTexturesBeforeDeleting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::NewProp_emptyTexturesBeforeDeleting = { "emptyTexturesBeforeDeleting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventemptyTextureCacheAndDestroyTextures_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::NewProp_emptyTexturesBeforeDeleting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::NewProp_emptyTexturesBeforeDeleting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Creates Releases all textures so that the engine can delete them.\n\x09*@param emptyTexturesBeforeDeleting It may take a few seconds for Unreal to free the memory. This checkbox empties the texture. This frees most of the memory immediately. But it can lead to stability problems.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates Releases all textures so that the engine can delete them.\n@param emptyTexturesBeforeDeleting It may take a few seconds for Unreal to free the memory. This checkbox empties the texture. This frees most of the memory immediately. But it can lead to stability problems." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "emptyTextureCacheAndDestroyTextures", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::RealTimeImportBPLibrary_eventemptyTextureCacheAndDestroyTextures_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics
	{
		struct RealTimeImportBPLibrary_eventgetRealTimeImportTarget_Parms
		{
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetRealTimeImportTarget_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "getRealTimeImportTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::RealTimeImportBPLibrary_eventgetRealTimeImportTarget_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics
	{
		struct RealTimeImportBPLibrary_eventgetSoundInfo_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FString name;
			FString fileNameExtension;
			int64 fileSize;
			float duration;
			int64 numChannels;
			int32 quality;
			int64 sampleDataSize;
			int64 sampleRate;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileNameExtension;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_numChannels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_quality;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_sampleDataSize;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_sampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_fileNameExtension = { "fileNameExtension", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, fileNameExtension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, fileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_numChannels = { "numChannels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, numChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_quality = { "quality", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_sampleDataSize = { "sampleDataSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, sampleDataSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventgetSoundInfo_Parms, sampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_fileNameExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_fileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_numChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_sampleDataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::NewProp_sampleRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "getSoundInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::RealTimeImportBPLibrary_eventgetSoundInfo_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics
	{
		struct RealTimeImportBPLibrary_eventisSoundActive_Parms
		{
			FString fileID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventisSoundActive_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventisSoundActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventisSoundActive_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "isSoundActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::RealTimeImportBPLibrary_eventisSoundActive_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms
		{
			ERTIDirectoryType directoryType;
			ERTIFileType fileType;
			FString dirPath;
			bool recursiveSearch;
			int32 count;
			TArray<FString> files;
			TArray<FString> filePaths;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dirPath;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FStrPropertyParams NewProp_files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_filePaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms, fileType), Z_Construct_UEnum_RealTimeImport_ERTIFileType, METADATA_PARAMS(nullptr, 0) }; // 4129308719
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_dirPath = { "dirPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms, dirPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms*)Obj)->recursiveSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms, files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_filePaths_Inner = { "filePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_filePaths = { "filePaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms, filePaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_fileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_fileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_dirPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_recursiveSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_filePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_filePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadAllFilesFromDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::RealTimeImportBPLibrary_eventLoadAllFilesFromDirectory_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms
		{
			ERTIDirectoryType directoryType;
			ERTIFileType fileType;
			FString dirPath;
			bool recursiveSearch;
			FString eventID;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dirPath;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms, fileType), Z_Construct_UEnum_RealTimeImport_ERTIFileType, METADATA_PARAMS(nullptr, 0) }; // 4129308719
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_dirPath = { "dirPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms, dirPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms*)Obj)->recursiveSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_fileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_fileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_dirPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_recursiveSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadAllFilesFromDirectoryAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms
		{
			FString eventID;
			int32 count;
			TArray<FString> files;
			TArray<FString> filePaths;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FStrPropertyParams NewProp_files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_filePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_eventID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, count), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_count_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths_Inner = { "filePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths = { "filePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms, filePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::NewProp_filePaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadAllFilesFromDirectoryEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::RealTimeImportBPLibrary_eventLoadAllFilesFromDirectoryEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms
		{
			const UObject* WorldContextObject;
			TArray<uint8> bytes;
			float volumeMultiplier;
			float playSpeed;
			int32 startTimeInSeconds;
			bool persistAcrossLevelTransition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playSpeed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_startTimeInSeconds;
		static void NewProp_persistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_persistAcrossLevelTransition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_volumeMultiplier = { "volumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms, volumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_playSpeed = { "playSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms, playSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_startTimeInSeconds = { "startTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms, startTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_persistAcrossLevelTransition_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms*)Obj)->persistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_persistAcrossLevelTransition = { "persistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_persistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_volumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_playSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_startTimeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::NewProp_persistAcrossLevelTransition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Loads Soud bytes into RAM and plays it. Offers some functions, like changing the start time, compared to the CreateSound functions. But other functions are missing.\n\x09*@param bytes It must be the bytes of a complete Wav with header.\n\x09*@param volumeMultiplier Volume.\n\x09*@param playSpeed Playback speed\n\x09*@param startTimeInSeconds From when the Wav should be played. Specified in seconds.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*/" },
		{ "CPP_Default_persistAcrossLevelTransition", "true" },
		{ "CPP_Default_playSpeed", "1.000000" },
		{ "CPP_Default_startTimeInSeconds", "0" },
		{ "CPP_Default_volumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Loads Soud bytes into RAM and plays it. Offers some functions, like changing the start time, compared to the CreateSound functions. But other functions are missing.\n@param bytes It must be the bytes of a complete Wav with header.\n@param volumeMultiplier Volume.\n@param playSpeed Playback speed\n@param startTimeInSeconds From when the Wav should be played. Specified in seconds.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "loadAndPlaySoundBytesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::RealTimeImportBPLibrary_eventloadAndPlaySoundBytesAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms
		{
			const UObject* WorldContextObject;
			ERTIDirectoryType directoryType;
			FString filePath;
			float maxFileSize;
			float volumeMultiplier;
			float playSpeed;
			int32 startTimeInSeconds;
			bool persistAcrossLevelTransition;
			ERTISoundFileType soundFileType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playSpeed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_startTimeInSeconds;
		static void NewProp_persistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_persistAcrossLevelTransition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_volumeMultiplier = { "volumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, volumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_playSpeed = { "playSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, playSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_startTimeInSeconds = { "startTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, startTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_persistAcrossLevelTransition_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms*)Obj)->persistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_persistAcrossLevelTransition = { "persistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_persistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_volumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_playSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_startTimeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_persistAcrossLevelTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::NewProp_soundFileType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Loads a Sound file into RAM and plays it. Offers some functions, like changing the start time, compared to the CreateSound functions. But other functions are missing.\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param volumeMultiplier Volume.\n\x09*@param playSpeed Playback speed\n\x09*@param startTimeInSeconds From when the Wav should be played. Specified in seconds.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*/" },
		{ "CPP_Default_persistAcrossLevelTransition", "true" },
		{ "CPP_Default_playSpeed", "1.000000" },
		{ "CPP_Default_soundFileType", "E_wav" },
		{ "CPP_Default_startTimeInSeconds", "0" },
		{ "CPP_Default_volumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Loads a Sound file into RAM and plays it. Offers some functions, like changing the start time, compared to the CreateSound functions. But other functions are missing.\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file.\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param volumeMultiplier Volume.\n@param playSpeed Playback speed\n@param startTimeInSeconds From when the Wav should be played. Specified in seconds.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "loadAndPlaySoundFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::RealTimeImportBPLibrary_eventloadAndPlaySoundFileAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FString fileName;
			TArray<uint8> bytes;
			int32 errorCode;
			FString errorMessage;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFile_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFile_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFile_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFile_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "//For an easier readable C++ code some functions were moved to the UFileFunctionsRealTimeImport class. For compatibility reasons, however, the functions will remain accessible via the URealTimeImportBPLibrary.\n" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "For an easier readable C++ code some functions were moved to the UFileFunctionsRealTimeImport class. For compatibility reasons, however, the functions will remain accessible via the URealTimeImportBPLibrary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::RealTimeImportBPLibrary_eventLoadFile_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadFileAsync_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FString eventID;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileAsync_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileAsync_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::RealTimeImportBPLibrary_eventLoadFileAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			TArray<uint8> bytes;
			FString fileName;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_eventID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadFileEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::RealTimeImportBPLibrary_eventLoadFileEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageBytes_Parms
		{
			FString name;
			TArray<uint8> bytes;
			UTexture2D* texture;
			int32 errorCode;
			FString errorMessage;
			TEnumAsByte<TextureCompressionSettings> compressionSettings;
			bool SRGB;
			bool createMipMaps;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_compressionSettings;
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
		static void NewProp_createMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createMipMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytes_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytes_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytes_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytes_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytes_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_compressionSettings = { "compressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytes_Parms, compressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 2773143375
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageBytes_Parms*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageBytes_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageBytes_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageBytes_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_compressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::NewProp_createMipMaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Creates an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n\x09*@param name An individual name to cache the image better in RAM\n\x09*@param bytes Image bytes\n\x09*/" },
		{ "CPP_Default_compressionSettings", "TC_Default" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_SRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n@param name An individual name to cache the image better in RAM\n@param bytes Image bytes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::RealTimeImportBPLibrary_eventLoadImageBytes_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms
		{
			FString name;
			TArray<uint8> bytes;
			FString eventID;
			TEnumAsByte<TextureCompressionSettings> compressionSettings;
			bool SRGB;
			bool createMipMaps;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_compressionSettings;
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
		static void NewProp_createMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createMipMaps;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_compressionSettings = { "compressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms, compressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 2773143375
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_compressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_createMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Creates asynchronously an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n\x09*@param name An individual name to cache the image better in RAM\n\x09*@param bytes Image bytes\n\x09*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.\n\x09*/" },
		{ "CPP_Default_compressionSettings", "TC_Default" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_SRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates asynchronously an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n@param name An individual name to cache the image better in RAM\n@param bytes Image bytes\n@param eventID To identify different events, you can enter an ID here which will be output again in the matching event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageBytesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::RealTimeImportBPLibrary_eventLoadImageBytesAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			const UTexture2D* texture;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_eventID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageBytesEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::RealTimeImportBPLibrary_eventLoadImageBytesEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			UTexture2D* texture;
			FString fileName;
			int32 errorCode;
			FString errorMessage;
			TEnumAsByte<TextureCompressionSettings> compressionSettings;
			bool SRGB;
			bool createMipMaps;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_compressionSettings;
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
		static void NewProp_createMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createMipMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_compressionSettings = { "compressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFile_Parms, compressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 2773143375
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageFile_Parms*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageFile_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_compressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::NewProp_createMipMaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Load .png,.jpg or bmp File. A UTexture2D object is returned. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*/" },
		{ "CPP_Default_compressionSettings", "TC_Default" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_SRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Load .png,.jpg or bmp File. A UTexture2D object is returned. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::RealTimeImportBPLibrary_eventLoadImageFile_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FString eventID;
			TEnumAsByte<TextureCompressionSettings> compressionSettings;
			bool SRGB;
			bool createMipMaps;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_compressionSettings;
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
		static void NewProp_createMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createMipMaps;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_compressionSettings = { "compressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms, compressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 2773143375
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_compressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_createMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Load asynchronously .png,.jpg or bmp File. A UTexture2D object is returned int the Event. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.\n\x09*/" },
		{ "CPP_Default_compressionSettings", "TC_Default" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_SRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Load asynchronously .png,.jpg or bmp File. A UTexture2D object is returned int the Event. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file.\n@param eventID To identify different events, you can enter an ID here which will be output again in the matching event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::RealTimeImportBPLibrary_eventLoadImageFileAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			const UTexture2D* texture;
			FString fileName;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_eventID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadImageFileEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::RealTimeImportBPLibrary_eventLoadImageFileEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics
	{
		struct RealTimeImportBPLibrary_eventLoadMeshFile_Parms
		{
			ERTIMeshType fileType;
			ERTIDirectoryType directoryType;
			FString filePath;
			bool success;
			FString successMessage;
			TArray<FRTIModelStruct> modelStructs;
			ERTICoordinateSystem coordinateSystem;
			bool autoDetectionNormalMap;
			bool useSRGB;
			bool createMipMaps;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_successMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_modelStructs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_modelStructs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_coordinateSystem_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_coordinateSystem;
		static void NewProp_autoDetectionNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoDetectionNormalMap;
		static void NewProp_useSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useSRGB;
		static void NewProp_createMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createMipMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadMeshFile_Parms, fileType), Z_Construct_UEnum_RealTimeImport_ERTIMeshType, METADATA_PARAMS(nullptr, 0) }; // 3634431585
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadMeshFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadMeshFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadMeshFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadMeshFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_successMessage = { "successMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadMeshFile_Parms, successMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_modelStructs_Inner = { "modelStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRTIModelStruct, METADATA_PARAMS(nullptr, 0) }; // 754723136
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_modelStructs = { "modelStructs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadMeshFile_Parms, modelStructs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 754723136
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_coordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_coordinateSystem = { "coordinateSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventLoadMeshFile_Parms, coordinateSystem), Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem, METADATA_PARAMS(nullptr, 0) }; // 3212256354
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_autoDetectionNormalMap_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadMeshFile_Parms*)Obj)->autoDetectionNormalMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_autoDetectionNormalMap = { "autoDetectionNormalMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadMeshFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_autoDetectionNormalMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_useSRGB_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadMeshFile_Parms*)Obj)->useSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_useSRGB = { "useSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadMeshFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_useSRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventLoadMeshFile_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventLoadMeshFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_fileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_fileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_successMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_modelStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_modelStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_coordinateSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_coordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_autoDetectionNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_useSRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::NewProp_createMipMaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Mesh" },
		{ "Comment", "/**\n\x09*Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh\n\x09*@param fileType Format of the file. Currently only OBJ possible\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*/" },
		{ "CPP_Default_autoDetectionNormalMap", "true" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_useSRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh\n@param fileType Format of the file. Currently only OBJ possible\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "LoadMeshFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::RealTimeImportBPLibrary_eventLoadMeshFile_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics
	{
		struct RealTimeImportBPLibrary_eventpauseSound_Parms
		{
			FString fileID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventpauseSound_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::NewProp_fileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Pauses a Wav file.\n\x09*@param fileID This ID is generated when starting playback.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Pauses a Wav file.\n@param fileID This ID is generated when starting playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "pauseSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::RealTimeImportBPLibrary_eventpauseSound_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms
		{
			int32 errorCode;
			FString fileID;
			FString errorMessage;
			float durationInSeconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_durationInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_durationInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_fileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, fileID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_fileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_fileID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_durationInSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_durationInSeconds = { "durationInSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms, durationInSeconds), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_durationInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_durationInSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::NewProp_durationInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "PlaySoundEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::RealTimeImportBPLibrary_eventPlaySoundEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics
	{
		struct RealTimeImportBPLibrary_eventremoveSoundFromCache_Parms
		{
			FString fileID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventremoveSoundFromCache_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::NewProp_fileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Removes a Sound file from the cache if you didn't do it on stop. Can only be removed when it is not playing.\n\x09*@param fileID\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Removes a Sound file from the cache if you didn't do it on stop. Can only be removed when it is not playing.\n@param fileID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "removeSoundFromCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::RealTimeImportBPLibrary_eventremoveSoundFromCache_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics
	{
		struct RealTimeImportBPLibrary_eventremoveTextureFromCacheAndDestroyTexture_Parms
		{
			UTexture2D* texture;
			bool emptyTextureBeforeDeleting;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static void NewProp_emptyTextureBeforeDeleting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_emptyTextureBeforeDeleting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventremoveTextureFromCacheAndDestroyTexture_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::NewProp_emptyTextureBeforeDeleting_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventremoveTextureFromCacheAndDestroyTexture_Parms*)Obj)->emptyTextureBeforeDeleting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::NewProp_emptyTextureBeforeDeleting = { "emptyTextureBeforeDeleting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventremoveTextureFromCacheAndDestroyTexture_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::NewProp_emptyTextureBeforeDeleting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::NewProp_emptyTextureBeforeDeleting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Creates Releases the texture so that the engine can delete it.\n\x09*@param texture\n\x09*@param emptyTextureBeforeDeleting It may take a few seconds for Unreal to free the memory. This checkbox empties the texture. This frees most of the memory immediately. But it can lead to stability problems. \n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates Releases the texture so that the engine can delete it.\n@param texture\n@param emptyTextureBeforeDeleting It may take a few seconds for Unreal to free the memory. This checkbox empties the texture. This frees most of the memory immediately. But it can lead to stability problems." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "removeTextureFromCacheAndDestroyTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::RealTimeImportBPLibrary_eventremoveTextureFromCacheAndDestroyTexture_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics
	{
		struct RealTimeImportBPLibrary_eventresumeSound_Parms
		{
			FString fileID;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventresumeSound_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::NewProp_fileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Resumes a Wav file.\n\x09*@param fileID This ID is generated when starting playback.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Resumes a Wav file.\n@param fileID This ID is generated when starting playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "resumeSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::RealTimeImportBPLibrary_eventresumeSound_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics
	{
		struct RealTimeImportBPLibrary_eventSaveFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool createDirectories;
			bool overwriteFile;
			TArray<uint8> bytes;
			FString fileName;
			FString fullPath;
			int32 errorCode;
			FString errorMessage;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_createDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createDirectories;
		static void NewProp_overwriteFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overwriteFile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fullPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_createDirectories_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventSaveFile_Parms*)Obj)->createDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_createDirectories = { "createDirectories", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventSaveFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_createDirectories_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_overwriteFile_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventSaveFile_Parms*)Obj)->overwriteFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_overwriteFile = { "overwriteFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventSaveFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_overwriteFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_fullPath = { "fullPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, fullPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, errorCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFile_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_createDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_overwriteFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_fullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "SaveFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::RealTimeImportBPLibrary_eventSaveFile_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics
	{
		struct RealTimeImportBPLibrary_eventSaveFileAsync_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool createDirectories;
			bool overwriteFile;
			TArray<uint8> bytes;
			FString eventID;
			URealTimeImportBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_createDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createDirectories;
		static void NewProp_overwriteFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overwriteFile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileAsync_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileAsync_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_createDirectories_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventSaveFileAsync_Parms*)Obj)->createDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_createDirectories = { "createDirectories", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventSaveFileAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_createDirectories_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_overwriteFile_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventSaveFileAsync_Parms*)Obj)->overwriteFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_overwriteFile = { "overwriteFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventSaveFileAsync_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_overwriteFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileAsync_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileAsync_Parms, eventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileAsync_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_createDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_overwriteFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "SaveFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::RealTimeImportBPLibrary_eventSaveFileAsync_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms
		{
			int32 errorCode;
			FString eventID;
			FString fileName;
			FString fullPath;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eventID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_eventID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fullPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fullPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_eventID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_eventID = { "eventID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, eventID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_eventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_eventID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fullPath = { "fullPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, fullPath), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fullPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fullPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_eventID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_fullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "SaveFileEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::RealTimeImportBPLibrary_eventSaveFileEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics
	{
		struct RealTimeImportBPLibrary_eventseekWavFileStream_Parms
		{
			FString fileID;
			float positionInSeconds;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionInSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventseekWavFileStream_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::NewProp_positionInSeconds = { "positionInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventseekWavFileStream_Parms, positionInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::NewProp_positionInSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* This allows you to jump to a specific position of a wav file that is being streamed.\n\x09*@param fileID This ID is generated when starting playback.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "This allows you to jump to a specific position of a wav file that is being streamed.\n@param fileID This ID is generated when starting playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "seekWavFileStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::RealTimeImportBPLibrary_eventseekWavFileStream_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics
	{
		struct RealTimeImportBPLibrary_eventstopAllSounds_Parms
		{
			bool removeFromCache;
		};
		static void NewProp_removeFromCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_removeFromCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::NewProp_removeFromCache_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventstopAllSounds_Parms*)Obj)->removeFromCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::NewProp_removeFromCache = { "removeFromCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventstopAllSounds_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::NewProp_removeFromCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::NewProp_removeFromCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Stop all Wav files.\n\x09*@param Determines whether the wav should remain in RAM if it exists.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Stop all Wav files.\n@param Determines whether the wav should remain in RAM if it exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "stopAllSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::RealTimeImportBPLibrary_eventstopAllSounds_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics
	{
		struct RealTimeImportBPLibrary_eventstopSound_Parms
		{
			FString fileID;
			bool removeFromCache;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static void NewProp_removeFromCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_removeFromCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstopSound_Parms, fileID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::NewProp_removeFromCache_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventstopSound_Parms*)Obj)->removeFromCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::NewProp_removeFromCache = { "removeFromCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventstopSound_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::NewProp_removeFromCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::NewProp_removeFromCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09* Stop a Wav file.\n\x09*@param fileID This ID is generated when starting playback.\n\x09*@param Determines whether the wav should remain in RAM if it exists.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Stop a Wav file.\n@param fileID This ID is generated when starting playback.\n@param Determines whether the wav should remain in RAM if it exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "stopSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::RealTimeImportBPLibrary_eventstopSound_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics
	{
		struct RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms
		{
			FString fileID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::NewProp_fileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms, fileID), METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::NewProp_fileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::NewProp_fileID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::NewProp_fileID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "StopSoundEventDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::RealTimeImportBPLibrary_eventStopSoundEventDelegate_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics
	{
		struct RealTimeImportBPLibrary_eventstreamWavFile_Parms
		{
			bool success;
			FString errorMessage;
			const UObject* WorldContextObject;
			ERTIDirectoryType directoryType;
			FString filePath;
			float volumeMultiplier;
			int32 startTimeInSeconds;
			bool persistAcrossLevelTransition;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeMultiplier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_startTimeInSeconds;
		static void NewProp_persistAcrossLevelTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_persistAcrossLevelTransition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventstreamWavFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventstreamWavFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstreamWavFile_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstreamWavFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstreamWavFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstreamWavFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_volumeMultiplier = { "volumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstreamWavFile_Parms, volumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_startTimeInSeconds = { "startTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventstreamWavFile_Parms, startTimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_persistAcrossLevelTransition_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventstreamWavFile_Parms*)Obj)->persistAcrossLevelTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_persistAcrossLevelTransition = { "persistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventstreamWavFile_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_persistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_volumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_startTimeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::NewProp_persistAcrossLevelTransition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/*float playSpeed = 1.0,*/" },
		{ "CPP_Default_persistAcrossLevelTransition", "true" },
		{ "CPP_Default_startTimeInSeconds", "0" },
		{ "CPP_Default_volumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "float playSpeed = 1.0," },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "streamWavFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::RealTimeImportBPLibrary_eventstreamWavFile_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics
	{
		struct RealTimeImportBPLibrary_eventtexture2dToByteArray_Parms
		{
			UTexture2D* texture2D;
			ERTIExportImageType type;
			int32 quality;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture2D;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_quality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_texture2D = { "texture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtexture2dToByteArray_Parms, texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtexture2dToByteArray_Parms, type), Z_Construct_UEnum_RealTimeImport_ERTIExportImageType, METADATA_PARAMS(nullptr, 0) }; // 2510432228
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_quality = { "quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtexture2dToByteArray_Parms, quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtexture2dToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09* ONLY UE4! Creates an image file from the Texture2D  and returns the bytes. The bytes can be saved as a file or sent with a different plugin.\n\x09*@param texture2D\n\x09*@param type PNG,JPG and BMP are possible\n\x09*@param quality In percent. 100 = highest quality. 1 = lowest quality. BMP is not compressed. With PNG, UE4 doesn't seem to change much. The biggest difference can be seen with JPG.\n\x09*/" },
		{ "CPP_Default_quality", "100" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "ONLY UE4! Creates an image file from the Texture2D  and returns the bytes. The bytes can be saved as a file or sent with a different plugin.\n@param texture2D\n@param type PNG,JPG and BMP are possible\n@param quality In percent. 100 = highest quality. 1 = lowest quality. BMP is not compressed. With PNG, UE4 doesn't seem to change much. The biggest difference can be seen with JPG." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "texture2dToByteArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::RealTimeImportBPLibrary_eventtexture2dToByteArray_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics
	{
		struct RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms
		{
			bool success;
			FString errorMessage;
			UTextureRenderTarget2D* textureRenderTarget2D;
			ERTIExportImageType type;
			int32 quality;
			TArray<uint8> ReturnValue;
		};
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_textureRenderTarget2D;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_quality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms), &Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_textureRenderTarget2D = { "textureRenderTarget2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms, textureRenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms, type), Z_Construct_UEnum_RealTimeImport_ERTIExportImageType, METADATA_PARAMS(nullptr, 0) }; // 2510432228
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_quality = { "quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms, quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_textureRenderTarget2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Creates an image file from the TextureRenderTarget2D component and returns the bytes. The bytes can be saved as a file or sent with a different plugin.\n\x09*@param textureRenderTarget2D\n\x09*@param type PNG,JPG and BMP are possible\n\x09*@param quality In percent. 100 = highest quality. 1 = lowest quality. BMP is not compressed. With PNG, UE4 doesn't seem to change much. The biggest difference can be seen with JPG.\n\x09*/" },
		{ "CPP_Default_quality", "100" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
		{ "ToolTip", "Creates an image file from the TextureRenderTarget2D component and returns the bytes. The bytes can be saved as a file or sent with a different plugin.\n@param textureRenderTarget2D\n@param type PNG,JPG and BMP are possible\n@param quality In percent. 100 = highest quality. 1 = lowest quality. BMP is not compressed. With PNG, UE4 doesn't seem to change much. The biggest difference can be seen with JPG." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportBPLibrary, nullptr, "textureRenderTarget2D_ToByteArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::RealTimeImportBPLibrary_eventtextureRenderTarget2D_ToByteArray_Parms), Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportBPLibrary);
	UClass* Z_Construct_UClass_URealTimeImportBPLibrary_NoRegister()
	{
		return URealTimeImportBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLoadFileEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLoadFileEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSaveFileEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSaveFileEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLoadAllFilesFromDirectoryEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLoadAllFilesFromDirectoryEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onCreateSoundWaveFromFileEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCreateSoundWaveFromFileEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onCreateSoundWaveFromBytesEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCreateSoundWaveFromBytesEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onPlaySoundEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onPlaySoundEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onActiveSoundPositionEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onActiveSoundPositionEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onActiveSoundEnvelopeValueEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onActiveSoundEnvelopeValueEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onStopSoundEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onStopSoundEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLoadImageFileEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLoadImageFileEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLoadImageBytesEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLoadImageBytesEventDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate, "ActiveSoundEnvelopeValueEventDelegate" }, // 2193703507
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature, "ActiveSoundEnvelopeValueEventDelegate__DelegateSignature" }, // 3934001074
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate, "ActiveSoundPositionEventDelegate" }, // 3385522550
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature, "ActiveSoundPositionEventDelegate__DelegateSignature" }, // 3493324929
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_breakMaterialStruct, "breakMaterialStruct" }, // 3396930399
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_breakMeshStruct, "breakMeshStruct" }, // 466941657
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_breakModelStruct, "breakModelStruct" }, // 2238308278
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_breakTextureStruct, "breakTextureStruct" }, // 2755951729
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_changeVolumeSound, "changeVolumeSound" }, // 2237507407
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytes, "CreateSoundWaveFromBytes" }, // 3388864404
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesAsync, "CreateSoundWaveFromBytesAsync" }, // 1879168192
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate, "CreateSoundWaveFromBytesEventDelegate" }, // 3217156989
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature, "CreateSoundWaveFromBytesEventDelegate__DelegateSignature" }, // 1831843869
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFile, "CreateSoundWaveFromFile" }, // 1781756210
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileAsync, "CreateSoundWaveFromFileAsync" }, // 2362182490
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate, "CreateSoundWaveFromFileEventDelegate" }, // 1213972506
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature, "CreateSoundWaveFromFileEventDelegate__DelegateSignature" }, // 1945799690
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_emptySoundCache, "emptySoundCache" }, // 3265168609
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_emptyTextureCacheAndDestroyTextures, "emptyTextureCacheAndDestroyTextures" }, // 495702855
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_getRealTimeImportTarget, "getRealTimeImportTarget" }, // 105653128
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_getSoundInfo, "getSoundInfo" }, // 1472190723
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_isSoundActive, "isSoundActive" }, // 3675059694
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectory, "LoadAllFilesFromDirectory" }, // 3042806237
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryAsync, "LoadAllFilesFromDirectoryAsync" }, // 3923723053
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate, "LoadAllFilesFromDirectoryEventDelegate" }, // 4123933972
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature, "LoadAllFilesFromDirectoryEventDelegate__DelegateSignature" }, // 2340464505
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundBytesAsync, "loadAndPlaySoundBytesAsync" }, // 1111902757
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_loadAndPlaySoundFileAsync, "loadAndPlaySoundFileAsync" }, // 818785098
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFile, "LoadFile" }, // 3099867987
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileAsync, "LoadFileAsync" }, // 231153732
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadFileEventDelegate, "LoadFileEventDelegate" }, // 1743805863
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature, "LoadFileEventDelegate__DelegateSignature" }, // 175365420
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytes, "LoadImageBytes" }, // 367111702
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesAsync, "LoadImageBytesAsync" }, // 30999815
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate, "LoadImageBytesEventDelegate" }, // 2724057963
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature, "LoadImageBytesEventDelegate__DelegateSignature" }, // 3213846607
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFile, "LoadImageFile" }, // 3404973196
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileAsync, "LoadImageFileAsync" }, // 1545795117
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate, "LoadImageFileEventDelegate" }, // 124791443
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature, "LoadImageFileEventDelegate__DelegateSignature" }, // 2047880033
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_LoadMeshFile, "LoadMeshFile" }, // 1437081359
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_pauseSound, "pauseSound" }, // 119039502
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate, "PlaySoundEventDelegate" }, // 3350512459
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature, "PlaySoundEventDelegate__DelegateSignature" }, // 1366098961
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_removeSoundFromCache, "removeSoundFromCache" }, // 4051002279
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_removeTextureFromCacheAndDestroyTexture, "removeTextureFromCacheAndDestroyTexture" }, // 220438851
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_resumeSound, "resumeSound" }, // 4021075888
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFile, "SaveFile" }, // 449946709
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileAsync, "SaveFileAsync" }, // 2648956635
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_SaveFileEventDelegate, "SaveFileEventDelegate" }, // 2144228929
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature, "SaveFileEventDelegate__DelegateSignature" }, // 4235962660
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_seekWavFileStream, "seekWavFileStream" }, // 2653987759
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_stopAllSounds, "stopAllSounds" }, // 4242532053
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_stopSound, "stopSound" }, // 1876056073
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_StopSoundEventDelegate, "StopSoundEventDelegate" }, // 3972713660
		{ &Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature, "StopSoundEventDelegate__DelegateSignature" }, // 1412861607
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_streamWavFile, "streamWavFile" }, // 1837353231
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_texture2dToByteArray, "texture2dToByteArray" }, // 3129450735
		{ &Z_Construct_UFunction_URealTimeImportBPLibrary_textureRenderTarget2D_ToByteArray, "textureRenderTarget2D_ToByteArray" }, // 3595709765
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealTimeImportBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadFileEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|File|Events|LoadFile" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadFileEventDelegate = { "onLoadFileEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onLoadFileEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadFileEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadFileEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadFileEventDelegate_MetaData)) }; // 175365420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onSaveFileEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|File|Events|SaveFile" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onSaveFileEventDelegate = { "onSaveFileEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onSaveFileEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_SaveFileEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onSaveFileEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onSaveFileEventDelegate_MetaData)) }; // 4235962660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadAllFilesFromDirectoryEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|File|Events|LoadAllFilesFromDirectory" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadAllFilesFromDirectoryEventDelegate = { "onLoadAllFilesFromDirectoryEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onLoadAllFilesFromDirectoryEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadAllFilesFromDirectoryEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadAllFilesFromDirectoryEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadAllFilesFromDirectoryEventDelegate_MetaData)) }; // 2340464505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromFileEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Sound|Events|CreateSoundWaveFromFile" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromFileEventDelegate = { "onCreateSoundWaveFromFileEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onCreateSoundWaveFromFileEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromFileEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromFileEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromFileEventDelegate_MetaData)) }; // 1945799690
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromBytesEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Sound|Events|CreateSoundWaveFromBytes" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromBytesEventDelegate = { "onCreateSoundWaveFromBytesEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onCreateSoundWaveFromBytesEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_CreateSoundWaveFromBytesEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromBytesEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromBytesEventDelegate_MetaData)) }; // 1831843869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onPlaySoundEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Sound|Events|Play" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onPlaySoundEventDelegate = { "onPlaySoundEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onPlaySoundEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_PlaySoundEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onPlaySoundEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onPlaySoundEventDelegate_MetaData)) }; // 1366098961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundPositionEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Sound|Events|Position" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundPositionEventDelegate = { "onActiveSoundPositionEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onActiveSoundPositionEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundPositionEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundPositionEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundPositionEventDelegate_MetaData)) }; // 3493324929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundEnvelopeValueEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Sound|Events|EnvelopeValue" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundEnvelopeValueEventDelegate = { "onActiveSoundEnvelopeValueEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onActiveSoundEnvelopeValueEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_ActiveSoundEnvelopeValueEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundEnvelopeValueEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundEnvelopeValueEventDelegate_MetaData)) }; // 3934001074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onStopSoundEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Sound|Events|Stop" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onStopSoundEventDelegate = { "onStopSoundEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onStopSoundEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_StopSoundEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onStopSoundEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onStopSoundEventDelegate_MetaData)) }; // 1412861607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageFileEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Image|Events|LoadImageFile" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageFileEventDelegate = { "onLoadImageFileEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onLoadImageFileEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageFileEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageFileEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageFileEventDelegate_MetaData)) }; // 2047880033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageBytesEventDelegate_MetaData[] = {
		{ "Category", "RealTimeImport|Image|Events|LoadImageBytes" },
		{ "ModuleRelativePath", "Public/RealTimeImportBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageBytesEventDelegate = { "onLoadImageBytesEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URealTimeImportBPLibrary, onLoadImageBytesEventDelegate), Z_Construct_UDelegateFunction_URealTimeImportBPLibrary_LoadImageBytesEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageBytesEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageBytesEventDelegate_MetaData)) }; // 3213846607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportBPLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadFileEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onSaveFileEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadAllFilesFromDirectoryEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromFileEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onCreateSoundWaveFromBytesEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onPlaySoundEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundPositionEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onActiveSoundEnvelopeValueEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onStopSoundEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageFileEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportBPLibrary_Statics::NewProp_onLoadImageBytesEventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportBPLibrary_Statics::ClassParams = {
		&URealTimeImportBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportBPLibrary()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportBPLibrary.OuterSingleton, Z_Construct_UClass_URealTimeImportBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportBPLibrary.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportBPLibrary>()
	{
		return URealTimeImportBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportBPLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportBPLibrary, URealTimeImportBPLibrary::StaticClass, TEXT("URealTimeImportBPLibrary"), &Z_Registration_Info_UClass_URealTimeImportBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportBPLibrary), 3887106914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_318573879(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
