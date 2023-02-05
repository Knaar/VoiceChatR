// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DropDownWidget.generated.h"


UCLASS()
class VOICECHAT_API UDropDownWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure)
	TArray<FString> ReadFile(const FString& FileName);
};
