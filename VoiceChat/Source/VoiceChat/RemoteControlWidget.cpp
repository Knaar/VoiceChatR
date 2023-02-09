// Fill out your copyright notice in the Description page of Project Settings.


#include "RemoteControlWidget.h"

void URemoteControlWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
	WebArray=ReadFile(NameSavedFileGonnaBeOpen);
	WebArraySize=WebArray.Num();
}

int32 URemoteControlWidget::AddressIteratorIncrease()
{
	
	
	if(WebIterator<(WebArraySize-1)) 
	{
		WebIterator++;
	}
	return WebIterator;
}

int32 URemoteControlWidget::AddressIteratorDecrease()
{
	
	if(WebIterator>0)
	{
		WebIterator--;
	}
	return WebIterator;
}

TArray<FString> URemoteControlWidget::ReadFile(const FString& FileName)
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
