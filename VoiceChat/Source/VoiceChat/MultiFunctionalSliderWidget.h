// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "MultiFunctionalSliderWidget.generated.h"


class UTextBlock;
class USlider;
class USoundClass;
UCLASS()
class VOICECHAT_API UMultiFunctionalSliderWidget : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeOnInitialized() override;
public:

	//FString Percent = 0.5f;

	UPROPERTY(meta=(BindWidget),BlueprintReadWrite)
	USlider* SoundSlider;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Audio")
	USoundClass* SoundClass;
	
	UPROPERTY(meta=(BindWidget))
	UTextBlock* SoundText;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* SubSoundText;

	UPROPERTY(meta=(BindWidget),BlueprintReadWrite)
	UTextBlock* PercentValue;

	UFUNCTION()
	void OnSet(float Value);
};
