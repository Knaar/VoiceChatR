// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once


#include "RealTimeImport.h"

#ifndef __RealTimeImportMeshSTL
#define __RealTimeImportMeshSTL
#include "RealTimeImportMeshSTL.h"
#endif

#ifndef __RealTimeImportMeshOBJ
#define __RealTimeImportMeshOBJ
#include "RealTimeImportMeshOBJ.h"
#endif

#ifndef __RealTimeImportMeshFBX
#define __RealTimeImportMeshFBX
#include "RealTimeImportMeshFBX.h"
#endif

#include "RealTimeImportMesh.generated.h"




UCLASS(Blueprintable, BlueprintType)
class REALTIMEIMPORT_API URealTimeImportMesh : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	static URealTimeImportMesh* realTimeImportMesh;
	UFUNCTION()
		static URealTimeImportMesh* getRealTimeImportMesh();


	void LoadMeshFile(ERTIMeshType fileType,
		ERTIDirectoryType directoryType,
		FString filePath,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		ERTICoordinateSystem coordinateSystem,
		bool autoDetectionNormalMap = true,
		bool useSRGB = true, bool createMipMaps = false);


	//mesh export

	//UFUNCTION(BlueprintCallable, BlueprintPure, Category = "RealTimeImport|Mesh")
	//	static FRTIMaterialStruct CreateMaterialStruct(UMaterialInterface* material, FString textureName, ERTITextureType textureType);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
	//	static FRTIMeshStruct CreateMeshStruct(FString meshName, TArray<FVector> vertices, TArray<int32> triangles,
	//		TArray<FVector> normals,
	//		TArray<FVector2D> UV0,  FRTIMaterialStruct materialStruct);

	//UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
	//	static void CreateMeshFile(ERTIMeshExportType fileType,
	//		ERTIDirectoryType directoryType,
	//		FString filePath,
	//		bool& success,
	//		FString& successMessage,
	//		TArray<FRTIMeshStruct> meshStructs);


	static void breakModelStruct(FRTIModelStruct modelStruct,
		FString& name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs);

	static void breakMeshStruct(FRTIMeshStruct meshStruct,
		FString& geometryName,
		TArray<int32>& triangles,
		TArray<FVector>& vertices,
		TArray<FVector>& normals,
		TArray<FVector2D>& UV0,
		TArray<FLinearColor>& vertexColors,
		FRTIMaterialStruct& materialStruct);





	static void breakMaterialStruct(FRTIMaterialStruct materialData,
		bool& hasTexture,
		FString& materialName,
		FString& textureName,
		TArray<FRTITextureStruct>& textures,
		FColor& ambient,
		FColor& diffuse,
		FColor& specular,
		float& specularExponent,
		float& dissolved,
		float& dissolvedInverted);


	static void breakTextureStruct(FRTITextureStruct textureData,
		FString& textureName,
		UTexture2D*& texture,
		ERTITextureType& textureType);


	UFUNCTION(BlueprintCallable, Category = "RealTimeImport|Mesh")
		static void cleanTest(TArray<FRTIModelStruct> modelStructs) {

		for (int32 j = 0; j < modelStructs.Num(); j++) {

			for (int32 i = 0; i < modelStructs[j].meshStructs.Num(); i++)
			{

				for (auto& element : modelStructs[j].meshStructs[i].materialData.textures) {

					delete& element.Value;
				}

				delete& modelStructs[j].meshStructs[i].materialData;
				delete& modelStructs[j].meshStructs[i];

			}

			delete& modelStructs[j];
		}
	};

	static uint32 byteArrayToInt32(TArray<uint8>& data, uint32 start);
	static int64 byteArrayToInt64(TArray<uint8>& data, uint32 start);
	static TArray<int32> byteArrayToInt32Tarray(TArray<uint8>& data, uint32 start, uint32 size);
	static FString byteArrayToFString(TArray<uint8>& data, uint32 start, uint32 size);
	static TArray<uint8> cutByteArray(TArray<uint8>& original, uint32 start, uint32 size);
	static double parseBytesToDouble(TArray<uint8>& data, uint32 start);
	static float parseBytesToFloat(TArray<uint8>& data, uint32 start);

private:

	UPROPERTY()
		class URealTimeImportMeshSTL* importerSTL = nullptr;

	UPROPERTY()
		class URealTimeImportMeshOBJ* importerOBJ = nullptr;

	UPROPERTY()
		class URealTimeImportMeshFBX* importerFBX = nullptr;


};
