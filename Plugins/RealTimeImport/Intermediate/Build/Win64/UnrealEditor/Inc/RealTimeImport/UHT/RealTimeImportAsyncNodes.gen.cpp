// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportAsyncNodes.h"
#include "RealTimeImport/Public/RealTimeImport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportAsyncNodes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_NoRegister();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIFileType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIMeshType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTISoundFileType();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIModelStruct();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeLoadMesh_eventLoadMeshCompleteDelegate_Parms
		{
			TArray<FRTIModelStruct> modelStructs;
			FString errorMessage;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_modelStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modelStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_modelStructs;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs_Inner = { "modelStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRTIModelStruct, METADATA_PARAMS(nullptr, 0) }; // 779002880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs = { "modelStructs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshCompleteDelegate_Parms, modelStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs_MetaData)) }; // 779002880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_modelStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh, nullptr, "LoadMeshCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeLoadMesh_eventLoadMeshCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeLoadMesh::execLoadMeshFileAsyncNode)
	{
		P_GET_ENUM(ERTIMeshType,Z_Param_fileType);
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_ENUM(ERTICoordinateSystem,Z_Param_coordinateSystem);
		P_GET_UBOOL(Z_Param_autoDetectionNormalMap);
		P_GET_UBOOL(Z_Param_useSRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeLoadMesh**)Z_Param__Result=URealTimeImportAsyncNodeLoadMesh::LoadMeshFileAsyncNode(ERTIMeshType(Z_Param_fileType),ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,ERTICoordinateSystem(Z_Param_coordinateSystem),Z_Param_autoDetectionNormalMap,Z_Param_useSRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeLoadMesh::StaticRegisterNativesURealTimeImportAsyncNodeLoadMesh()
	{
		UClass* Class = URealTimeImportAsyncNodeLoadMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMeshFileAsyncNode", &URealTimeImportAsyncNodeLoadMesh::execLoadMeshFileAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms
		{
			ERTIMeshType fileType;
			ERTIDirectoryType directoryType;
			FString filePath;
			ERTICoordinateSystem coordinateSystem;
			bool autoDetectionNormalMap;
			bool useSRGB;
			bool createMipMaps;
			URealTimeImportAsyncNodeLoadMesh* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_coordinateSystem_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_coordinateSystem;
		static void NewProp_autoDetectionNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_autoDetectionNormalMap;
		static void NewProp_useSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useSRGB;
		static void NewProp_createMipMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createMipMaps;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms, fileType), Z_Construct_UEnum_RealTimeImport_ERTIMeshType, METADATA_PARAMS(nullptr, 0) }; // 3634431585
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_coordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_coordinateSystem = { "coordinateSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms, coordinateSystem), Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem, METADATA_PARAMS(nullptr, 0) }; // 3212256354
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_autoDetectionNormalMap_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms*)Obj)->autoDetectionNormalMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_autoDetectionNormalMap = { "autoDetectionNormalMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_autoDetectionNormalMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_useSRGB_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms*)Obj)->useSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_useSRGB = { "useSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_useSRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_fileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_fileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_coordinateSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_coordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_autoDetectionNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_useSRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_createMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|Mesh" },
		{ "Comment", "/**\n*Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh\n*@param fileType Format of the file. Currently only OBJ possible\n*@param directoryType Absolute path or relative path.\n*@param filePath Path inclusive file.\n*/" },
		{ "CPP_Default_autoDetectionNormalMap", "true" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_useSRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "Reads a mesh file and creates arrays of vectors, normals, triangles and UVs to create a mesh\n@param fileType Format of the file. Currently only OBJ possible\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh, nullptr, "LoadMeshFileAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::RealTimeImportAsyncNodeLoadMesh_eventLoadMeshFileAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeLoadMesh);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_NoRegister()
	{
		return URealTimeImportAsyncNodeLoadMesh::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature, "LoadMeshCompleteDelegate__DelegateSignature" }, // 2233697034
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshFileAsyncNode, "LoadMeshFileAsyncNode" }, // 1968809638
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--- Load Mesh -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "--- Load Mesh -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadMesh, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnSuccess_MetaData)) }; // 2233697034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadMesh, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadMesh_LoadMeshCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnFail_MetaData)) }; // 2233697034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeLoadMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::ClassParams = {
		&URealTimeImportAsyncNodeLoadMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadMesh.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadMesh.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeLoadMesh>()
	{
		return URealTimeImportAsyncNodeLoadMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeLoadMesh);
	URealTimeImportAsyncNodeLoadMesh::~URealTimeImportAsyncNodeLoadMesh() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms
		{
			FString fileName;
			TArray<uint8> bytes;
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile, nullptr, "LoadFileCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeLoadFile_eventLoadFileCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeLoadFile::execLoadFileAsyncNode)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeLoadFile**)Z_Param__Result=URealTimeImportAsyncNodeLoadFile::LoadFileAsyncNode(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeLoadFile::StaticRegisterNativesURealTimeImportAsyncNodeLoadFile()
	{
		UClass* Class = URealTimeImportAsyncNodeLoadFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileAsyncNode", &URealTimeImportAsyncNodeLoadFile::execLoadFileAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeLoadFile_eventLoadFileAsyncNode_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			URealTimeImportAsyncNodeLoadFile* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileAsyncNode_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileAsyncNode_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadFile_eventLoadFileAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile, nullptr, "LoadFileAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::RealTimeImportAsyncNodeLoadFile_eventLoadFileAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeLoadFile);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_NoRegister()
	{
		return URealTimeImportAsyncNodeLoadFile::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadFile_LoadFileAsyncNode, "LoadFileAsyncNode" }, // 2198853709
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature, "LoadFileCompleteDelegate__DelegateSignature" }, // 895586711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--- Load File -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "--- Load File -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadFile, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnSuccess_MetaData)) }; // 895586711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadFile, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadFile_LoadFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnFail_MetaData)) }; // 895586711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeLoadFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::ClassParams = {
		&URealTimeImportAsyncNodeLoadFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadFile.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadFile.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeLoadFile>()
	{
		return URealTimeImportAsyncNodeLoadFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeLoadFile);
	URealTimeImportAsyncNodeLoadFile::~URealTimeImportAsyncNodeLoadFile() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms
		{
			FString fileName;
			FString fullPath;
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fullPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fullPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fullPath = { "fullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms, fullPath), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fullPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fullPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_fullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile, nullptr, "SaveFileCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeSaveFile_eventSaveFileCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeSaveFile::execSaveFileAsyncNode)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_UBOOL(Z_Param_createDirectories);
		P_GET_UBOOL(Z_Param_overwriteFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeSaveFile**)Z_Param__Result=URealTimeImportAsyncNodeSaveFile::SaveFileAsyncNode(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bytes,Z_Param_createDirectories,Z_Param_overwriteFile);
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeSaveFile::StaticRegisterNativesURealTimeImportAsyncNodeSaveFile()
	{
		UClass* Class = URealTimeImportAsyncNodeSaveFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveFileAsyncNode", &URealTimeImportAsyncNodeSaveFile::execSaveFileAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			TArray<uint8> bytes;
			bool createDirectories;
			bool overwriteFile;
			URealTimeImportAsyncNodeSaveFile* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static void NewProp_createDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_createDirectories;
		static void NewProp_overwriteFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overwriteFile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_createDirectories_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms*)Obj)->createDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_createDirectories = { "createDirectories", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_createDirectories_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_overwriteFile_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms*)Obj)->overwriteFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_overwriteFile = { "overwriteFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_overwriteFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_createDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_overwriteFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile, nullptr, "SaveFileAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::RealTimeImportAsyncNodeSaveFile_eventSaveFileAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeSaveFile);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_NoRegister()
	{
		return URealTimeImportAsyncNodeSaveFile::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeSaveFile_SaveFileAsyncNode, "SaveFileAsyncNode" }, // 3347075564
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature, "SaveFileCompleteDelegate__DelegateSignature" }, // 3221174146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*---Save File -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "---Save File -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeSaveFile, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnSuccess_MetaData)) }; // 3221174146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeSaveFile, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeSaveFile_SaveFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnFail_MetaData)) }; // 3221174146
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeSaveFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::ClassParams = {
		&URealTimeImportAsyncNodeSaveFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeSaveFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeSaveFile.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeSaveFile.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeSaveFile>()
	{
		return URealTimeImportAsyncNodeSaveFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeSaveFile);
	URealTimeImportAsyncNodeSaveFile::~URealTimeImportAsyncNodeSaveFile() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms
		{
			int32 count;
			TArray<FString> files;
			TArray<FString> filePaths;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_count_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms, count), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_count_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_count_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms, files), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths_Inner = { "filePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths = { "filePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms, filePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::NewProp_filePaths,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory, nullptr, "LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeLoadAllFilesFromDirectory::execLoadAllFilesFromDirectoryAsyncNode)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_ENUM(ERTIFileType,Z_Param_fileType);
		P_GET_PROPERTY(FStrProperty,Z_Param_dirPath);
		P_GET_UBOOL(Z_Param_recursiveSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeLoadAllFilesFromDirectory**)Z_Param__Result=URealTimeImportAsyncNodeLoadAllFilesFromDirectory::LoadAllFilesFromDirectoryAsyncNode(ERTIDirectoryType(Z_Param_directoryType),ERTIFileType(Z_Param_fileType),Z_Param_dirPath,Z_Param_recursiveSearch);
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeLoadAllFilesFromDirectory::StaticRegisterNativesURealTimeImportAsyncNodeLoadAllFilesFromDirectory()
	{
		UClass* Class = URealTimeImportAsyncNodeLoadAllFilesFromDirectory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAllFilesFromDirectoryAsyncNode", &URealTimeImportAsyncNodeLoadAllFilesFromDirectory::execLoadAllFilesFromDirectoryAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms
		{
			ERTIDirectoryType directoryType;
			ERTIFileType fileType;
			FString dirPath;
			bool recursiveSearch;
			URealTimeImportAsyncNodeLoadAllFilesFromDirectory* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dirPath;
		static void NewProp_recursiveSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_recursiveSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms, fileType), Z_Construct_UEnum_RealTimeImport_ERTIFileType, METADATA_PARAMS(nullptr, 0) }; // 4129308719
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_dirPath = { "dirPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms, dirPath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_recursiveSearch_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms*)Obj)->recursiveSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_recursiveSearch = { "recursiveSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_recursiveSearch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_fileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_fileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_dirPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_recursiveSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory, nullptr, "LoadAllFilesFromDirectoryAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::RealTimeImportAsyncNodeLoadAllFilesFromDirectory_eventLoadAllFilesFromDirectoryAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeLoadAllFilesFromDirectory);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_NoRegister()
	{
		return URealTimeImportAsyncNodeLoadAllFilesFromDirectory::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryAsyncNode, "LoadAllFilesFromDirectoryAsyncNode" }, // 615779253
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature, "LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature" }, // 4038088495
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*---Load All Files From Directory -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "---Load All Files From Directory -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadAllFilesFromDirectory, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnSuccess_MetaData)) }; // 4038088495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadAllFilesFromDirectory, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_LoadAllFilesFromDirectoryCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnFail_MetaData)) }; // 4038088495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeLoadAllFilesFromDirectory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::ClassParams = {
		&URealTimeImportAsyncNodeLoadAllFilesFromDirectory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeLoadAllFilesFromDirectory>()
	{
		return URealTimeImportAsyncNodeLoadAllFilesFromDirectory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeLoadAllFilesFromDirectory);
	URealTimeImportAsyncNodeLoadAllFilesFromDirectory::~URealTimeImportAsyncNodeLoadAllFilesFromDirectory() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms
		{
			FString fileID;
			const USoundWaveProcedural* soundWave;
			FString fileName;
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms, fileID), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave = { "soundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms, soundWave), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile, nullptr, "CreateSoundWaveFromFileCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeCreateSoundWaveFromFile::execCreateSoundWaveFromFileAsyncNode)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeCreateSoundWaveFromFile**)Z_Param__Result=URealTimeImportAsyncNodeCreateSoundWaveFromFile::CreateSoundWaveFromFileAsyncNode(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_maxFileSize,ERTISoundFileType(Z_Param_soundFileType));
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeCreateSoundWaveFromFile::StaticRegisterNativesURealTimeImportAsyncNodeCreateSoundWaveFromFile()
	{
		UClass* Class = URealTimeImportAsyncNodeCreateSoundWaveFromFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSoundWaveFromFileAsyncNode", &URealTimeImportAsyncNodeCreateSoundWaveFromFile::execCreateSoundWaveFromFileAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			float maxFileSize;
			ERTISoundFileType soundFileType;
			URealTimeImportAsyncNodeCreateSoundWaveFromFile* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_soundFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file.\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile, nullptr, "CreateSoundWaveFromFileAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::RealTimeImportAsyncNodeCreateSoundWaveFromFile_eventCreateSoundWaveFromFileAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeCreateSoundWaveFromFile);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_NoRegister()
	{
		return URealTimeImportAsyncNodeCreateSoundWaveFromFile::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileAsyncNode, "CreateSoundWaveFromFileAsyncNode" }, // 3993100584
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature, "CreateSoundWaveFromFileCompleteDelegate__DelegateSignature" }, // 1152177653
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*---Create Sound Wave From File -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "---Create Sound Wave From File -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeCreateSoundWaveFromFile, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnSuccess_MetaData)) }; // 1152177653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeCreateSoundWaveFromFile, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromFile_CreateSoundWaveFromFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnFail_MetaData)) }; // 1152177653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeCreateSoundWaveFromFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::ClassParams = {
		&URealTimeImportAsyncNodeCreateSoundWaveFromFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeCreateSoundWaveFromFile>()
	{
		return URealTimeImportAsyncNodeCreateSoundWaveFromFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeCreateSoundWaveFromFile);
	URealTimeImportAsyncNodeCreateSoundWaveFromFile::~URealTimeImportAsyncNodeCreateSoundWaveFromFile() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms
		{
			const USoundWaveProcedural* soundWave;
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave = { "soundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms, soundWave), Z_Construct_UClass_USoundWaveProcedural_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_soundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes, nullptr, "CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeCreateSoundWaveFromBytes::execCreateSoundWaveFromBytesAsyncNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxFileSize);
		P_GET_ENUM(ERTISoundFileType,Z_Param_soundFileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeCreateSoundWaveFromBytes**)Z_Param__Result=URealTimeImportAsyncNodeCreateSoundWaveFromBytes::CreateSoundWaveFromBytesAsyncNode(Z_Param_name,Z_Param_bytes,Z_Param_maxFileSize,ERTISoundFileType(Z_Param_soundFileType));
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeCreateSoundWaveFromBytes::StaticRegisterNativesURealTimeImportAsyncNodeCreateSoundWaveFromBytes()
	{
		UClass* Class = URealTimeImportAsyncNodeCreateSoundWaveFromBytes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSoundWaveFromBytesAsyncNode", &URealTimeImportAsyncNodeCreateSoundWaveFromBytes::execCreateSoundWaveFromBytesAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms
		{
			FString name;
			TArray<uint8> bytes;
			float maxFileSize;
			ERTISoundFileType soundFileType;
			URealTimeImportAsyncNodeCreateSoundWaveFromBytes* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxFileSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_soundFileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_soundFileType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_maxFileSize = { "maxFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms, maxFileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_soundFileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_soundFileType = { "soundFileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms, soundFileType), Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, METADATA_PARAMS(nullptr, 0) }; // 1472880048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_maxFileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_soundFileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_soundFileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|Sound" },
		{ "Comment", "/**\n\x09*Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n\x09*@param name An individual name to cache the sound better in RAM\n\x09*@param bytes Image bytes\n\x09*@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n\x09*@param soundFileType The type (wav, ogg) of sound file that will be loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "Creates a USoundWaveProcedural object reference from a sound file on disk that can be used in further UE4 functions. Not all sound functions work with it. For example the start time must be 0. File remains in RAM and does not have to be reloaded until the sound cache is cleared with the corresponding function. On Android and IOS, playback problems may occur depending on the sound file and smartphone model. In case of problems, please use the Play and Stream functions instead.\n@param name An individual name to cache the sound better in RAM\n@param bytes Image bytes\n@param maxFileSize In megabytes. 0 = any size is possible. 0 > an error message is triggered if the file is larger.\n@param soundFileType The type (wav, ogg) of sound file that will be loaded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes, nullptr, "CreateSoundWaveFromBytesAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::RealTimeImportAsyncNodeCreateSoundWaveFromBytes_eventCreateSoundWaveFromBytesAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeCreateSoundWaveFromBytes);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_NoRegister()
	{
		return URealTimeImportAsyncNodeCreateSoundWaveFromBytes::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesAsyncNode, "CreateSoundWaveFromBytesAsyncNode" }, // 1848180544
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature, "CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature" }, // 4290590156
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*---Create Sound Wave From Bytes -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "---Create Sound Wave From Bytes -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeCreateSoundWaveFromBytes, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnSuccess_MetaData)) }; // 4290590156
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeCreateSoundWaveFromBytes, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_CreateSoundWaveFromBytesCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnFail_MetaData)) }; // 4290590156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeCreateSoundWaveFromBytes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::ClassParams = {
		&URealTimeImportAsyncNodeCreateSoundWaveFromBytes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeCreateSoundWaveFromBytes>()
	{
		return URealTimeImportAsyncNodeCreateSoundWaveFromBytes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeCreateSoundWaveFromBytes);
	URealTimeImportAsyncNodeCreateSoundWaveFromBytes::~URealTimeImportAsyncNodeCreateSoundWaveFromBytes() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms
		{
			const UTexture2D* texture;
			FString fileName;
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms, fileName), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile, nullptr, "LoadImageFromFileCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFromFileCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeLoadImageFile::execLoadImageFileAsyncNode)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_PROPERTY(FByteProperty,Z_Param_compressionSettings);
		P_GET_UBOOL(Z_Param_SRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeLoadImageFile**)Z_Param__Result=URealTimeImportAsyncNodeLoadImageFile::LoadImageFileAsyncNode(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,TextureCompressionSettings(Z_Param_compressionSettings),Z_Param_SRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeLoadImageFile::StaticRegisterNativesURealTimeImportAsyncNodeLoadImageFile()
	{
		UClass* Class = URealTimeImportAsyncNodeLoadImageFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadImageFileAsyncNode", &URealTimeImportAsyncNodeLoadImageFile::execLoadImageFileAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			TEnumAsByte<TextureCompressionSettings> compressionSettings;
			bool SRGB;
			bool createMipMaps;
			URealTimeImportAsyncNodeLoadImageFile* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_compressionSettings = { "compressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms, compressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 3296291951
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_compressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_createMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Load asynchronously .png,.jpg or bmp File. A UTexture2D object is returned. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n\x09*@param directoryType Absolute path or relative path.\n\x09*@param filePath Path inclusive file.\n\x09*/" },
		{ "CPP_Default_compressionSettings", "TC_Default" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_SRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "Load asynchronously .png,.jpg or bmp File. A UTexture2D object is returned. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n@param directoryType Absolute path or relative path.\n@param filePath Path inclusive file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile, nullptr, "LoadImageFileAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::RealTimeImportAsyncNodeLoadImageFile_eventLoadImageFileAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeLoadImageFile);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_NoRegister()
	{
		return URealTimeImportAsyncNodeLoadImageFile::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFileAsyncNode, "LoadImageFileAsyncNode" }, // 2655333837
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature, "LoadImageFromFileCompleteDelegate__DelegateSignature" }, // 1205100338
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*---Load Image From File -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "---Load Image From File -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadImageFile, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnSuccess_MetaData)) }; // 1205100338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadImageFile, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageFile_LoadImageFromFileCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnFail_MetaData)) }; // 1205100338
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeLoadImageFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::ClassParams = {
		&URealTimeImportAsyncNodeLoadImageFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageFile.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageFile.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeLoadImageFile>()
	{
		return URealTimeImportAsyncNodeLoadImageFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeLoadImageFile);
	URealTimeImportAsyncNodeLoadImageFile::~URealTimeImportAsyncNodeLoadImageFile() {}
	struct Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics
	{
		struct RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms
		{
			const UTexture2D* texture;
			int32 errorCode;
			FString errorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_errorCode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode = { "errorCode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms, errorCode), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::NewProp_errorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes, nullptr, "LoadImageFromBytesCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageFromBytesCompleteDelegate_Parms), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealTimeImportAsyncNodeLoadImageBytes::execLoadImageBytesAsyncNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY(FByteProperty,Z_Param_compressionSettings);
		P_GET_UBOOL(Z_Param_SRGB);
		P_GET_UBOOL(Z_Param_createMipMaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportAsyncNodeLoadImageBytes**)Z_Param__Result=URealTimeImportAsyncNodeLoadImageBytes::LoadImageBytesAsyncNode(Z_Param_name,Z_Param_bytes,TextureCompressionSettings(Z_Param_compressionSettings),Z_Param_SRGB,Z_Param_createMipMaps);
		P_NATIVE_END;
	}
	void URealTimeImportAsyncNodeLoadImageBytes::StaticRegisterNativesURealTimeImportAsyncNodeLoadImageBytes()
	{
		UClass* Class = URealTimeImportAsyncNodeLoadImageBytes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadImageBytesAsyncNode", &URealTimeImportAsyncNodeLoadImageBytes::execLoadImageBytesAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics
	{
		struct RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms
		{
			FString name;
			TArray<uint8> bytes;
			TEnumAsByte<TextureCompressionSettings> compressionSettings;
			bool SRGB;
			bool createMipMaps;
			URealTimeImportAsyncNodeLoadImageBytes* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_compressionSettings = { "compressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms, compressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) }; // 3296291951
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_createMipMaps_SetBit(void* Obj)
	{
		((RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms*)Obj)->createMipMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_createMipMaps = { "createMipMaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms), &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_createMipMaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_compressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_createMipMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "RealTimeImport|Image" },
		{ "Comment", "/**\n\x09*Creates asynchronously an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n\x09*@param name An individual name to cache the image better in RAM\n\x09*@param bytes Image bytes\n\x09*@param eventID To identify different events, you can enter an ID here which will be output again in the matching event.\n\x09*/" },
		{ "CPP_Default_compressionSettings", "TC_Default" },
		{ "CPP_Default_createMipMaps", "false" },
		{ "CPP_Default_SRGB", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "Creates asynchronously an UTexture2D object from a byte array. The file stays in RAM and is not loaded again. Beware of the file size of your files!!!\n@param name An individual name to cache the image better in RAM\n@param bytes Image bytes\n@param eventID To identify different events, you can enter an ID here which will be output again in the matching event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes, nullptr, "LoadImageBytesAsyncNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::RealTimeImportAsyncNodeLoadImageBytes_eventLoadImageBytesAsyncNode_Parms), Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportAsyncNodeLoadImageBytes);
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_NoRegister()
	{
		return URealTimeImportAsyncNodeLoadImageBytes::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageBytesAsyncNode, "LoadImageBytesAsyncNode" }, // 1760085052
		{ &Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature, "LoadImageFromBytesCompleteDelegate__DelegateSignature" }, // 2518275369
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*---Load Image From Bytes -------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "RealTimeImportAsyncNodes.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
		{ "ToolTip", "---Load Image From Bytes -------------------------------------------------------------------------------------------------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadImageBytes, OnSuccess), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnSuccess_MetaData)) }; // 2518275369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportAsyncNodes.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportAsyncNodeLoadImageBytes, OnFail), Z_Construct_UDelegateFunction_URealTimeImportAsyncNodeLoadImageBytes_LoadImageFromBytesCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnFail_MetaData)) }; // 2518275369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportAsyncNodeLoadImageBytes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::ClassParams = {
		&URealTimeImportAsyncNodeLoadImageBytes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageBytes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageBytes.OuterSingleton, Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageBytes.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportAsyncNodeLoadImageBytes>()
	{
		return URealTimeImportAsyncNodeLoadImageBytes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportAsyncNodeLoadImageBytes);
	URealTimeImportAsyncNodeLoadImageBytes::~URealTimeImportAsyncNodeLoadImageBytes() {}
	struct Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportAsyncNodeLoadMesh, URealTimeImportAsyncNodeLoadMesh::StaticClass, TEXT("URealTimeImportAsyncNodeLoadMesh"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeLoadMesh), 2015836136U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeLoadFile, URealTimeImportAsyncNodeLoadFile::StaticClass, TEXT("URealTimeImportAsyncNodeLoadFile"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeLoadFile), 1682098339U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeSaveFile, URealTimeImportAsyncNodeSaveFile::StaticClass, TEXT("URealTimeImportAsyncNodeSaveFile"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeSaveFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeSaveFile), 1182677101U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory, URealTimeImportAsyncNodeLoadAllFilesFromDirectory::StaticClass, TEXT("URealTimeImportAsyncNodeLoadAllFilesFromDirectory"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadAllFilesFromDirectory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeLoadAllFilesFromDirectory), 2923367051U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile, URealTimeImportAsyncNodeCreateSoundWaveFromFile::StaticClass, TEXT("URealTimeImportAsyncNodeCreateSoundWaveFromFile"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeCreateSoundWaveFromFile), 3669504803U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes, URealTimeImportAsyncNodeCreateSoundWaveFromBytes::StaticClass, TEXT("URealTimeImportAsyncNodeCreateSoundWaveFromBytes"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeCreateSoundWaveFromBytes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeCreateSoundWaveFromBytes), 278152172U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageFile, URealTimeImportAsyncNodeLoadImageFile::StaticClass, TEXT("URealTimeImportAsyncNodeLoadImageFile"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeLoadImageFile), 1994907733U) },
		{ Z_Construct_UClass_URealTimeImportAsyncNodeLoadImageBytes, URealTimeImportAsyncNodeLoadImageBytes::StaticClass, TEXT("URealTimeImportAsyncNodeLoadImageBytes"), &Z_Registration_Info_UClass_URealTimeImportAsyncNodeLoadImageBytes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportAsyncNodeLoadImageBytes), 26322787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_1773422939(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportAsyncNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
