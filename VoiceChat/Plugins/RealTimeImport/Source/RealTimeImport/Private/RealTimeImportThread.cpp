// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportThread.h"


void FRealTimeImportThread::DoWork() {
	
	switch (jobData.jobType){
	case ERTIThreadJobType::E_LoadMesh:
	{
		bool success = false;
		FString successMessage;
		TArray<FRTIModelStruct> modelStructs;
		URealTimeImportMesh::getRealTimeImportMesh()->LoadMeshFile(jobData.meshFileType,
			jobData.directoryType,
			jobData.filePath,
			success,
			successMessage,
			modelStructs,
			jobData.coordinateSystem,
			jobData.autoDetectionNormalMap,
			jobData.SRGB);

		if (jobData.asyncNodeLoadMesh != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, modelStructs, successMessage, success]() {
				if (jobDataCopy.asyncNodeLoadMesh != nullptr && jobDataCopy.asyncNodeLoadMesh->IsValidLowLevel()) {
					jobDataCopy.asyncNodeLoadMesh->jobComplete(modelStructs, successMessage, success);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_LoadFile:
	{
		FString fileName;
		TArray<uint8> bytes;
		int32 errorCode;
		FString errorMessage;
		UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->LoadFile(jobData.directoryType, jobData.filePath,
			fileName, bytes, errorCode, errorMessage);

		if (jobData.asyncNodeLoadFile != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, fileName, bytes, errorCode, errorMessage]() {
				if (jobDataCopy.asyncNodeLoadFile != nullptr && jobDataCopy.asyncNodeLoadFile->IsValidLowLevel()) {
					jobDataCopy.asyncNodeLoadFile->jobComplete(fileName, bytes, errorCode, errorMessage);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_SaveFile:
	{
		FString fileName;
		FString fullPath;
		int32 errorCode;
		FString errorMessage;
		UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->SaveFile(jobData.directoryType, jobData.filePath, jobData.createDirectories, jobData.overwriteFile,
			jobData.bytes, fileName, fullPath, errorCode, errorMessage);

		if (jobData.asyncNodeSaveFile != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, fileName, fullPath, errorCode, errorMessage]() {
				if (jobDataCopy.asyncNodeSaveFile != nullptr && jobDataCopy.asyncNodeSaveFile->IsValidLowLevel()) {
					jobDataCopy.asyncNodeSaveFile->jobComplete(fileName, fullPath, errorCode, errorMessage);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_LoadAllFiles:
	{

		int32 count;
		TArray<FString> files;
		TArray<FString> filePaths;
		bool success = UFileFunctionsRealTimeImport::getFileFunctionsRealTimeImport()->LoadAllFilesFromDirectory(jobData.directoryType, jobData.fileType, jobData.filePath, jobData.recursiveSearch,
			count, files, filePaths);

		if (jobData.asyncNodeLoadAllFilesFromDirectory != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, count, files, filePaths, success]() {
				if (jobDataCopy.asyncNodeLoadAllFilesFromDirectory != nullptr && jobDataCopy.asyncNodeLoadAllFilesFromDirectory->IsValidLowLevel()) {
					jobDataCopy.asyncNodeLoadAllFilesFromDirectory->jobComplete(count, files, filePaths, success);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_CreateWaveFromFile:
	{

		FString fileID;
		USoundWaveProcedural* soundWave;
		FString fileName;
		int32 errorCode = 0;
		FString errorMessage;
		URealTimeImportSound::getRealTimeImportSound()->CreateSoundWaveFromFile(jobData.directoryType, jobData.filePath,
			jobData.maxFileSize, fileID, jobData.soundFileType, soundWave, fileName, errorCode, errorMessage);

		if (jobData.asyncNodeCreateSoundWaveFromFile != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, fileID, soundWave, fileName, errorCode, errorMessage]() {
				if (jobDataCopy.asyncNodeCreateSoundWaveFromFile != nullptr && jobDataCopy.asyncNodeCreateSoundWaveFromFile->IsValidLowLevel()) {
					jobDataCopy.asyncNodeCreateSoundWaveFromFile->jobComplete(fileID, soundWave, fileName, errorCode, errorMessage);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_CreateWaveFromBytes:
	{

		FString fileID;
		USoundWaveProcedural* soundWave;
		FString fileName;
		int32 errorCode = 0;
		FString errorMessage;
		URealTimeImportSound::getRealTimeImportSound()->CreateSoundWaveFromBytes(jobData.name, jobData.bytes,
			jobData.maxFileSize, jobData.soundFileType, soundWave, errorCode, errorMessage);

		if (jobData.asyncNodeCreateSoundWaveFromBytes != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, soundWave, errorCode, errorMessage]() {
				if (jobDataCopy.asyncNodeCreateSoundWaveFromBytes != nullptr && jobDataCopy.asyncNodeCreateSoundWaveFromBytes->IsValidLowLevel()) {
					jobDataCopy.asyncNodeCreateSoundWaveFromBytes->jobComplete(soundWave, errorCode, errorMessage);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_LoadImageFile:
	{
		UTexture2D* texture;
		FString fileName;
		int32 errorCode = 0;
		FString errorMessage;
		URealTimeImportImage::getRealTimeImportImage()->LoadImageFile(jobData.directoryType, jobData.filePath,
			texture, fileName, errorCode, errorMessage, jobData.compressionSettings, jobData.SRGB, jobData.createMipMaps);

		if (jobData.asyncNodeLoadImageFile != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, texture, fileName, errorCode, errorMessage]() {
				if (jobDataCopy.asyncNodeLoadImageFile != nullptr && jobDataCopy.asyncNodeLoadImageFile->IsValidLowLevel()) {
					jobDataCopy.asyncNodeLoadImageFile->jobComplete(texture, fileName, errorCode, errorMessage);
				}
				});
		}
	}
	break;
	case ERTIThreadJobType::E_LoadImageBytes:
	{
		UTexture2D* texture;
		int32 errorCode = 0;
		FString errorMessage;
		URealTimeImportImage::getRealTimeImportImage()->LoadImageBytes(jobData.name, jobData.bytes,
			texture, errorCode, errorMessage, jobData.compressionSettings, jobData.SRGB, jobData.createMipMaps);

		if (jobData.asyncNodeLoadImageBytes != nullptr) {
			FSRealtimeImportThreadJobData jobDataCopy = jobData;
			AsyncTask(ENamedThreads::GameThread, [jobDataCopy, texture, errorCode, errorMessage]() {
				if (jobDataCopy.asyncNodeLoadImageBytes != nullptr && jobDataCopy.asyncNodeLoadImageBytes->IsValidLowLevel()) {
					jobDataCopy.asyncNodeLoadImageBytes->jobComplete(texture, errorCode, errorMessage);
				}
				});
		}
	}
	break;
	}
	
}