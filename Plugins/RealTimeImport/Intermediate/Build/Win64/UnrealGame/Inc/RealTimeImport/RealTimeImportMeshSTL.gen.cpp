// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportMeshSTL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportMeshSTL() {}
// Cross Module References
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshSTL_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshSTL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	void URealTimeImportMeshSTL::StaticRegisterNativesURealTimeImportMeshSTL()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportMeshSTL);
	UClass* Z_Construct_UClass_URealTimeImportMeshSTL_NoRegister()
	{
		return URealTimeImportMeshSTL::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportMeshSTL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportMeshSTL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMeshSTL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealTimeImportMeshSTL.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportMeshSTL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportMeshSTL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportMeshSTL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportMeshSTL_Statics::ClassParams = {
		&URealTimeImportMeshSTL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMeshSTL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMeshSTL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportMeshSTL()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportMeshSTL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportMeshSTL.OuterSingleton, Z_Construct_UClass_URealTimeImportMeshSTL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportMeshSTL.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportMeshSTL>()
	{
		return URealTimeImportMeshSTL::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportMeshSTL);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshSTL_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshSTL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportMeshSTL, URealTimeImportMeshSTL::StaticClass, TEXT("URealTimeImportMeshSTL"), &Z_Registration_Info_UClass_URealTimeImportMeshSTL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportMeshSTL), 3262671163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshSTL_h_3439032988(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshSTL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshSTL_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
