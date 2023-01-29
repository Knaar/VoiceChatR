// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/FileFunctionsRealTimeImport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileFunctionsRealTimeImport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_UFileFunctionsRealTimeImport();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_UFileFunctionsRealTimeImport_NoRegister();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execBase64Decode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_base64EncodedString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileFunctionsRealTimeImport::Base64Decode(Z_Param_base64EncodedString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execBase64Encode)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileFunctionsRealTimeImport::Base64Encode(Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execcreateDirectory)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::createDirectory(ERTIDirectoryType(Z_Param_directoryType),Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execgetFilenameOnDisk)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFileFunctionsRealTimeImport::getFilenameOnDisk(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execgetAccessTimeStamp)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UFileFunctionsRealTimeImport::getAccessTimeStamp(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execsetTimeStamp)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::setTimeStamp(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execgetTimeStamp)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UFileFunctionsRealTimeImport::getTimeStamp(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execsetReadOnly)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL(Z_Param_bNewReadOnlyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::setReadOnly(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bNewReadOnlyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execmoveFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryTypeTo);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePathTo);
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryTypeFrom);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePathFrom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::moveFile(ERTIDirectoryType(Z_Param_directoryTypeTo),Z_Param_filePathTo,ERTIDirectoryType(Z_Param_directoryTypeFrom),Z_Param_filePathFrom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execisReadOnly)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::isReadOnly(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execdeleteDirectory)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::deleteDirectory(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execdeleteFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::deleteFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execfileSize)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFileFunctionsRealTimeImport::fileSize(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execdirectoryExists)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::directoryExists(ERTIDirectoryType(Z_Param_directoryType),Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execfileExists)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFileFunctionsRealTimeImport::fileExists(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execfileToBase64String)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_base64String);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_fileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::fileToBase64String(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_base64String,Z_Param_Out_fileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execbase64StringToBytes)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_base64String);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileFunctionsRealTimeImport::base64StringToBytes(ERTIDirectoryType(Z_Param_directoryType),Z_Param_base64String,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execbytesToBase64String)
	{
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_base64String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::bytesToBase64String(Z_Param_bytes,Z_Param_Out_base64String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execgetMD5FromFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MD5);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::getMD5FromFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_MD5);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execwriteStringToFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::writeStringToFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_data,Z_Param_filePath,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execreadStringFromFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::readStringFromFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execreadBytesFromFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFileFunctionsRealTimeImport::readBytesFromFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execaddBytesToFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::addBytesToFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bytes,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execwriteBytesToFile)
	{
		P_GET_ENUM(ERTIDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FStrProperty,Z_Param_filePath);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFileFunctionsRealTimeImport::writeBytesToFile(ERTIDirectoryType(Z_Param_directoryType),Z_Param_filePath,Z_Param_bytes,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFileFunctionsRealTimeImport::execgetFileFunctionsRealTimeImport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFileFunctionsRealTimeImport**)Z_Param__Result=UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport();
		P_NATIVE_END;
	}
	void UFileFunctionsRealTimeImport::StaticRegisterNativesUFileFunctionsRealTimeImport()
	{
		UClass* Class = UFileFunctionsRealTimeImport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addBytesToFile", &UFileFunctionsRealTimeImport::execaddBytesToFile },
			{ "Base64Decode", &UFileFunctionsRealTimeImport::execBase64Decode },
			{ "Base64Encode", &UFileFunctionsRealTimeImport::execBase64Encode },
			{ "base64StringToBytes", &UFileFunctionsRealTimeImport::execbase64StringToBytes },
			{ "bytesToBase64String", &UFileFunctionsRealTimeImport::execbytesToBase64String },
			{ "createDirectory", &UFileFunctionsRealTimeImport::execcreateDirectory },
			{ "deleteDirectory", &UFileFunctionsRealTimeImport::execdeleteDirectory },
			{ "deleteFile", &UFileFunctionsRealTimeImport::execdeleteFile },
			{ "directoryExists", &UFileFunctionsRealTimeImport::execdirectoryExists },
			{ "fileExists", &UFileFunctionsRealTimeImport::execfileExists },
			{ "fileSize", &UFileFunctionsRealTimeImport::execfileSize },
			{ "fileToBase64String", &UFileFunctionsRealTimeImport::execfileToBase64String },
			{ "getAccessTimeStamp", &UFileFunctionsRealTimeImport::execgetAccessTimeStamp },
			{ "getFileFunctionsRealTimeImport", &UFileFunctionsRealTimeImport::execgetFileFunctionsRealTimeImport },
			{ "getFilenameOnDisk", &UFileFunctionsRealTimeImport::execgetFilenameOnDisk },
			{ "getMD5FromFile", &UFileFunctionsRealTimeImport::execgetMD5FromFile },
			{ "getTimeStamp", &UFileFunctionsRealTimeImport::execgetTimeStamp },
			{ "isReadOnly", &UFileFunctionsRealTimeImport::execisReadOnly },
			{ "moveFile", &UFileFunctionsRealTimeImport::execmoveFile },
			{ "readBytesFromFile", &UFileFunctionsRealTimeImport::execreadBytesFromFile },
			{ "readStringFromFile", &UFileFunctionsRealTimeImport::execreadStringFromFile },
			{ "setReadOnly", &UFileFunctionsRealTimeImport::execsetReadOnly },
			{ "setTimeStamp", &UFileFunctionsRealTimeImport::execsetTimeStamp },
			{ "writeBytesToFile", &UFileFunctionsRealTimeImport::execwriteBytesToFile },
			{ "writeStringToFile", &UFileFunctionsRealTimeImport::execwriteStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventaddBytesToFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			TArray<uint8> bytes;
			bool success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventaddBytesToFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventaddBytesToFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventaddBytesToFile_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventaddBytesToFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventaddBytesToFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "addBytesToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::FileFunctionsRealTimeImport_eventaddBytesToFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics
	{
		struct FileFunctionsRealTimeImport_eventBase64Decode_Parms
		{
			FString base64EncodedString;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64EncodedString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::NewProp_base64EncodedString = { "base64EncodedString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventBase64Decode_Parms, base64EncodedString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventBase64Decode_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::NewProp_base64EncodedString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "Base64Decode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::FileFunctionsRealTimeImport_eventBase64Decode_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics
	{
		struct FileFunctionsRealTimeImport_eventBase64Encode_Parms
		{
			TArray<uint8> bytes;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventBase64Encode_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "Base64Encode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::FileFunctionsRealTimeImport_eventBase64Encode_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics
	{
		struct FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms
		{
			ERTIDirectoryType directoryType;
			FString base64String;
			bool success;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_base64String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "base64StringToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::FileFunctionsRealTimeImport_eventbase64StringToBytes_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics
	{
		struct FileFunctionsRealTimeImport_eventbytesToBase64String_Parms
		{
			TArray<uint8> bytes;
			FString base64String;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventbytesToBase64String_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventbytesToBase64String_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::NewProp_base64String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "bytesToBase64String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::FileFunctionsRealTimeImport_eventbytesToBase64String_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics
	{
		struct FileFunctionsRealTimeImport_eventcreateDirectory_Parms
		{
			ERTIDirectoryType directoryType;
			FString path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventcreateDirectory_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventcreateDirectory_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventcreateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventcreateDirectory_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Create a directory and return true if the directory was created or already existed. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Create a directory and return true if the directory was created or already existed. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "createDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::FileFunctionsRealTimeImport_eventcreateDirectory_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics
	{
		struct FileFunctionsRealTimeImport_eventdeleteDirectory_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventdeleteDirectory_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventdeleteDirectory_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventdeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventdeleteDirectory_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Delete a directory and return true if the directory was deleted or otherwise does not exist. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Delete a directory and return true if the directory was deleted or otherwise does not exist. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "deleteDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::FileFunctionsRealTimeImport_eventdeleteDirectory_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventdeleteFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventdeleteFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventdeleteFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventdeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventdeleteFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "deleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::FileFunctionsRealTimeImport_eventdeleteFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics
	{
		struct FileFunctionsRealTimeImport_eventdirectoryExists_Parms
		{
			ERTIDirectoryType directoryType;
			FString path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventdirectoryExists_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventdirectoryExists_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventdirectoryExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventdirectoryExists_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "directoryExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::FileFunctionsRealTimeImport_eventdirectoryExists_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics
	{
		struct FileFunctionsRealTimeImport_eventfileExists_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileExists_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileExists_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventfileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventfileExists_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "fileExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::FileFunctionsRealTimeImport_eventfileExists_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics
	{
		struct FileFunctionsRealTimeImport_eventfileSize_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileSize_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileSize_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "fileSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::FileFunctionsRealTimeImport_eventfileSize_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics
	{
		struct FileFunctionsRealTimeImport_eventfileToBase64String_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool success;
			FString base64String;
			FString fileName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_base64String;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileToBase64String_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileToBase64String_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventfileToBase64String_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventfileToBase64String_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_base64String = { "base64String", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileToBase64String_Parms, base64String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventfileToBase64String_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_base64String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::NewProp_fileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "fileToBase64String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::FileFunctionsRealTimeImport_eventfileToBase64String_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics
	{
		struct FileFunctionsRealTimeImport_eventgetAccessTimeStamp_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetAccessTimeStamp_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetAccessTimeStamp_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetAccessTimeStamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Return the last access time of a file. Returns FDateTime::MinValue() on failure **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Return the last access time of a file. Returns FDateTime::MinValue() on failure *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "getAccessTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::FileFunctionsRealTimeImport_eventgetAccessTimeStamp_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics
	{
		struct FileFunctionsRealTimeImport_eventgetFileFunctionsRealTimeImport_Parms
		{
			UFileFunctionsRealTimeImport* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetFileFunctionsRealTimeImport_Parms, ReturnValue), Z_Construct_UClass_UFileFunctionsRealTimeImport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "getFileFunctionsRealTimeImport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::FileFunctionsRealTimeImport_eventgetFileFunctionsRealTimeImport_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics
	{
		struct FileFunctionsRealTimeImport_eventgetFilenameOnDisk_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetFilenameOnDisk_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetFilenameOnDisk_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetFilenameOnDisk_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** For case insensitive filesystems, returns the full path of the file with the same case as in the filesystem */" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "For case insensitive filesystems, returns the full path of the file with the same case as in the filesystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "getFilenameOnDisk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::FileFunctionsRealTimeImport_eventgetFilenameOnDisk_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool success;
			FString MD5;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MD5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_MD5 = { "MD5", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms, MD5), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::NewProp_MD5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "getMD5FromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::FileFunctionsRealTimeImport_eventgetMD5FromFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics
	{
		struct FileFunctionsRealTimeImport_eventgetTimeStamp_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetTimeStamp_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetTimeStamp_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventgetTimeStamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Return the modification time of a file. Returns FDateTime::MinValue() on failure **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Return the modification time of a file. Returns FDateTime::MinValue() on failure *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "getTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::FileFunctionsRealTimeImport_eventgetTimeStamp_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics
	{
		struct FileFunctionsRealTimeImport_eventisReadOnly_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventisReadOnly_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventisReadOnly_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventisReadOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventisReadOnly_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Return true if the file is read only. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Return true if the file is read only. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "isReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::FileFunctionsRealTimeImport_eventisReadOnly_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventmoveFile_Parms
		{
			ERTIDirectoryType directoryTypeTo;
			FString filePathTo;
			ERTIDirectoryType directoryTypeFrom;
			FString filePathFrom;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryTypeTo_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryTypeTo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePathTo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryTypeFrom_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryTypeFrom;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePathFrom;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeTo = { "directoryTypeTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventmoveFile_Parms, directoryTypeTo), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_filePathTo = { "filePathTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventmoveFile_Parms, filePathTo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeFrom = { "directoryTypeFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventmoveFile_Parms, directoryTypeFrom), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_filePathFrom = { "filePathFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventmoveFile_Parms, filePathFrom), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventmoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventmoveFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeTo_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_filePathTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeFrom_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_directoryTypeFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_filePathFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Attempt to move a file. Return true if successful. Will not overwrite existing files. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Attempt to move a file. Return true if successful. Will not overwrite existing files. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "moveFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::FileFunctionsRealTimeImport_eventmoveFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool success;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"RealTimeImport|File\")\n//\x09static void splittFile(ERTIDirectoryType directoryType, FString filePath, int32 parts, bool& success);\n" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"RealTimeImport|File\")\n       static void splittFile(ERTIDirectoryType directoryType, FString filePath, int32 parts, bool& success);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "readBytesFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::FileFunctionsRealTimeImport_eventreadBytesFromFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventreadStringFromFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool success;
			FString data;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventreadStringFromFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventreadStringFromFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventreadStringFromFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventreadStringFromFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventreadStringFromFile_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "readStringFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::FileFunctionsRealTimeImport_eventreadStringFromFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics
	{
		struct FileFunctionsRealTimeImport_eventsetReadOnly_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			bool bNewReadOnlyValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_bNewReadOnlyValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewReadOnlyValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventsetReadOnly_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventsetReadOnly_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_bNewReadOnlyValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventsetReadOnly_Parms*)Obj)->bNewReadOnlyValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_bNewReadOnlyValue = { "bNewReadOnlyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventsetReadOnly_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_bNewReadOnlyValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventsetReadOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventsetReadOnly_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_bNewReadOnlyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Attempt to change the read only status of a file. Return true if successful. **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Attempt to change the read only status of a file. Return true if successful. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "setReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::FileFunctionsRealTimeImport_eventsetReadOnly_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics
	{
		struct FileFunctionsRealTimeImport_eventsetTimeStamp_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			FDateTime DateTime;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventsetTimeStamp_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventsetTimeStamp_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventsetTimeStamp_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::NewProp_DateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "Comment", "/** Sets the modification time of a file **/" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
		{ "ToolTip", "Sets the modification time of a file *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "setTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::FileFunctionsRealTimeImport_eventsetTimeStamp_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString filePath;
			TArray<uint8> bytes;
			bool success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "writeBytesToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::FileFunctionsRealTimeImport_eventwriteBytesToFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics
	{
		struct FileFunctionsRealTimeImport_eventwriteStringToFile_Parms
		{
			ERTIDirectoryType directoryType;
			FString data;
			FString filePath;
			bool success;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filePath;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventwriteStringToFile_Parms, directoryType), Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, METADATA_PARAMS(nullptr, 0) }; // 2496365233
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventwriteStringToFile_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_filePath = { "filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileFunctionsRealTimeImport_eventwriteStringToFile_Parms, filePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_success_SetBit(void* Obj)
	{
		((FileFunctionsRealTimeImport_eventwriteStringToFile_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FileFunctionsRealTimeImport_eventwriteStringToFile_Parms), &Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_directoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_directoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|File" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileFunctionsRealTimeImport, nullptr, "writeStringToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::FileFunctionsRealTimeImport_eventwriteStringToFile_Parms), Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileFunctionsRealTimeImport);
	UClass* Z_Construct_UClass_UFileFunctionsRealTimeImport_NoRegister()
	{
		return UFileFunctionsRealTimeImport::StaticClass();
	}
	struct Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_addBytesToFile, "addBytesToFile" }, // 4130135578
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Decode, "Base64Decode" }, // 2400392594
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_Base64Encode, "Base64Encode" }, // 878838386
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_base64StringToBytes, "base64StringToBytes" }, // 2604170806
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_bytesToBase64String, "bytesToBase64String" }, // 2727126649
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_createDirectory, "createDirectory" }, // 2766723597
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteDirectory, "deleteDirectory" }, // 2285131953
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_deleteFile, "deleteFile" }, // 4258764673
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_directoryExists, "directoryExists" }, // 387999728
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileExists, "fileExists" }, // 3594788533
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileSize, "fileSize" }, // 3369339938
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_fileToBase64String, "fileToBase64String" }, // 1443900237
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_getAccessTimeStamp, "getAccessTimeStamp" }, // 1529388073
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFileFunctionsRealTimeImport, "getFileFunctionsRealTimeImport" }, // 2442100370
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_getFilenameOnDisk, "getFilenameOnDisk" }, // 3563441214
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_getMD5FromFile, "getMD5FromFile" }, // 3510982866
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_getTimeStamp, "getTimeStamp" }, // 233294370
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_isReadOnly, "isReadOnly" }, // 1325873264
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_moveFile, "moveFile" }, // 3402209586
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_readBytesFromFile, "readBytesFromFile" }, // 1151516918
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_readStringFromFile, "readStringFromFile" }, // 4004870726
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_setReadOnly, "setReadOnly" }, // 2234739417
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_setTimeStamp, "setTimeStamp" }, // 1296759097
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeBytesToFile, "writeBytesToFile" }, // 4035518318
		{ &Z_Construct_UFunction_UFileFunctionsRealTimeImport_writeStringToFile, "writeStringToFile" }, // 2531651390
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileFunctionsRealTimeImport.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileFunctionsRealTimeImport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileFunctionsRealTimeImport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::ClassParams = {
		&UFileFunctionsRealTimeImport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileFunctionsRealTimeImport()
	{
		if (!Z_Registration_Info_UClass_UFileFunctionsRealTimeImport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileFunctionsRealTimeImport.OuterSingleton, Z_Construct_UClass_UFileFunctionsRealTimeImport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileFunctionsRealTimeImport.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<UFileFunctionsRealTimeImport>()
	{
		return UFileFunctionsRealTimeImport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileFunctionsRealTimeImport);
	UFileFunctionsRealTimeImport::~UFileFunctionsRealTimeImport() {}
	struct Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileFunctionsRealTimeImport, UFileFunctionsRealTimeImport::StaticClass, TEXT("UFileFunctionsRealTimeImport"), &Z_Registration_Info_UClass_UFileFunctionsRealTimeImport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileFunctionsRealTimeImport), 1493653152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_1420522504(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_FileFunctionsRealTimeImport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
