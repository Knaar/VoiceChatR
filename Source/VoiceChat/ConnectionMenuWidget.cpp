// Fill out your copyright notice in the Description page of Project Settings.


#include "ConnectionMenuWidget.h"

TArray<FString> UConnectionMenuWidget::ReadFile(const FString& FileName)
{
	TArray<FString> Result;

	// Открываем файл для чтения
	FString Text;
	FFileHelper::LoadFileToString(Text, *(FPaths::ProjectDir()+FileName));

	// Разделяем текст на строки
	Text.ParseIntoArrayLines(Result);

	//Text.ParseIntoArray(Result,TEXT("\r"),true);
	return Result;
}
