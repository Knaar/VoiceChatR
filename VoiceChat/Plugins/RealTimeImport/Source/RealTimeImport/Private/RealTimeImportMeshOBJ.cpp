// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportMeshOBJ.h"


URealTimeImportMeshOBJ::URealTimeImportMeshOBJ(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
}


void URealTimeImportMeshOBJ::LoadOBJFile(
	FString dir,
	bool& success,
	FString& successMessage,
	TArray<FRTIModelStruct>& modelStructs,
	ERTICoordinateSystem coordinateSystem,
	bool autoDetectionNormalMap,
	bool useSRGB,
	bool createMipMaps) {



	FString stringFileData;
	if (!FFileHelper::LoadFileToString(stringFileData, *dir)) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
		success = false;
		successMessage = "Can't load file: " + dir;
		return;
	}

	TArray<FString> lines;
	int32 lineCount = stringFileData.ParseIntoArray(lines, TEXT("\n"), true);
	stringFileData.Empty();

	if (lineCount < 1) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: corrupted file (1): %s"), *dir);
		success = false;
		successMessage = "Corrupted file (1): " + dir;
		return;
	}



	FRTIMaterialStruct lastMaterialData;
	FString lastGeometryName;
	//TArray<FRTIMeshStruct> meshStructs;
	TMap<FString, FRTIMaterialStruct> materialStructsTemp;


	//we need a default meshstruct
	//FRTIMeshStruct defaultMesh;
	//defaultMesh.geometryName = "No_Name";
	//defaultMesh.isDefaultStruct = true;
	//meshStructs.Add(defaultMesh);

	//and a default model
	//FRTIModelStruct defaultModel;

	int faceMethod = -1;


	TArray<FVector> verticesLines;
	TArray<FVector2D> UV0Lines;
	TArray<FVector> normalsLines;

	TArray<FString> lineElements;
	TArray<FString> subElements;
	TArray<int32> tempVerticesArrayPosition;


	for (int32 i = 0; i < lineCount; i++) {
		FString line = lines[i].TrimStartAndEnd();
		if (line.StartsWith("#")) {
			continue;
		}



		//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin:_%s_"), *line);

		//objects
		if (line.StartsWith("o ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {
				FRTIModelStruct modelStruct = FRTIModelStruct();
				modelStruct.name.Empty();
				for (int32 k = 1; k < lineElements.Num(); k++) {
					modelStruct.name += lineElements[k] + " ";
				}

				modelStructs.Add(modelStruct);

				//use the default mesh
				//if (meshStructs.Last().isDefaultStruct) {
				//	meshStructs.Last().geometryName = line.Replace(TEXT("o "), TEXT(""));
				//	//defaultModel.name = meshStructs.Last().geometryName;
				//	meshStructs.Last().isDefaultStruct = false;
				//	/*	if (lastMaterialData.isEmpty == false) {
				//			meshStructs.Last().hasMaterialData = true;
				//			meshStructs.Last().materialData = lastMaterialData;
				//		}*/

				//}
				//else {
				//	FRTIMeshStruct meshStruct;
				//	meshStruct.geometryName = lineElements[1];
				//	//meshStruct.modelName = meshStruct.geometryName;
				//	/*if (lastMaterialData.isEmpty == false) {
				//		meshStruct.hasMaterialData = true;
				//		meshStruct.materialData = lastMaterialData;
				//	}*/
				//	meshStructs.Add(meshStruct);
				//}
				faceMethod = -1;
			}
			continue;
		}

		if (line.StartsWith("g ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {

				lastGeometryName = line.Replace(TEXT("g "), TEXT(""));
				if (modelStructs.Num() == 0) {
					FRTIModelStruct modelStruct = FRTIModelStruct();
					modelStruct.name.Empty();
					for (int32 k = 1; k < lineElements.Num(); k++) {
						modelStruct.name += lineElements[k] + " ";
					}
					modelStructs.Add(modelStruct);
				}

				FRTIMeshStruct meshStruct = FRTIMeshStruct();

				for (int32 k = 1; k < lineElements.Num(); k++) {
					meshStruct.geometryName += lineElements[k] + " ";
				}

				if (lastMaterialData.isEmpty == false) {
					meshStruct.materialData = lastMaterialData;
					meshStruct.hasMaterialData = true;
				}

				modelStructs.Last().meshStructs.Add(meshStruct);


				////use the default mesh
				//if (meshStructs.Last().isDefaultStruct) {
				//	meshStructs.Last().geometryName = lastGeometryName;
				//	meshStructs.Last().isDefaultStruct = false;
				//	if (lastMaterialData.isEmpty == false) {
				//		meshStructs.Last().hasMaterialData = true;
				//		meshStructs.Last().materialData = lastMaterialData;
				//	}
				//}
				//else {
				//	FRTIMeshStruct meshStruct;
				//	meshStruct.geometryName = lineElements[1];
				//	if (lastMaterialData.isEmpty == false) {
				//		meshStruct.hasMaterialData = true;
				//		meshStruct.materialData = lastMaterialData;
				//	}
				//	meshStructs.Add(meshStruct);
				//}
				faceMethod = -1;
			}
			continue;
		}

		//Material/Texture name for this group
		if (line.StartsWith("usemtl ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {
				if (materialStructsTemp.Find(lineElements[1]) != nullptr) {
					lastMaterialData = *materialStructsTemp.Find(lineElements[1]);
				}

				for (int32 k = 1; k < lineElements.Num(); k++) {
					lastMaterialData.materialName += lineElements[k] + " ";
				}

				if (modelStructs.Num() > 0) {
					if (modelStructs.Last().meshStructs.Num() == 0 || lines[i - 1].StartsWith("g ") == false) {
						FRTIMeshStruct meshStruct = FRTIMeshStruct();
						meshStruct.geometryName = lastMaterialData.materialName;
						modelStructs.Last().meshStructs.Add(meshStruct);
					}

					if (modelStructs.Last().meshStructs.Num() > 0) {
						modelStructs.Last().meshStructs.Last().hasMaterialData = true;
						modelStructs.Last().meshStructs.Last().materialData = lastMaterialData;
					}
				}
			}
			continue;
		}

		//mtl files
		if (line.StartsWith("mtllib ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				createMaterialStructFromObj(dir.Replace(*FPaths::GetCleanFilename(dir), *lineElements[1]), materialStructsTemp, autoDetectionNormalMap, useSRGB, createMipMaps);
			}
			continue;
		}

		//vertices
		if (line.StartsWith("v ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
					verticesLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[3]), FCString::Atof(*lineElements[2])));
				}
				else {
					verticesLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[2]), FCString::Atof(*lineElements[3])));
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) Vertices line corrupted: %s"), (i + 1), *line);
			}
			continue;
		}

		//normals
		if (line.StartsWith("vn ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
					normalsLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[3]), FCString::Atof(*lineElements[2])));
				}
				else {
					normalsLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[2]), FCString::Atof(*lineElements[3])));
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) Normals line corrupted: %s"), (i + 1), *line);
			}
			continue;
		}

		//UV0
		if (line.StartsWith("vt ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 3) {
				float y = FCString::Atof(*lineElements[2]);
				if (y > 0) {
					UV0Lines.Add(FVector2D(FCString::Atof(*lineElements[1]), 1 - y));
				}
				else {
					UV0Lines.Add(FVector2D(FCString::Atof(*lineElements[1]), -1 - y));
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) UV line corrupted: %s"), (i + 1), *line);
			}
			continue;
		}


		//faces, create the mesh structure
		if (line.StartsWith("f ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);

			//set face method
			if (faceMethod == -1 && elementCount > 3) {

				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Method search: %s"), *lineElements[1]);

				//method 1 = f v1 v2 v3 ....
				if (lineElements[1].Contains("/") == false) {
					faceMethod = 1;
				}
				else {
					//method 4 = f v1//vn1 v2//vn2 v3//vn3 ...
					if (lineElements[1].Contains("//")) {
						faceMethod = 4;
					}
					else {
						//method 2 = f v1/vt1 v2/vt2 v3/vt3 ...
						TArray<FString> tmp;
						if (lineElements[1].ParseIntoArray(tmp, TEXT("/"), true) == 2) {
							faceMethod = 2;
						}
						//method 3 = v1/vt1/vn1 v2/vt2/vn2 v3/vt3/vn3 ...
						else {
							faceMethod = 3;
						}
					}
				}
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Method: %i"), faceMethod);
			}

			//create
			if (elementCount > 3) {

				if (modelStructs.Num() == 0) {
					FRTIModelStruct modelStruct = FRTIModelStruct();
					modelStructs.Add(modelStruct);
				}
				if (modelStructs.Last().meshStructs.Num() == 0) {
					FRTIMeshStruct meshStruct = FRTIMeshStruct();
					meshStruct.geometryName = "NoName";
					modelStructs.Last().meshStructs.Add(meshStruct);
				}

				//FRTIMeshStruct& tmpMeshStruct = meshStructs.Last();
				tempVerticesArrayPosition.Empty();


				int32 subElementVal = -1;

				for (int32 j = 1; j < lineElements.Num(); j++) {
					subElements.Empty();

					switch (faceMethod)
					{
					case 1:
						subElementVal = FCString::Atoi(*lineElements[j]) - 1;
						if (subElementVal < 0) {
							//For negative values, the lines must be read backwards. If there are 100 lines and the value -100 appears here, line 1 is meant.
							subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
						}

						if (verticesLines.Num() > subElementVal) {
							modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);
							tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
						}
						break;
					case 2:
						elementCount = lineElements[j].ParseIntoArray(subElements, TEXT("/"), true);
						if (elementCount == 2) {
							subElementVal = FCString::Atoi(*subElements[0]) - 1;
							if (subElementVal < 0) {
								subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
							}

							if (verticesLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);

								subElementVal = FCString::Atoi(*subElements[1]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (UV0Lines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().UV0.Add(UV0Lines[subElementVal]);
								tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							}
						}
						break;
					case 3:
						elementCount = lineElements[j].ParseIntoArray(subElements, TEXT("/"), true);
						if (elementCount == 3) {
							subElementVal = FCString::Atoi(*subElements[0]) - 1;
							if (subElementVal < 0) {
								subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
							}

							if (verticesLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);

								subElementVal = FCString::Atoi(*subElements[1]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (UV0Lines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().UV0.Add(UV0Lines[subElementVal]);

								subElementVal = FCString::Atoi(*subElements[2]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (normalsLines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().normals.Add(normalsLines[subElementVal]);
								tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							}
						}
						break;
					case 4:
						elementCount = lineElements[j].ParseIntoArray(subElements, TEXT("//"), true);
						if (elementCount == 2) {
							subElementVal = FCString::Atoi(*subElements[0]) - 1;
							if (subElementVal < 0) {
								subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
							}

							if (verticesLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);
								subElementVal = FCString::Atoi(*subElements[1]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (normalsLines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().normals.Add(normalsLines[subElementVal]);
								tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							}
						}
						break;
					}
				}



				FRTIMeshStruct& tmpMeshStruct = modelStructs.Last().meshStructs.Last();

				//Create polygons in the UE4 way
				if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
					for (int32 k = 1; k < tempVerticesArrayPosition.Num() - 1; k++) {
						tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k]);
						tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k + 1]);
						tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[0]);
					}
				}
				else {
					for (int32 k = 1; k < tempVerticesArrayPosition.Num() - 1; k++) {
						tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k + 1]);
						tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k]);
						tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[0]);
					}
				}
				tempVerticesArrayPosition.Empty();



			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) Cannot process this line. Only polygons and quads are possible. (Method %i): %s"), (i + 1), faceMethod, *line);
			}
		}
	}


	int32 verticesCount = 0;
	int32 UV0Count = 0;
	int32 normalsCount = 0;

	//delete meshes without polygons
	TArray<FRTIMeshStruct> meshStructsCopy;
	for (int32 j = 0; j < modelStructs.Num(); j++) {
		for (int32 i = 0; i < modelStructs[j].meshStructs.Num(); i++) {
			if (modelStructs[j].meshStructs[i].triangles.Num() > 0) {
				meshStructsCopy.Add(modelStructs[j].meshStructs[i]);
				verticesCount += modelStructs[j].meshStructs[i].vertices.Num();
				UV0Count += modelStructs[j].meshStructs[i].UV0.Num();
				normalsCount += modelStructs[j].meshStructs[i].normals.Num();
			}
		}
		modelStructs[j].meshStructs.Empty();
		modelStructs[j].meshStructs.Append(meshStructsCopy);
		meshStructsCopy.Empty();
	}


	if (verticesCount < 3) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Less than 3 vertices found in file. Cancel: %s"), *dir);
		success = false;
		successMessage = "Less than 3 vertices found in file. Cancel: " + dir;
		return;
	}


	if (normalsCount == 0) {
		UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: No normals found in this file. Normals will be automatically created. This can lead to problems with the lighting.: %s"), *dir);
	}

	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: Vertices: %i UV0: %i Normals: %i "), verticesCount, UV0Count, normalsCount);

	success = true;
	successMessage = "Vertices: " + FString::FromInt(verticesCount) + " UV0: " + FString::FromInt(UV0Count) + " Normals: " + FString::FromInt(normalsCount);

	lineElements.Empty();
	subElements.Empty();
	tempVerticesArrayPosition.Empty();

}


