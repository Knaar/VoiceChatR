// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportMesh.h"
#include "RealTimeImport/Public/RealTimeImport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMesh();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMesh_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshFBX_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshOBJ_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportMeshSTL_NoRegister();
	REALTIMEIMPORT_API UScriptStruct* Z_Construct_UScriptStruct_FRTIModelStruct();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	DEFINE_FUNCTION(URealTimeImportMesh::execcleanTest)
	{
		P_GET_TARRAY(FRTIModelStruct,Z_Param_modelStructs);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealTimeImportMesh::cleanTest(Z_Param_modelStructs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealTimeImportMesh::execgetRealTimeImportMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportMesh**)Z_Param__Result=URealTimeImportMesh::getRealTimeImportMesh();
		P_NATIVE_END;
	}
	void URealTimeImportMesh::StaticRegisterNativesURealTimeImportMesh()
	{
		UClass* Class = URealTimeImportMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "cleanTest", &URealTimeImportMesh::execcleanTest },
			{ "getRealTimeImportMesh", &URealTimeImportMesh::execgetRealTimeImportMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics
	{
		struct RealTimeImportMesh_eventcleanTest_Parms
		{
			TArray<FRTIModelStruct> modelStructs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_modelStructs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_modelStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::NewProp_modelStructs_Inner = { "modelStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRTIModelStruct, METADATA_PARAMS(nullptr, 0) }; // 779002880
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::NewProp_modelStructs = { "modelStructs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportMesh_eventcleanTest_Parms, modelStructs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 779002880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::NewProp_modelStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::NewProp_modelStructs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealTimeImport|Mesh" },
		{ "ModuleRelativePath", "Public/RealTimeImportMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportMesh, nullptr, "cleanTest", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::RealTimeImportMesh_eventcleanTest_Parms), Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportMesh_cleanTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportMesh_cleanTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics
	{
		struct RealTimeImportMesh_eventgetRealTimeImportMesh_Parms
		{
			URealTimeImportMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealTimeImportMesh_eventgetRealTimeImportMesh_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportMesh, nullptr, "getRealTimeImportMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::RealTimeImportMesh_eventgetRealTimeImportMesh_Parms), Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportMesh);
	UClass* Z_Construct_UClass_URealTimeImportMesh_NoRegister()
	{
		return URealTimeImportMesh::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_importerSTL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_importerSTL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_importerOBJ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_importerOBJ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_importerFBX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_importerFBX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportMesh_cleanTest, "cleanTest" }, // 1260214574
		{ &Z_Construct_UFunction_URealTimeImportMesh_getRealTimeImportMesh, "getRealTimeImportMesh" }, // 1326828412
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RealTimeImportMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerSTL_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerSTL = { "importerSTL", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportMesh, importerSTL), Z_Construct_UClass_URealTimeImportMeshSTL_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerSTL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerSTL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerOBJ_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerOBJ = { "importerOBJ", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportMesh, importerOBJ), Z_Construct_UClass_URealTimeImportMeshOBJ_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerOBJ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerOBJ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerFBX_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerFBX = { "importerFBX", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealTimeImportMesh, importerFBX), Z_Construct_UClass_URealTimeImportMeshFBX_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerFBX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerFBX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealTimeImportMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerSTL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerOBJ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealTimeImportMesh_Statics::NewProp_importerFBX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportMesh_Statics::ClassParams = {
		&URealTimeImportMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealTimeImportMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportMesh()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportMesh.OuterSingleton, Z_Construct_UClass_URealTimeImportMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportMesh.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportMesh>()
	{
		return URealTimeImportMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportMesh);
	URealTimeImportMesh::~URealTimeImportMesh() {}
	struct Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportMesh, URealTimeImportMesh::StaticClass, TEXT("URealTimeImportMesh"), &Z_Registration_Info_UClass_URealTimeImportMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportMesh), 119721875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMesh_h_4238403847(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatC_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
