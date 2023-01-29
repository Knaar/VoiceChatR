// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportMeshFBX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportMeshFBX() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshFBX();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshFBX_NoRegister();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIInformationType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXConnections();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXGeometryStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXMaterialStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXModelStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXTextureStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXVideoStruct();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIInformationType;
	static UEnum* ERTIInformationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIInformationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIInformationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIInformationType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIInformationType"));
		}
		return Z_Registration_Info_UEnum_ERTIInformationType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIInformationType>()
	{
		return ERTIInformationType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::Enumerators[] = {
		{ "ERTIInformationType::E_none", (int64)ERTIInformationType::E_none },
		{ "ERTIInformationType::E_ByPolygonVertex", (int64)ERTIInformationType::E_ByPolygonVertex },
		{ "ERTIInformationType::E_ByVertex", (int64)ERTIInformationType::E_ByVertex },
		{ "ERTIInformationType::E_ByPolygon", (int64)ERTIInformationType::E_ByPolygon },
		{ "ERTIInformationType::E_ByEdge", (int64)ERTIInformationType::E_ByEdge },
		{ "ERTIInformationType::E_AllSame", (int64)ERTIInformationType::E_AllSame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::Enum_MetaDataParams[] = {
		{ "E_AllSame.DisplayName", "AllSame" },
		{ "E_AllSame.Name", "ERTIInformationType::E_AllSame" },
		{ "E_ByEdge.DisplayName", "ByEdge" },
		{ "E_ByEdge.Name", "ERTIInformationType::E_ByEdge" },
		{ "E_ByPolygon.DisplayName", "ByPolygon" },
		{ "E_ByPolygon.Name", "ERTIInformationType::E_ByPolygon" },
		{ "E_ByPolygonVertex.DisplayName", "ByPolygonVertex" },
		{ "E_ByPolygonVertex.Name", "ERTIInformationType::E_ByPolygonVertex" },
		{ "E_ByVertex.Comment", "/*(or also ByVertice, as the Blender exporter writes.I think the author is spanish.)*/" },
		{ "E_ByVertex.DisplayName", "ByVertex" },
		{ "E_ByVertex.Name", "ERTIInformationType::E_ByVertex" },
		{ "E_ByVertex.ToolTip", "(or also ByVertice, as the Blender exporter writes.I think the author is spanish.)" },
		{ "E_none.DisplayName", "none" },
		{ "E_none.Name", "ERTIInformationType::E_none" },
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIInformationType",
		"ERTIInformationType",
		Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIInformationType()
	{
		if (!Z_Registration_Info_UEnum_ERTIInformationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIInformationType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIInformationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIInformationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIReferenceInformationType;
	static UEnum* ERTIReferenceInformationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIReferenceInformationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIReferenceInformationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIReferenceInformationType"));
		}
		return Z_Registration_Info_UEnum_ERTIReferenceInformationType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIReferenceInformationType>()
	{
		return ERTIReferenceInformationType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::Enumerators[] = {
		{ "ERTIReferenceInformationType::E_none", (int64)ERTIReferenceInformationType::E_none },
		{ "ERTIReferenceInformationType::E_Direct", (int64)ERTIReferenceInformationType::E_Direct },
		{ "ERTIReferenceInformationType::E_IndexToDirect", (int64)ERTIReferenceInformationType::E_IndexToDirect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::Enum_MetaDataParams[] = {
		{ "E_Direct.DisplayName", "Direct" },
		{ "E_Direct.Name", "ERTIReferenceInformationType::E_Direct" },
		{ "E_IndexToDirect.DisplayName", "IndexToDirect" },
		{ "E_IndexToDirect.Name", "ERTIReferenceInformationType::E_IndexToDirect" },
		{ "E_none.DisplayName", "none" },
		{ "E_none.Name", "ERTIReferenceInformationType::E_none" },
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIReferenceInformationType",
		"ERTIReferenceInformationType",
		Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType()
	{
		if (!Z_Registration_Info_UEnum_ERTIReferenceInformationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIReferenceInformationType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIReferenceInformationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIReferenceInformationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct;
class UScriptStruct* FRTIFBXVideoStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIFBXVideoStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIFBXVideoStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIFBXVideoStruct>()
{
	return FRTIFBXVideoStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIFBXVideoStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIFBXVideoStruct",
		sizeof(FRTIFBXVideoStruct),
		alignof(FRTIFBXVideoStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXVideoStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct;
class UScriptStruct* FRTIFBXTextureStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIFBXTextureStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIFBXTextureStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIFBXTextureStruct>()
{
	return FRTIFBXTextureStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIFBXTextureStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIFBXTextureStruct",
		sizeof(FRTIFBXTextureStruct),
		alignof(FRTIFBXTextureStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXTextureStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct;
class UScriptStruct* FRTIFBXMaterialStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIFBXMaterialStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIFBXMaterialStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIFBXMaterialStruct>()
{
	return FRTIFBXMaterialStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIFBXMaterialStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIFBXMaterialStruct",
		sizeof(FRTIFBXMaterialStruct),
		alignof(FRTIFBXMaterialStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXMaterialStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct;
class UScriptStruct* FRTIFBXGeometryStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIFBXGeometryStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIFBXGeometryStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIFBXGeometryStruct>()
{
	return FRTIFBXGeometryStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIFBXGeometryStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIFBXGeometryStruct",
		sizeof(FRTIFBXGeometryStruct),
		alignof(FRTIFBXGeometryStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXGeometryStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIFBXModelStruct;
class UScriptStruct* FRTIFBXModelStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIFBXModelStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIFBXModelStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIFBXModelStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIFBXModelStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIFBXModelStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIFBXModelStruct>()
{
	return FRTIFBXModelStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIFBXModelStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIFBXModelStruct",
		sizeof(FRTIFBXModelStruct),
		alignof(FRTIFBXModelStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXModelStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIFBXModelStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIFBXModelStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIFBXModelStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIFBXConnections;
class UScriptStruct* FRTIFBXConnections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIFBXConnections.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIFBXConnections.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIFBXConnections, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIFBXConnections"));
	}
	return Z_Registration_Info_UScriptStruct_RTIFBXConnections.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIFBXConnections>()
{
	return FRTIFBXConnections::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIFBXConnections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIFBXConnections>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIFBXConnections",
		sizeof(FRTIFBXConnections),
		alignof(FRTIFBXConnections),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIFBXConnections()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIFBXConnections.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIFBXConnections.InnerSingleton, Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIFBXConnections.InnerSingleton;
	}
	void URealTimeImportMeshFBX::StaticRegisterNativesURealTimeImportMeshFBX()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportMeshFBX);
	UClass* Z_Construct_UClass_URealTimeImportMeshFBX_NoRegister()
	{
		return URealTimeImportMeshFBX::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportMeshFBX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportMeshFBX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMeshFBX_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealTimeImportMeshFBX.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportMeshFBX.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportMeshFBX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportMeshFBX>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportMeshFBX_Statics::ClassParams = {
		&URealTimeImportMeshFBX::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMeshFBX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMeshFBX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportMeshFBX()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportMeshFBX.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportMeshFBX.OuterSingleton, Z_Construct_UClass_URealTimeImportMeshFBX_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportMeshFBX.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportMeshFBX>()
	{
		return URealTimeImportMeshFBX::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportMeshFBX);
	URealTimeImportMeshFBX::~URealTimeImportMeshFBX() {}
	struct Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::EnumInfo[] = {
		{ ERTIInformationType_StaticEnum, TEXT("ERTIInformationType"), &Z_Registration_Info_UEnum_ERTIInformationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3365237000U) },
		{ ERTIReferenceInformationType_StaticEnum, TEXT("ERTIReferenceInformationType"), &Z_Registration_Info_UEnum_ERTIReferenceInformationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3033477461U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::ScriptStructInfo[] = {
		{ FRTIFBXVideoStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIFBXVideoStruct_Statics::NewStructOps, TEXT("RTIFBXVideoStruct"), &Z_Registration_Info_UScriptStruct_RTIFBXVideoStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIFBXVideoStruct), 932380039U) },
		{ FRTIFBXTextureStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIFBXTextureStruct_Statics::NewStructOps, TEXT("RTIFBXTextureStruct"), &Z_Registration_Info_UScriptStruct_RTIFBXTextureStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIFBXTextureStruct), 4071099649U) },
		{ FRTIFBXMaterialStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIFBXMaterialStruct_Statics::NewStructOps, TEXT("RTIFBXMaterialStruct"), &Z_Registration_Info_UScriptStruct_RTIFBXMaterialStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIFBXMaterialStruct), 4289989650U) },
		{ FRTIFBXGeometryStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIFBXGeometryStruct_Statics::NewStructOps, TEXT("RTIFBXGeometryStruct"), &Z_Registration_Info_UScriptStruct_RTIFBXGeometryStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIFBXGeometryStruct), 2820088796U) },
		{ FRTIFBXModelStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIFBXModelStruct_Statics::NewStructOps, TEXT("RTIFBXModelStruct"), &Z_Registration_Info_UScriptStruct_RTIFBXModelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIFBXModelStruct), 4183853244U) },
		{ FRTIFBXConnections::StaticStruct, Z_Construct_UScriptStruct_FRTIFBXConnections_Statics::NewStructOps, TEXT("RTIFBXConnections"), &Z_Registration_Info_UScriptStruct_RTIFBXConnections, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIFBXConnections), 424810356U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportMeshFBX, URealTimeImportMeshFBX::StaticClass, TEXT("URealTimeImportMeshFBX"), &Z_Registration_Info_UClass_URealTimeImportMeshFBX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportMeshFBX), 4006179873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_1347401953(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshFBX_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