void URealTimeImportMeshOBJ::createMaterialStructFromObj(FString mtlFilePath, TMap<FString, FRTIMaterialStruct>& materialStructs,
	bool autoDetectionNormalMap,
	bool useSRGB, bool createMipMaps) {

	FRTIMaterialStruct materialStruct;

	FString stringFileData;
	if (!FFileHelper::LoadFileToString(stringFileData, *mtlFilePath)) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *mtlFilePath);
		return;
	}

	TArray<FString> lines;
	int32 lineCount = stringFileData.ParseIntoArray(lines, TEXT("\n"), true);
	stringFileData.Empty();

	if (lineCount < 1) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: corrupted mtl file (2): %s"), *mtlFilePath);
		return;
	}

	TArray<FString> lineElements;

	for (int32 i = 0; i < lineCount; i++) {
		FString line = lines[i].TrimStartAndEnd();
		if (line.StartsWith("#")) {
			continue;
		}



		//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin:_%s_"), *line);

		//new material settings
		if (line.StartsWith("newmtl ")) {

			if (materialStruct.isEmpty == false) {
				materialStructs.Add(materialStruct.textureName, materialStruct);
				materialStruct = FRTIMaterialStruct();
			}

			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.textureName = lineElements[1];
				materialStruct.isEmpty = false;
			}
			continue;
		}


		if (line.StartsWith("Ns ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.specularExponent = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("d ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.dissolved = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("Tr ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.dissolvedInverted = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("Ka ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				materialStruct.ambient = FColor(FCString::Atof(*lineElements[1]) * 255, FCString::Atof(*lineElements[2]) * 255, FCString::Atof(*lineElements[3]) * 255);
			}
			continue;
		}

		if (line.StartsWith("Kd ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				materialStruct.diffuse = FColor(FCString::Atof(*lineElements[1]) * 255, FCString::Atof(*lineElements[2]) * 255, FCString::Atof(*lineElements[3]) * 255);
			}
			continue;
		}

		if (line.StartsWith("Ks ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				materialStruct.specular = FColor(FCString::Atof(*lineElements[1]) * 255, FCString::Atof(*lineElements[2]) * 255, FCString::Atof(*lineElements[3]) * 255);
			}
			continue;
		}

		if (line.StartsWith("map_") || line.StartsWith("bump") || line.StartsWith("disp")
			|| line.StartsWith("decal") || line.StartsWith("refl") || line.StartsWith("Pc")
			|| line.StartsWith("aniso") || line.StartsWith("norm")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {
				//spaces in filepaths 
				if (elementCount > 2) {
					lineElements.Last() = line.Replace(*(lineElements[0] + " "), TEXT(""));
				}
				//map statements are not implemented and are cut out here.
				FString imageFileWithPath = lineElements.Last();

				UTexture2D* texture = nullptr;
				FString fileName = FGuid::NewGuid().ToString();
				int32 errorCode = 0;
				FString errorMessage = FString();

				TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default;
				if (autoDetectionNormalMap && (line.StartsWith("map_Norm") || line.StartsWith("map_norm") || line.StartsWith("norm ") || line.StartsWith("map_Bump ") || line.StartsWith("map_bump ") || line.StartsWith("bump "))) {
					compressionSettings = TextureCompressionSettings::TC_Normalmap;
				}


				URealTimeImportImage::getRealTimeImportImage()->LoadImageFile(ERTIDirectoryType::E_ad,
					mtlFilePath.Replace(*FPaths::GetCleanFilename(mtlFilePath), *imageFileWithPath),
					texture, fileName, errorCode, errorMessage, compressionSettings, useSRGB, createMipMaps);


				if (errorCode == 0) {

					if (line.StartsWith("map_Kd ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Kd;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ks ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ks;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ns ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ns;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_d ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_d;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Bump ") || line.StartsWith("map_bump ") || line.StartsWith("bump ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_bump;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Disp") || line.StartsWith("map_disp") || line.StartsWith("disp ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_disp;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Decal") || line.StartsWith("map_decal") || line.StartsWith("decal ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_decal;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Refl") || line.StartsWith("map_refl") || line.StartsWith("refl ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_refl;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Pr ") || line.StartsWith("Pr ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pr;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Pm ") || line.StartsWith("Pm")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pm;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ps ") || line.StartsWith("Ps")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ps;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("Pc ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pc;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("Pcr ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pcr;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ke ") || line.StartsWith("Ke")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ke;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ansio") || line.StartsWith("map_ansio") || line.StartsWith("aniso ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_aniso;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ansior") || line.StartsWith("map_ansior") || line.StartsWith("anisor ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_anisor;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Norm") || line.StartsWith("map_norm") || line.StartsWith("norm ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_norm;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					FRTITextureStruct ts = FRTITextureStruct();
					ts.texture = texture;
					ts.textureType = ERTITextureType::E_un;
					materialStruct.textures.Add(fileName, ts);
				}
			}
			continue;
		}
	}

	if (materialStruct.isEmpty == false) {
		materialStructs.Add(materialStruct.textureName, materialStruct);
	}
}