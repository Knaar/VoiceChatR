// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImport() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIExportImageType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIFileType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTIMeshType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTISoundFileType();
	REALTIMEIMPORT_API UEnum* Z_Construct_UEnum_RealTimeImport_ERTITextureType();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIMaterialStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIMeshStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIModelStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTISoundDataStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTITextureStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIDirectoryType;
	static UEnum* ERTIDirectoryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIDirectoryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIDirectoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIDirectoryType"));
		}
		return Z_Registration_Info_UEnum_ERTIDirectoryType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIDirectoryType>()
	{
		return ERTIDirectoryType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::Enumerators[] = {
		{ "ERTIDirectoryType::E_gd", (int64)ERTIDirectoryType::E_gd },
		{ "ERTIDirectoryType::E_ad", (int64)ERTIDirectoryType::E_ad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_ad.DisplayName", "Absolute directory" },
		{ "E_ad.Name", "ERTIDirectoryType::E_ad" },
		{ "E_gd.DisplayName", "Game directory" },
		{ "E_gd.Name", "ERTIDirectoryType::E_gd" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIDirectoryType",
		"ERTIDirectoryType",
		Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType()
	{
		if (!Z_Registration_Info_UEnum_ERTIDirectoryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIDirectoryType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIDirectoryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIDirectoryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTISoundFileType;
	static UEnum* ERTISoundFileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTISoundFileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTISoundFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTISoundFileType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTISoundFileType"));
		}
		return Z_Registration_Info_UEnum_ERTISoundFileType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTISoundFileType>()
	{
		return ERTISoundFileType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::Enumerators[] = {
		{ "ERTISoundFileType::E_wav", (int64)ERTISoundFileType::E_wav },
		{ "ERTISoundFileType::E_ogg", (int64)ERTISoundFileType::E_ogg },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_ogg.DisplayName", "OGG" },
		{ "E_ogg.Name", "ERTISoundFileType::E_ogg" },
		{ "E_wav.DisplayName", "WAV" },
		{ "E_wav.Name", "ERTISoundFileType::E_wav" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTISoundFileType",
		"ERTISoundFileType",
		Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTISoundFileType()
	{
		if (!Z_Registration_Info_UEnum_ERTISoundFileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTISoundFileType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTISoundFileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTISoundFileType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIExportImageType;
	static UEnum* ERTIExportImageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIExportImageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIExportImageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIExportImageType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIExportImageType"));
		}
		return Z_Registration_Info_UEnum_ERTIExportImageType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIExportImageType>()
	{
		return ERTIExportImageType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::Enumerators[] = {
		{ "ERTIExportImageType::E_png", (int64)ERTIExportImageType::E_png },
		{ "ERTIExportImageType::E_bmp", (int64)ERTIExportImageType::E_bmp },
		{ "ERTIExportImageType::E_jpg", (int64)ERTIExportImageType::E_jpg },
		{ "ERTIExportImageType::E_exr", (int64)ERTIExportImageType::E_exr },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_bmp.DisplayName", "BMP" },
		{ "E_bmp.Name", "ERTIExportImageType::E_bmp" },
		{ "E_exr.DisplayName", "EXR" },
		{ "E_exr.Name", "ERTIExportImageType::E_exr" },
		{ "E_jpg.DisplayName", "JPG" },
		{ "E_jpg.Name", "ERTIExportImageType::E_jpg" },
		{ "E_png.DisplayName", "PNG" },
		{ "E_png.Name", "ERTIExportImageType::E_png" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIExportImageType",
		"ERTIExportImageType",
		Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIExportImageType()
	{
		if (!Z_Registration_Info_UEnum_ERTIExportImageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIExportImageType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIExportImageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIExportImageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIMeshType;
	static UEnum* ERTIMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIMeshType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIMeshType"));
		}
		return Z_Registration_Info_UEnum_ERTIMeshType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIMeshType>()
	{
		return ERTIMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::Enumerators[] = {
		{ "ERTIMeshType::E_obj", (int64)ERTIMeshType::E_obj },
		{ "ERTIMeshType::E_fbx", (int64)ERTIMeshType::E_fbx },
		{ "ERTIMeshType::E_stl", (int64)ERTIMeshType::E_stl },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_fbx.DisplayName", "FBX Binary" },
		{ "E_fbx.Name", "ERTIMeshType::E_fbx" },
		{ "E_obj.DisplayName", "OBJ" },
		{ "E_obj.Name", "ERTIMeshType::E_obj" },
		{ "E_stl.DisplayName", "STL" },
		{ "E_stl.Name", "ERTIMeshType::E_stl" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIMeshType",
		"ERTIMeshType",
		Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIMeshType()
	{
		if (!Z_Registration_Info_UEnum_ERTIMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIMeshType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIMeshType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIMeshExportType;
	static UEnum* ERTIMeshExportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIMeshExportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIMeshExportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIMeshExportType"));
		}
		return Z_Registration_Info_UEnum_ERTIMeshExportType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIMeshExportType>()
	{
		return ERTIMeshExportType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::Enumerators[] = {
		{ "ERTIMeshExportType::E_obj", (int64)ERTIMeshExportType::E_obj },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_obj.DisplayName", "OBJ" },
		{ "E_obj.Name", "ERTIMeshExportType::E_obj" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIMeshExportType",
		"ERTIMeshExportType",
		Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType()
	{
		if (!Z_Registration_Info_UEnum_ERTIMeshExportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIMeshExportType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIMeshExportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIMeshExportType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTITextureType;
	static UEnum* ERTITextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTITextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTITextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTITextureType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTITextureType"));
		}
		return Z_Registration_Info_UEnum_ERTITextureType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTITextureType>()
	{
		return ERTITextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::Enumerators[] = {
		{ "ERTITextureType::E_none", (int64)ERTITextureType::E_none },
		{ "ERTITextureType::E_un", (int64)ERTITextureType::E_un },
		{ "ERTITextureType::E_Kd", (int64)ERTITextureType::E_Kd },
		{ "ERTITextureType::E_Ks", (int64)ERTITextureType::E_Ks },
		{ "ERTITextureType::E_Ns", (int64)ERTITextureType::E_Ns },
		{ "ERTITextureType::E_d", (int64)ERTITextureType::E_d },
		{ "ERTITextureType::E_bump", (int64)ERTITextureType::E_bump },
		{ "ERTITextureType::E_disp", (int64)ERTITextureType::E_disp },
		{ "ERTITextureType::E_decal", (int64)ERTITextureType::E_decal },
		{ "ERTITextureType::E_refl", (int64)ERTITextureType::E_refl },
		{ "ERTITextureType::E_Pr", (int64)ERTITextureType::E_Pr },
		{ "ERTITextureType::E_Pm", (int64)ERTITextureType::E_Pm },
		{ "ERTITextureType::E_Ps", (int64)ERTITextureType::E_Ps },
		{ "ERTITextureType::E_Pc", (int64)ERTITextureType::E_Pc },
		{ "ERTITextureType::E_Pcr", (int64)ERTITextureType::E_Pcr },
		{ "ERTITextureType::E_Ke", (int64)ERTITextureType::E_Ke },
		{ "ERTITextureType::E_aniso", (int64)ERTITextureType::E_aniso },
		{ "ERTITextureType::E_anisor", (int64)ERTITextureType::E_anisor },
		{ "ERTITextureType::E_norm", (int64)ERTITextureType::E_norm },
		{ "ERTITextureType::E_RMA", (int64)ERTITextureType::E_RMA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_aniso.DisplayName", "Anisotropy" },
		{ "E_aniso.Name", "ERTITextureType::E_aniso" },
		{ "E_anisor.DisplayName", "AnisotropyRotation" },
		{ "E_anisor.Name", "ERTITextureType::E_anisor" },
		{ "E_bump.DisplayName", "BumpOrNormal" },
		{ "E_bump.Name", "ERTITextureType::E_bump" },
		{ "E_d.DisplayName", "Alpha" },
		{ "E_d.Name", "ERTITextureType::E_d" },
		{ "E_decal.DisplayName", "StencilDecal" },
		{ "E_decal.Name", "ERTITextureType::E_decal" },
		{ "E_disp.DisplayName", "Displacement" },
		{ "E_disp.Name", "ERTITextureType::E_disp" },
		{ "E_Kd.DisplayName", "Diffuse" },
		{ "E_Kd.Name", "ERTITextureType::E_Kd" },
		{ "E_Ke.DisplayName", "Emissive" },
		{ "E_Ke.Name", "ERTITextureType::E_Ke" },
		{ "E_Ks.DisplayName", "Specular" },
		{ "E_Ks.Name", "ERTITextureType::E_Ks" },
		{ "E_none.DisplayName", "none" },
		{ "E_none.Name", "ERTITextureType::E_none" },
		{ "E_norm.DisplayName", "Normal" },
		{ "E_norm.Name", "ERTITextureType::E_norm" },
		{ "E_Ns.DisplayName", "SpecularHighlightComponent" },
		{ "E_Ns.Name", "ERTITextureType::E_Ns" },
		{ "E_Pc.DisplayName", "ClearcoatThickness" },
		{ "E_Pc.Name", "ERTITextureType::E_Pc" },
		{ "E_Pcr.DisplayName", "ClearcoatRoughness" },
		{ "E_Pcr.Name", "ERTITextureType::E_Pcr" },
		{ "E_Pm.DisplayName", "Metallic" },
		{ "E_Pm.Name", "ERTITextureType::E_Pm" },
		{ "E_Pr.DisplayName", "Roughness" },
		{ "E_Pr.Name", "ERTITextureType::E_Pr" },
		{ "E_Ps.DisplayName", "Sheen" },
		{ "E_Ps.Name", "ERTITextureType::E_Ps" },
		{ "E_refl.DisplayName", "Reflection" },
		{ "E_refl.Name", "ERTITextureType::E_refl" },
		{ "E_RMA.DisplayName", "Microsoft_RMA" },
		{ "E_RMA.Name", "ERTITextureType::E_RMA" },
		{ "E_un.DisplayName", "Unknown" },
		{ "E_un.Name", "ERTITextureType::E_un" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTITextureType",
		"ERTITextureType",
		Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTITextureType()
	{
		if (!Z_Registration_Info_UEnum_ERTITextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTITextureType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTITextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTITextureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTIFileType;
	static UEnum* ERTIFileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTIFileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTIFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTIFileType, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTIFileType"));
		}
		return Z_Registration_Info_UEnum_ERTIFileType.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIFileType>()
	{
		return ERTIFileType_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::Enumerators[] = {
		{ "ERTIFileType::E_wav", (int64)ERTIFileType::E_wav },
		{ "ERTIFileType::E_ogg", (int64)ERTIFileType::E_ogg },
		{ "ERTIFileType::E_png", (int64)ERTIFileType::E_png },
		{ "ERTIFileType::E_bmp", (int64)ERTIFileType::E_bmp },
		{ "ERTIFileType::E_jpg", (int64)ERTIFileType::E_jpg },
		{ "ERTIFileType::E_exr", (int64)ERTIFileType::E_exr },
		{ "ERTIFileType::E_obj", (int64)ERTIFileType::E_obj },
		{ "ERTIFileType::E_fbx", (int64)ERTIFileType::E_fbx },
		{ "ERTIFileType::E_stl", (int64)ERTIFileType::E_stl },
		{ "ERTIFileType::E_all", (int64)ERTIFileType::E_all },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_all.DisplayName", "ALL" },
		{ "E_all.Name", "ERTIFileType::E_all" },
		{ "E_bmp.DisplayName", "BMP" },
		{ "E_bmp.Name", "ERTIFileType::E_bmp" },
		{ "E_exr.DisplayName", "EXR" },
		{ "E_exr.Name", "ERTIFileType::E_exr" },
		{ "E_fbx.DisplayName", "FBX" },
		{ "E_fbx.Name", "ERTIFileType::E_fbx" },
		{ "E_jpg.DisplayName", "JPG" },
		{ "E_jpg.Name", "ERTIFileType::E_jpg" },
		{ "E_obj.DisplayName", "OBJ" },
		{ "E_obj.Name", "ERTIFileType::E_obj" },
		{ "E_ogg.DisplayName", "OGG" },
		{ "E_ogg.Name", "ERTIFileType::E_ogg" },
		{ "E_png.DisplayName", "PNG" },
		{ "E_png.Name", "ERTIFileType::E_png" },
		{ "E_stl.DisplayName", "STL" },
		{ "E_stl.Name", "ERTIFileType::E_stl" },
		{ "E_wav.DisplayName", "WAV" },
		{ "E_wav.Name", "ERTIFileType::E_wav" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTIFileType",
		"ERTIFileType",
		Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTIFileType()
	{
		if (!Z_Registration_Info_UEnum_ERTIFileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTIFileType.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTIFileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTIFileType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTICoordinateSystem;
	static UEnum* ERTICoordinateSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTICoordinateSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTICoordinateSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("ERTICoordinateSystem"));
		}
		return Z_Registration_Info_UEnum_ERTICoordinateSystem.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTICoordinateSystem>()
	{
		return ERTICoordinateSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::Enumerators[] = {
		{ "ERTICoordinateSystem::E_RightHanded", (int64)ERTICoordinateSystem::E_RightHanded },
		{ "ERTICoordinateSystem::E_LeftHanded", (int64)ERTICoordinateSystem::E_LeftHanded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_LeftHanded.DisplayName", "Left-handed" },
		{ "E_LeftHanded.Name", "ERTICoordinateSystem::E_LeftHanded" },
		{ "E_RightHanded.DisplayName", "Right-handed" },
		{ "E_RightHanded.Name", "ERTICoordinateSystem::E_RightHanded" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		"ERTICoordinateSystem",
		"ERTICoordinateSystem",
		Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem()
	{
		if (!Z_Registration_Info_UEnum_ERTICoordinateSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTICoordinateSystem.InnerSingleton, Z_Construct_UEnum_RealTimeImport_ERTICoordinateSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTICoordinateSystem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTITextureStruct;
class UScriptStruct* FRTITextureStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTITextureStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTITextureStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTITextureStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTITextureStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTITextureStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTITextureStruct>()
{
	return FRTITextureStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTITextureStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_textureName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_textureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_textureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fbxID_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fbxID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTITextureStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTITextureStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureName = { "textureName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTITextureStruct, textureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType = { "textureType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTITextureStruct, textureType), Z_Construct_UEnum_RealTimeImport_ERTITextureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType_MetaData)) }; // 2810687149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_fbxID_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_fbxID = { "fbxID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTITextureStruct, fbxID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_fbxID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_fbxID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTITextureStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_textureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewProp_fbxID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTITextureStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTITextureStruct",
		sizeof(FRTITextureStruct),
		alignof(FRTITextureStruct),
		Z_Construct_UScriptStruct_FRTITextureStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTITextureStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTITextureStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTITextureStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTITextureStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTITextureStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTITextureStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIMaterialStruct;
class UScriptStruct* FRTIMaterialStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIMaterialStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIMaterialStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIMaterialStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIMaterialStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIMaterialStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIMaterialStruct>()
{
	return FRTIMaterialStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isEmpty_MetaData[];
#endif
		static void NewProp_isEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isEmpty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_materialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_textureName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_textures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_textures;
		static const UECodeGen_Private::FStrPropertyParams NewProp_texturesFileNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texturesFileNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_texturesFileNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ambient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ambient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_diffuse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_diffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_specular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_specularExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_specularExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dissolved_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dissolved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dissolvedInverted_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dissolvedInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fbxID_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_fbxID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIMaterialStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty_SetBit(void* Obj)
	{
		((FRTIMaterialStruct*)Obj)->isEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty = { "isEmpty", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRTIMaterialStruct), &Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_materialName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, materialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_materialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_materialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textureName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textureName = { "textureName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, textureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textureName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_ValueProp = { "textures", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRTITextureStruct, METADATA_PARAMS(nullptr, 0) }; // 145284957
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_Key_KeyProp = { "textures_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures = { "textures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, textures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_MetaData)) }; // 145284957
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames_Inner = { "texturesFileNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames = { "texturesFileNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, texturesFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_ambient_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_ambient = { "ambient", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, ambient), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_ambient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_ambient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_diffuse_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_diffuse = { "diffuse", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, diffuse), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_diffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_diffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specular_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specular = { "specular", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, specular), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specularExponent_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specularExponent = { "specularExponent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, specularExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specularExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specularExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolved_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolved = { "dissolved", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, dissolved), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolvedInverted_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolvedInverted = { "dissolvedInverted", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, dissolvedInverted), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolvedInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolvedInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_fbxID_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_fbxID = { "fbxID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMaterialStruct, fbxID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_fbxID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_fbxID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_isEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_materialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_texturesFileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_ambient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_diffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_specularExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_dissolvedInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewProp_fbxID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIMaterialStruct",
		sizeof(FRTIMaterialStruct),
		alignof(FRTIMaterialStruct),
		Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIMaterialStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIMaterialStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIMaterialStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIMaterialStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIMeshStruct;
class UScriptStruct* FRTIMeshStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIMeshStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIMeshStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIMeshStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIMeshStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIMeshStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIMeshStruct>()
{
	return FRTIMeshStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIMeshStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_geometryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_geometryName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasMaterialData_MetaData[];
#endif
		static void NewProp_hasMaterialData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasMaterialData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIMeshStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_geometryName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_geometryName = { "geometryName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, geometryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_geometryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_geometryName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles_Inner = { "triangles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles = { "triangles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals_Inner = { "normals", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals = { "normals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, vertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData_SetBit(void* Obj)
	{
		((FRTIMeshStruct*)Obj)->hasMaterialData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData = { "hasMaterialData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRTIMeshStruct), &Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_materialData_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_materialData = { "materialData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIMeshStruct, materialData), Z_Construct_UScriptStruct_FRTIMaterialStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_materialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_materialData_MetaData)) }; // 3673852028
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_geometryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_vertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_hasMaterialData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewProp_materialData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIMeshStruct",
		sizeof(FRTIMeshStruct),
		alignof(FRTIMeshStruct),
		Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIMeshStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIMeshStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIMeshStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIMeshStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIModelStruct;
class UScriptStruct* FRTIModelStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIModelStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIModelStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIModelStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIModelStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIModelStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIModelStruct>()
{
	return FRTIModelStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIModelStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_relativeTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIModelStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIModelStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIModelStruct, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_relativeTransform_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_relativeTransform = { "relativeTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIModelStruct, relativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_relativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_relativeTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs_Inner = { "meshStructs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRTIMeshStruct, METADATA_PARAMS(nullptr, 0) }; // 3405834754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs = { "meshStructs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRTIModelStruct, meshStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs_MetaData)) }; // 3405834754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTIModelStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_relativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewProp_meshStructs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIModelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIModelStruct",
		sizeof(FRTIModelStruct),
		alignof(FRTIModelStruct),
		Z_Construct_UScriptStruct_FRTIModelStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIModelStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIModelStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIModelStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIModelStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIModelStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIModelStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct;
class UScriptStruct* FRTIWavPlayAsyncStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTIWavPlayAsyncStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTIWavPlayAsyncStruct>()
{
	return FRTIWavPlayAsyncStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTIWavPlayAsyncStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTIWavPlayAsyncStruct",
		sizeof(FRTIWavPlayAsyncStruct),
		alignof(FRTIWavPlayAsyncStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTISoundDataStruct;
class UScriptStruct* FRTISoundDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTISoundDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTISoundDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTISoundDataStruct, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("RTISoundDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RTISoundDataStruct.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FRTISoundDataStruct>()
{
	return FRTISoundDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTISoundDataStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"RTISoundDataStruct",
		sizeof(FRTISoundDataStruct),
		alignof(FRTISoundDataStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRTISoundDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RTISoundDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTISoundDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RTISoundDataStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData;
class UScriptStruct* FSRealtimeImportThreadJobData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData, Z_Construct_UPackage__Script_RealTimeImport(), TEXT("SRealtimeImportThreadJobData"));
	}
	return Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData.OuterSingleton;
}
template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<FSRealtimeImportThreadJobData>()
{
	return FSRealtimeImportThreadJobData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSRealtimeImportThreadJobData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
		nullptr,
		&NewStructOps,
		"SRealtimeImportThreadJobData",
		sizeof(FSRealtimeImportThreadJobData),
		alignof(FSRealtimeImportThreadJobData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData()
	{
		if (!Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData.InnerSingleton, Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics::EnumInfo[] = {
		{ ERTIDirectoryType_StaticEnum, TEXT("ERTIDirectoryType"), &Z_Registration_Info_UEnum_ERTIDirectoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2496365233U) },
		{ ERTISoundFileType_StaticEnum, TEXT("ERTISoundFileType"), &Z_Registration_Info_UEnum_ERTISoundFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1472880048U) },
		{ ERTIExportImageType_StaticEnum, TEXT("ERTIExportImageType"), &Z_Registration_Info_UEnum_ERTIExportImageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2510432228U) },
		{ ERTIMeshType_StaticEnum, TEXT("ERTIMeshType"), &Z_Registration_Info_UEnum_ERTIMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3634431585U) },
		{ ERTIMeshExportType_StaticEnum, TEXT("ERTIMeshExportType"), &Z_Registration_Info_UEnum_ERTIMeshExportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3012574829U) },
		{ ERTITextureType_StaticEnum, TEXT("ERTITextureType"), &Z_Registration_Info_UEnum_ERTITextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2810687149U) },
		{ ERTIFileType_StaticEnum, TEXT("ERTIFileType"), &Z_Registration_Info_UEnum_ERTIFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4129308719U) },
		{ ERTICoordinateSystem_StaticEnum, TEXT("ERTICoordinateSystem"), &Z_Registration_Info_UEnum_ERTICoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3212256354U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics::ScriptStructInfo[] = {
		{ FRTITextureStruct::StaticStruct, Z_Construct_UScriptStruct_FRTITextureStruct_Statics::NewStructOps, TEXT("RTITextureStruct"), &Z_Registration_Info_UScriptStruct_RTITextureStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTITextureStruct), 145284957U) },
		{ FRTIMaterialStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics::NewStructOps, TEXT("RTIMaterialStruct"), &Z_Registration_Info_UScriptStruct_RTIMaterialStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIMaterialStruct), 3673852028U) },
		{ FRTIMeshStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIMeshStruct_Statics::NewStructOps, TEXT("RTIMeshStruct"), &Z_Registration_Info_UScriptStruct_RTIMeshStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIMeshStruct), 3405834754U) },
		{ FRTIModelStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIModelStruct_Statics::NewStructOps, TEXT("RTIModelStruct"), &Z_Registration_Info_UScriptStruct_RTIModelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIModelStruct), 779002880U) },
		{ FRTIWavPlayAsyncStruct::StaticStruct, Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics::NewStructOps, TEXT("RTIWavPlayAsyncStruct"), &Z_Registration_Info_UScriptStruct_RTIWavPlayAsyncStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTIWavPlayAsyncStruct), 1905068828U) },
		{ FRTISoundDataStruct::StaticStruct, Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics::NewStructOps, TEXT("RTISoundDataStruct"), &Z_Registration_Info_UScriptStruct_RTISoundDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTISoundDataStruct), 4111946736U) },
		{ FSRealtimeImportThreadJobData::StaticStruct, Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics::NewStructOps, TEXT("SRealtimeImportThreadJobData"), &Z_Registration_Info_UScriptStruct_SRealtimeImportThreadJobData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSRealtimeImportThreadJobData), 2926770002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_1761781238(TEXT("/Script/RealTimeImport"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
