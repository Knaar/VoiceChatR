// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
class URealTimeImportImage;
#ifdef REALTIMEIMPORT_RealTimeImportImage_generated_h
#error "RealTimeImportImage.generated.h already included, missing '#pragma once' in RealTimeImportImage.h"
#endif
#define REALTIMEIMPORT_RealTimeImportImage_generated_h

#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetImageColors); \
	DECLARE_FUNCTION(execgetRealTimeImportImage);


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetImageColors); \
	DECLARE_FUNCTION(execgetRealTimeImportImage);


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealTimeImportImage(); \
	friend struct Z_Construct_UClass_URealTimeImportImage_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportImage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportImage)


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURealTimeImportImage(); \
	friend struct Z_Construct_UClass_URealTimeImportImage_Statics; \
public: \
	DECLARE_CLASS(URealTimeImportImage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealTimeImport"), NO_API) \
	DECLARE_SERIALIZER(URealTimeImportImage)


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportImage(URealTimeImportImage&&); \
	NO_API URealTimeImportImage(const URealTimeImportImage&); \
public:


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealTimeImportImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealTimeImportImage(URealTimeImportImage&&); \
	NO_API URealTimeImportImage(const URealTimeImportImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealTimeImportImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealTimeImportImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealTimeImportImage)


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_13_PROLOG
#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_INCLASS \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RealTimeImportImage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REALTIMEIMPORT_API UClass* StaticClass<class URealTimeImportImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS