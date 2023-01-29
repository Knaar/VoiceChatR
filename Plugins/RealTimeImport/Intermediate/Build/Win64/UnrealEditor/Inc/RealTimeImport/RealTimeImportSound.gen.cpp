// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeImport/Public/RealTimeImportSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealTimeImportSound() {}
// Cross Module References
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportSound_NoRegister();
	REALTIMEIMPORT_API UClass* Z_Construct_UClass_URealTimeImportSound();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RealTimeImport();
// End Cross Module References
	DEFINE_FUNCTION(URealTimeImportSound::execgetRealTimeImportSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealTimeImportSound**)Z_Param__Result=URealTimeImportSound::getRealTimeImportSound();
		P_NATIVE_END;
	}
	void URealTimeImportSound::StaticRegisterNativesURealTimeImportSound()
	{
		UClass* Class = URealTimeImportSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getRealTimeImportSound", &URealTimeImportSound::execgetRealTimeImportSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics
	{
		struct RealTimeImportSound_eventgetRealTimeImportSound_Parms
		{
			URealTimeImportSound* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RealTimeImportSound_eventgetRealTimeImportSound_Parms, ReturnValue), Z_Construct_UClass_URealTimeImportSound_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealTimeImportSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealTimeImportSound, nullptr, "getRealTimeImportSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::RealTimeImportSound_eventgetRealTimeImportSound_Parms), Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealTimeImportSound);
	UClass* Z_Construct_UClass_URealTimeImportSound_NoRegister()
	{
		return URealTimeImportSound::StaticClass();
	}
	struct Z_Construct_UClass_URealTimeImportSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealTimeImportSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeImport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealTimeImportSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealTimeImportSound_getRealTimeImportSound, "getRealTimeImportSound" }, // 2777491145
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealTimeImportSound_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RealTimeImportSound.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RealTimeImportSound.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealTimeImportSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealTimeImportSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealTimeImportSound_Statics::ClassParams = {
		&URealTimeImportSound::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealTimeImportSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealTimeImportSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealTimeImportSound()
	{
		if (!Z_Registration_Info_UClass_URealTimeImportSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealTimeImportSound.OuterSingleton, Z_Construct_UClass_URealTimeImportSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealTimeImportSound.OuterSingleton;
	}
	template<> REALTIMEIMPORT_API UClass* StaticClass<URealTimeImportSound>()
	{
		return URealTimeImportSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealTimeImportSound);
	struct Z_CompiledInDeferFile_FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealTimeImportSound, URealTimeImportSound::StaticClass, TEXT("URealTimeImportSound"), &Z_Registration_Info_UClass_URealTimeImportSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealTimeImportSound), 751395047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportSound_h_2381354921(TEXT("/Script/RealTimeImport"),
		Z_CompiledInDeferFile_FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VoiceChatR_Plugins_RealTimeImport_Source_RealTimeImport_Public_RealTimeImportSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
