// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiFunctionalSliderWidget.h"

#include "Components/Slider.h"

void UMultiFunctionalSliderWidget::NativeOnInitialized()
{
	
	Super::NativeOnInitialized();
	if(!SoundClass)return;
    
	SoundSlider->SetValue(SoundClass->Properties.Volume);
	SoundSlider->OnValueChanged.AddDynamic(this,&ThisClass::OnSet);
}

void UMultiFunctionalSliderWidget::OnSet(float Value)
{
	if(!SoundClass)return;
	SoundClass->Properties.Volume=Value;
}
