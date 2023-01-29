// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportMesh.h"


URealTimeImportMesh* URealTimeImportMesh::realTimeImportMesh;
URealTimeImportMesh::URealTimeImportMesh(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
	realTimeImportMesh = this;

	
	importerSTL = NewObject<URealTimeImportMeshSTL>(URealTimeImportMeshSTL::StaticClass());
	importerSTL->AddToRoot();

	importerOBJ = NewObject<URealTimeImportMeshOBJ>(URealTimeImportMeshOBJ::StaticClass());
	importerOBJ->AddToRoot();

	importerFBX = NewObject<URealTimeImportMeshFBX>(URealTimeImportMeshFBX::StaticClass());
	importerFBX->AddToRoot();
}


URealTimeImportMesh* URealTimeImportMesh::getRealTimeImportMesh() {
	return realTimeImportMesh;
}

void URealTimeImportMesh::LoadMeshFile(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString filePath, bool& success, FString& successMessage,
	TArray<FRTIModelStruct>& modelStructs,
	ERTICoordinateSystem coordinateSystem,
	bool autoDetectionNormalMap,
	bool useSRGB,
	bool createMipMaps) {

	//vertices.Empty();
	//normals.Empty();
	//UV0.Empty();
	modelStructs.Empty();

	FString dir;
	if (directoryType == ERTIDirectoryType::E_ad) {
		dir = FPaths::ConvertRelativePathToFull(filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + filePath);
	}

	switch (fileType)
	{
	case ERTIMeshType::E_obj:

		importerOBJ->LoadOBJFile(
			dir,
			success,
			successMessage,
			modelStructs,
			coordinateSystem,
			autoDetectionNormalMap,
			useSRGB,
			createMipMaps);

		break;
	case ERTIMeshType::E_fbx:

		importerFBX->LoadFBXFile(
			dir,
			success,
			successMessage,
			modelStructs,
			coordinateSystem,
			autoDetectionNormalMap,
			useSRGB,
			createMipMaps);

		break;
	case ERTIMeshType::E_stl:
		TArray<uint8> stlFileData;
		if (!FFileHelper::LoadFileToArray(stlFileData, *dir)) {
			UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
			success = false;
			successMessage = "Can't load file: " + dir;
			return;
		}

		if (stlFileData.Num() < 100) {
			UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file (File corrupted): %s"), *dir);
			success = false;
			successMessage = "Can't load file (File corrupted): " + dir;
			return;
		}

		FString stlFileType = byteArrayToFString(stlFileData, 0, 5);

		//is ASCII or Binary type?
		if (stlFileType.Equals("solid")) {
			importerSTL->LoadSTL_ASCIIFile(dir,
				stlFileData,
				coordinateSystem,
				success,
				successMessage,
				modelStructs);
		}
		else {
			importerSTL->LoadSTL_BinaryFile(dir,
				stlFileData,
				coordinateSystem,
				success,
				successMessage,
				modelStructs);
		}


		break;
	}
	
}



uint32 URealTimeImportMesh::byteArrayToInt32(TArray<uint8>& data, uint32 start){
	uint32 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, sizeof(val));

	return val;
}

int64 URealTimeImportMesh::byteArrayToInt64(TArray<uint8>& data, uint32 start) {
	int64 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, sizeof(val));

	return val;
}

TArray<int32> URealTimeImportMesh::byteArrayToInt32Tarray(TArray<uint8>& data, uint32 start, uint32 size){
	TArray<int32> a;
	a.AddUninitialized(size);
	FMemory::Memcpy(a.GetData(), data.GetData() + start, size);
	return a;
}


FString URealTimeImportMesh::byteArrayToFString(TArray<uint8>& data, uint32 start, uint32 size){

	TArray<uint8> fbxCheck;
	fbxCheck.AddUninitialized(size);
	FMemory::Memcpy(fbxCheck.GetData(), data.GetData()+start, size);
	fbxCheck.Add(0x00);// null-terminator

	return FString(UTF8_TO_TCHAR(fbxCheck.GetData()));
}

TArray<uint8> URealTimeImportMesh::cutByteArray(TArray<uint8>& original, uint32 start, uint32 size){
	TArray<uint8> copy;
	copy.AddUninitialized(size);
	FMemory::Memcpy(copy.GetData(), original.GetData() + start, size);
	return copy;
}

double URealTimeImportMesh::parseBytesToDouble(TArray<uint8>& data, uint32 start){

	double val = 0.0;
	FMemory::Memcpy(&val, data.GetData()+start, sizeof(val));

	return val;
}

float URealTimeImportMesh::parseBytesToFloat(TArray<uint8>& data, uint32 start){
	float val = 0.0;
	FMemory::Memcpy(&val, data.GetData() + start, sizeof(val));

	return val;
}



void URealTimeImportMesh::breakMeshStruct(FRTIMeshStruct meshStruct,
	FString& geometryName,
	TArray<int32>& triangles,
	TArray<FVector>& vertices,
	TArray<FVector>& normals,
	TArray<FVector2D>& UV0,
	TArray<FLinearColor>& vertexColors,
	FRTIMaterialStruct& materialStruct) {

	geometryName = meshStruct.geometryName;
	triangles = meshStruct.triangles;
	vertices = meshStruct.vertices;
	normals = meshStruct.normals;
	UV0 = meshStruct.UV0;
	vertexColors = meshStruct.vertexColors;
	materialStruct = meshStruct.materialData;
}



void URealTimeImportMesh::breakMaterialStruct(FRTIMaterialStruct materialData,
	bool& hasTexture,
	FString& materialName,
	FString& textureName,
	TArray<FRTITextureStruct>& textures,
	FColor& ambient,
	FColor& diffuse,
	FColor& specular,
	float& specularExponent,
	float& dissolved,
	float& dissolvedInverted) {

	textures.Empty();

	hasTexture = !materialData.isEmpty;
	materialName = materialData.materialName;
	textureName = materialData.textureName;
	materialData.textures.GenerateValueArray(textures);
	ambient = materialData.ambient;
	diffuse = materialData.diffuse;
	specular = materialData.specular;
	specularExponent = materialData.specularExponent;
	dissolved = materialData.dissolved;
	dissolvedInverted = materialData.dissolvedInverted;

}


void URealTimeImportMesh::breakTextureStruct(FRTITextureStruct textureData, FString& textureName, UTexture2D*& texture, ERTITextureType& textureType) {
	textureName = textureData.textureName;
	texture = textureData.texture;
	textureType = textureData.textureType;
}

void URealTimeImportMesh::breakModelStruct(FRTIModelStruct modelStruct,
	FString& name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs) {

	meshStructs = modelStruct.meshStructs;
	name = modelStruct.name;
	relativeTransform = modelStruct.relativeTransform;
}