// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportMeshOBJ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportMeshOBJ() {}
// Cross Module References
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshOBJ_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshOBJ();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	void URealTimeImportMeshOBJ::StaticRegisterNativesURealTimeImportMeshOBJ()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportMeshOBJ);
	UClass* Z_Construct_UClass_URealTimeImportMeshOBJ_NoRegister()
	{
		return URealTimeImportMeshOBJ::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportMeshOBJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealTimeImportMeshOBJ.h" },
		{ "ModuleRelativePath", "Public/RealTimeImportMeshOBJ.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportMeshOBJ>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::ClassParams = {
		&URealTimeImportMeshOBJ::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportMeshOBJ()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportMeshOBJ.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportMeshOBJ.OuterSingleton, Z_Construct_UClass_URealTimeImportMeshOBJ_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportMeshOBJ.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportMeshOBJ>()
	{
		return URealTimeImportMeshOBJ::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportMeshOBJ);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshOBJ_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshOBJ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportMeshOBJ, URealTimeImportMeshOBJ::StaticClass, TEXT("URealTimeImportMeshOBJ"), &Z_Registration_Info_UClass_URealTimeImportMeshOBJ, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportMeshOBJ), 2508440700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshOBJ_h_3977458686(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshOBJ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMeshOBJ_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
