// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealTimeImport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REALTIMEIMPORT_RealTimeImport_generated_h
#error "RealTimeImport.generated.h already included, missing '#pragma once' in RealTimeImport.h"
#endif
#define REALTIMEIMPORT_RealTimeImport_generated_h

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTITextureStruct_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FRTITextureStruct>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTIMaterialStruct_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FRTIMaterialStruct>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTIMeshStruct_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FRTIMeshStruct>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTIModelStruct_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FRTIModelStruct>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTIWavPlayAsyncStruct_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FRTIWavPlayAsyncStruct>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTISoundDataStruct_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FRTISoundDataStruct>();

#define FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h_307_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSRealtimeImportThreadJobData_Statics; \
	REALTIMEIMPORT_API static class UScriptStruct* StaticStruct();


template<> REALTIMEIMPORT_API UScriptStruct* StaticStruct<struct FSRealtimeImportThreadJobData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImport_h


#define FOREACH_ENUM_ERTIDIRECTORYTYPE(op) \
	op(ERTIDirectoryType::E_gd) \
	op(ERTIDirectoryType::E_ad) 

enum class ERTIDirectoryType : uint8;
template<> struct TIsUEnumClass<ERTIDirectoryType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIDirectoryType>();

#define FOREACH_ENUM_ERTISOUNDFILETYPE(op) \
	op(ERTISoundFileType::E_wav) \
	op(ERTISoundFileType::E_ogg) 

enum class ERTISoundFileType : uint8;
template<> struct TIsUEnumClass<ERTISoundFileType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTISoundFileType>();

#define FOREACH_ENUM_ERTIEXPORTIMAGETYPE(op) \
	op(ERTIExportImageType::E_png) \
	op(ERTIExportImageType::E_bmp) \
	op(ERTIExportImageType::E_jpg) \
	op(ERTIExportImageType::E_exr) 

enum class ERTIExportImageType : uint8;
template<> struct TIsUEnumClass<ERTIExportImageType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIExportImageType>();

#define FOREACH_ENUM_ERTIMESHTYPE(op) \
	op(ERTIMeshType::E_obj) \
	op(ERTIMeshType::E_fbx) \
	op(ERTIMeshType::E_stl) 

enum class ERTIMeshType : uint8;
template<> struct TIsUEnumClass<ERTIMeshType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIMeshType>();

#define FOREACH_ENUM_ERTIMESHEXPORTTYPE(op) \
	op(ERTIMeshExportType::E_obj) 

enum class ERTIMeshExportType : uint8;
template<> struct TIsUEnumClass<ERTIMeshExportType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIMeshExportType>();

#define FOREACH_ENUM_ERTITEXTURETYPE(op) \
	op(ERTITextureType::E_none) \
	op(ERTITextureType::E_un) \
	op(ERTITextureType::E_Kd) \
	op(ERTITextureType::E_Ks) \
	op(ERTITextureType::E_Ns) \
	op(ERTITextureType::E_d) \
	op(ERTITextureType::E_bump) \
	op(ERTITextureType::E_disp) \
	op(ERTITextureType::E_decal) \
	op(ERTITextureType::E_refl) \
	op(ERTITextureType::E_Pr) \
	op(ERTITextureType::E_Pm) \
	op(ERTITextureType::E_Ps) \
	op(ERTITextureType::E_Pc) \
	op(ERTITextureType::E_Pcr) \
	op(ERTITextureType::E_Ke) \
	op(ERTITextureType::E_aniso) \
	op(ERTITextureType::E_anisor) \
	op(ERTITextureType::E_norm) \
	op(ERTITextureType::E_RMA) 

enum class ERTITextureType : uint8;
template<> struct TIsUEnumClass<ERTITextureType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTITextureType>();

#define FOREACH_ENUM_ERTIFILETYPE(op) \
	op(ERTIFileType::E_wav) \
	op(ERTIFileType::E_ogg) \
	op(ERTIFileType::E_png) \
	op(ERTIFileType::E_bmp) \
	op(ERTIFileType::E_jpg) \
	op(ERTIFileType::E_exr) \
	op(ERTIFileType::E_obj) \
	op(ERTIFileType::E_fbx) \
	op(ERTIFileType::E_stl) \
	op(ERTIFileType::E_all) 

enum class ERTIFileType : uint8;
template<> struct TIsUEnumClass<ERTIFileType> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTIFileType>();

#define FOREACH_ENUM_ERTICOORDINATESYSTEM(op) \
	op(ERTICoordinateSystem::E_RightHanded) \
	op(ERTICoordinateSystem::E_LeftHanded) 

enum class ERTICoordinateSystem : uint8;
template<> struct TIsUEnumClass<ERTICoordinateSystem> { enum { Value = true }; };
template<> REALTIMEIMPORT_API UEnum* StaticEnum<ERTICoordinateSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
