// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#pragma once


#include "RealTimeImportMesh.h"
#include "RealTimeImportMeshOBJ.generated.h"



UCLASS()
class REALTIMEIMPORT_API URealTimeImportMeshOBJ : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	void LoadOBJFile(
		FString dir,
		bool& success,
		FString& successMessage,
		TArray<FRTIModelStruct>& modelStructs,
		ERTICoordinateSystem coordinateSystem,
		bool autoDetectionNormalMap,
		bool useSRGB,
		bool createMipMaps);


	void createMaterialStructFromObj(FString mtlFilePath, TMap<FString, FRTIMaterialStruct>& materialStructs,
		bool autoDetectionNormalMap,
		bool useSRGB, bool createMipMaps);
};