// Copyright 2017 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportAsyncNodes.h"


/*--- Load Mesh -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadMesh* URealTimeImportAsyncNodeLoadMesh::LoadMeshFileAsyncNode(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString filePath,
	ERTICoordinateSystem coordinateSystem, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps){

	URealTimeImportAsyncNodeLoadMesh* instance = NewObject<URealTimeImportAsyncNodeLoadMesh>();

	instance->jobData = FSRealtimeImportThreadJobData();
	instance->jobData.jobType = ERTIThreadJobType::E_LoadMesh;
	instance->jobData.meshFileType = fileType;
	instance->jobData.directoryType = directoryType;
	instance->jobData.filePath = filePath;
	instance->jobData.coordinateSystem = coordinateSystem;
	instance->jobData.autoDetectionNormalMap = autoDetectionNormalMap;
	instance->jobData.SRGB = useSRGB;
	instance->jobData.createMipMaps = createMipMaps;
	instance->jobData.asyncNodeLoadMesh = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadMesh::Activate(){
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeLoadMesh::jobComplete(TArray<FRTIModelStruct> modelStructs, FString errorMessage, bool successful) {
	
	if (successful) {
		OnSuccess.Broadcast(modelStructs,errorMessage);
	}
	else {
		OnFail.Broadcast(modelStructs,errorMessage);
	}
}



/*--- Load File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadFile* URealTimeImportAsyncNodeLoadFile::LoadFileAsyncNode(ERTIDirectoryType directoryType, FString filePath) {

	URealTimeImportAsyncNodeLoadFile* instance = NewObject<URealTimeImportAsyncNodeLoadFile>();
	instance->jobData.jobType = ERTIThreadJobType::E_LoadFile;
	instance->jobData.directoryType = directoryType;
	instance->jobData.filePath = filePath;
	instance->jobData.asyncNodeLoadFile = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadFile::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeLoadFile::jobComplete(FString fileName, TArray<uint8> bytes, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(fileName, bytes, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(fileName, bytes, errorCode, errorMessage);
	}

}

/*---Save File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeSaveFile* URealTimeImportAsyncNodeSaveFile::SaveFileAsyncNode(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes,
	bool createDirectories, bool overwriteFile) {

	URealTimeImportAsyncNodeSaveFile* instance = NewObject<URealTimeImportAsyncNodeSaveFile>();
	instance->jobData.jobType = ERTIThreadJobType::E_SaveFile;
	instance->jobData.directoryType = directoryType;
	instance->jobData.filePath = filePath;
	instance->jobData.createDirectories = createDirectories;
	instance->jobData.overwriteFile = overwriteFile;
	instance->jobData.bytes = bytes;
	instance->jobData.asyncNodeSaveFile = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeSaveFile::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeSaveFile::jobComplete(FString fileName, FString fullPath, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(fileName, fullPath, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(fileName, fullPath, errorCode, errorMessage);
	}

}


/*---Load All Files From Directory -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadAllFilesFromDirectory* URealTimeImportAsyncNodeLoadAllFilesFromDirectory::LoadAllFilesFromDirectoryAsyncNode(
	ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch) {

	URealTimeImportAsyncNodeLoadAllFilesFromDirectory* instance = NewObject<URealTimeImportAsyncNodeLoadAllFilesFromDirectory>();
	instance->jobData.jobType = ERTIThreadJobType::E_LoadAllFiles;
	instance->jobData.directoryType = directoryType;
	instance->jobData.fileType = fileType;
	instance->jobData.filePath = dirPath;
	instance->jobData.recursiveSearch = recursiveSearch;
	instance->jobData.asyncNodeLoadAllFilesFromDirectory = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadAllFilesFromDirectory::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeLoadAllFilesFromDirectory::jobComplete(int32 count, TArray<FString> files, TArray<FString> filePaths, bool successful) {

	if (successful) {
		OnSuccess.Broadcast(count, files, filePaths);
	}
	else {
		OnFail.Broadcast(count, files, filePaths);
	}

}

/*---Create Sound Wave From File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeCreateSoundWaveFromFile* URealTimeImportAsyncNodeCreateSoundWaveFromFile::CreateSoundWaveFromFileAsyncNode(ERTIDirectoryType directoryType, FString filePath,
	float maxFileSize, ERTISoundFileType soundFileType) {

	URealTimeImportAsyncNodeCreateSoundWaveFromFile* instance = NewObject<URealTimeImportAsyncNodeCreateSoundWaveFromFile>();
	instance->jobData.jobType = ERTIThreadJobType::E_CreateWaveFromFile;
	instance->jobData.directoryType = directoryType;
	instance->jobData.filePath = filePath;
	instance->jobData.maxFileSize = maxFileSize;
	instance->jobData.soundFileType = soundFileType;
	instance->jobData.asyncNodeCreateSoundWaveFromFile = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeCreateSoundWaveFromFile::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeCreateSoundWaveFromFile::jobComplete(FString fileID, USoundWaveProcedural* soundWave, FString fileName, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(fileID, soundWave, fileName, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(fileID, soundWave, fileName, errorCode, errorMessage);
	}
}

/*---Create Sound Wave From Bytes -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeCreateSoundWaveFromBytes* URealTimeImportAsyncNodeCreateSoundWaveFromBytes::CreateSoundWaveFromBytesAsyncNode(FString name, TArray<uint8> bytes, 
	float maxFileSize, ERTISoundFileType soundFileType) {

	URealTimeImportAsyncNodeCreateSoundWaveFromBytes* instance = NewObject<URealTimeImportAsyncNodeCreateSoundWaveFromBytes>();
	instance->jobData.jobType = ERTIThreadJobType::E_CreateWaveFromBytes;
	instance->jobData.name = name;
	instance->jobData.bytes = bytes;
	instance->jobData.maxFileSize = maxFileSize;
	instance->jobData.soundFileType = soundFileType;
	instance->jobData.asyncNodeCreateSoundWaveFromBytes = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeCreateSoundWaveFromBytes::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeCreateSoundWaveFromBytes::jobComplete(USoundWaveProcedural* soundWave, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast( soundWave, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(soundWave, errorCode, errorMessage);
	}

}


/*---Load Image From File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadImageFile* URealTimeImportAsyncNodeLoadImageFile::LoadImageFileAsyncNode(ERTIDirectoryType directoryType, FString filePath,
	TextureCompressionSettings compressionSettings, bool SRGB, bool createMipMaps) {

	URealTimeImportAsyncNodeLoadImageFile* instance = NewObject<URealTimeImportAsyncNodeLoadImageFile>();
	instance->jobData.jobType = ERTIThreadJobType::E_LoadImageFile;
	instance->jobData.directoryType = directoryType;
	instance->jobData.filePath = filePath;
	instance->jobData.compressionSettings = compressionSettings;
	instance->jobData.SRGB = SRGB;
	instance->jobData.createMipMaps = createMipMaps;
	instance->jobData.asyncNodeLoadImageFile = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadImageFile::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeLoadImageFile::jobComplete(UTexture2D* texture, FString fileName, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(texture, fileName, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(texture, fileName, errorCode, errorMessage);
	}
}


/*---Load Image From Bytes -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadImageBytes* URealTimeImportAsyncNodeLoadImageBytes::LoadImageBytesAsyncNode(FString name, TArray<uint8> bytes,
	TextureCompressionSettings compressionSettings, bool SRGB, bool createMipMaps) {

	URealTimeImportAsyncNodeLoadImageBytes* instance = NewObject<URealTimeImportAsyncNodeLoadImageBytes>();
	instance->jobData.jobType = ERTIThreadJobType::E_LoadImageBytes;
	instance->jobData.name = name;
	instance->jobData.bytes = bytes;
	instance->jobData.compressionSettings = compressionSettings;
	instance->jobData.SRGB = SRGB;
	instance->jobData.createMipMaps = createMipMaps;
	instance->jobData.asyncNodeLoadImageBytes = instance;

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadImageBytes::Activate() {
	(new FAutoDeleteAsyncTask<FRealTimeImportThread>(jobData))->StartBackgroundTask();
}

void URealTimeImportAsyncNodeLoadImageBytes::jobComplete(UTexture2D* texture, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(texture, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(texture, errorCode, errorMessage);
	}

}