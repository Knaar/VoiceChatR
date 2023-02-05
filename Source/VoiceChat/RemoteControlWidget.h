// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RemoteControlWidget.generated.h"

UCLASS()
class VOICECHAT_API URemoteControlWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeOnInitialized() override;

public:

	UPROPERTY(BlueprintReadWrite,VisibleAnywhere,Category="Web")
	int32 WebIterator = 0;
	
	UPROPERTY(BlueprintReadWrite,Category="Web")
	TArray<FString> WebArray;
	
	UPROPERTY(BlueprintReadWrite,Category="Web")
	int32 WebArraySize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Web")
	FString NameSavedFileGonnaBeOpen;

	UFUNCTION(BlueprintPure)
	TArray<FString> ReadFile(const FString& FileName);
	
	int32 GetWebArraySize() const {return WebArray.Num();};
	
	UFUNCTION(BlueprintCallable)
	int32 AddressIteratorIncrease();

	UFUNCTION(BlueprintCallable)
	int32 AddressIteratorDecrease();

	
};
