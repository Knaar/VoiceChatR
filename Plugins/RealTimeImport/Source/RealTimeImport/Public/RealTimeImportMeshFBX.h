// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once

#define STB_IMAGE_IMPLEMENTATION
#define STBI_SUPPORT_ZLIB

#include "RealTimeImportMesh.h"
#include "RealTimeImportMeshFBX.generated.h"

UENUM()
enum class ERTIInformationType : uint8
{

	E_none	UMETA(DisplayName = "none"),
	E_ByPolygonVertex	UMETA(DisplayName = "ByPolygonVertex"), /*(or also ByVertice, as the Blender exporter writes.I think the author is spanish.)*/
	E_ByVertex 	UMETA(DisplayName = "ByVertex"),
	E_ByPolygon	UMETA(DisplayName = "ByPolygon"),
	E_ByEdge 	UMETA(DisplayName = "ByEdge"),
	E_AllSame 	UMETA(DisplayName = "AllSame")
};

UENUM()
enum class ERTIReferenceInformationType : uint8
{
	E_none	UMETA(DisplayName = "none"),
	E_Direct	UMETA(DisplayName = "Direct"),
	E_IndexToDirect	UMETA(DisplayName = "IndexToDirect")
};

USTRUCT()
struct FRTIFBXVideoStruct
{
	GENERATED_USTRUCT_BODY()

		FString filePath = FString();
	int64 fbxID = 0;
	TArray<uint8> fbxTextureData;
};

USTRUCT()
struct FRTIFBXTextureStruct
{
	GENERATED_USTRUCT_BODY()

		ERTITextureType textureType = ERTITextureType::E_none;
	int64 fbxID = 0;
	TMap<int64, FRTIFBXVideoStruct*> videoStructs;
};


USTRUCT()
struct FRTIFBXMaterialStruct
{
	GENERATED_USTRUCT_BODY()

		FString name = FString();
	TArray<uint8> ambient;
	TArray<uint8> diffuse;
	TArray<uint8> specular;

	int64 fbxID = 0;
	TMap<int64, FRTIFBXTextureStruct*> textureStructs;
};


USTRUCT()
struct FRTIFBXGeometryStruct
{
	GENERATED_USTRUCT_BODY()

		FString name = FString();

	TArray<FVector> vertices;
	TArray<int32> polygonVertexIndexes;
	TArray<FVector> normals;

	TArray<FVector2D> UV0;
	TArray<int32> UV0Indexes;

	TArray<FLinearColor> vertexColors;
	TArray<int32> vertexColorsIndexes;

	TArray<int32> edges;
	TArray<int32> materialPolygons;


	int64 fbxID = 0;
	ERTICoordinateSystem coordinateSystem;

	ERTIInformationType normalInformationType;
	ERTIReferenceInformationType normalReferenceInformationType;
	ERTIInformationType UVInformationType;
	ERTIReferenceInformationType UVReferenceInformationType;
	ERTIInformationType VertexColorInformationType;
	ERTIReferenceInformationType VertexColorReferenceInformationType;
	ERTIInformationType MatInformationType;
	ERTIReferenceInformationType MatReferenceInformationType;

};

USTRUCT()
struct FRTIFBXModelStruct
{
	GENERATED_USTRUCT_BODY()

		FString name = FString();
	bool modelLocationXisSet = false;
	bool modelLocationYisSet = false;
	bool modelLocationZisSet = false;

	bool modelRotationXisSet = false;
	bool modelRotationYisSet = false;
	bool modelRotationZisSet = false;

	bool modelScaleXisSet = false;
	bool modelScaleYisSet = false;
	bool modelScaleZisSet = false;
	FTransform relativeTransform;
	int64 fbxID = 0;
	TMap<int64, FRTIFBXMaterialStruct*> materialStructs;
	struct FRTIFBXGeometryStruct* geometryStruct = nullptr;
};




USTRUCT()
struct FRTIFBXConnections
{
	GENERATED_USTRUCT_BODY()

	TMap<int64, FRTIFBXModelStruct*> model;
	TMap<int64, FRTIFBXGeometryStruct*> geometry;
	TMap<int64, FRTIFBXMaterialStruct*> material;
	TMap<int64, FRTIFBXTextureStruct*> texture;
	TMap<int64, FRTIFBXVideoStruct*> video;

	//TMap<int64, int64> connectionMap;
	//TMap<int64, TArray<int64>> connectionMapRevers;
};


UCLASS()
class REALTIMEIMPORT_API URealTimeImportMeshFBX : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void LoadFBXFile(
		FString dir,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		ERTICoordinateSystem coordinateSystem,
		bool autoDetectionNormalMap,
		bool useSRGB,
		bool createMipMaps);




	int32 parseFbxBinaryData(bool& success, FString& successMessage, TArray<uint8>& fbxFileData, uint32 dataPosition,
		FRTIFBXConnections& fbxConnections, int32 fbxVersion, ERTICoordinateSystem coordinateSystem, FString dir);

	ERTIInformationType informationTypeStringToEnum(FString informationType);
	ERTIReferenceInformationType referenceInformationTypeTypeStringToEnum(FString informationType);

	TArray<uint8> uncompressFbxData(TArray<uint8>& data, uint32 start, uint32 size, uint32 compressedLen);
};