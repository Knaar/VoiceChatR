// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraSystem.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class VOICECHAT_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Niagara")
		UNiagaraSystem* TraceFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Niagara")
	UNiagaraComponent* TraceVFXComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Niagara")
		FString TraceTargetName = "TraceTarget";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Niagara")
	FString TraceStartName = "TraceStart";

	UFUNCTION(BlueprintCallable)
		void SpawnTraceFX(const FVector& TraceStart);

	UFUNCTION(BlueprintCallable,BlueprintPure)
	UNiagaraComponent* GetComponent(){ return TraceVFXComponent ? TraceVFXComponent : nullptr;}
	
	UFUNCTION(BlueprintCallable)
	void SetStartEndToNiagara(const FVector& TraceStart, const FVector& TraceEnd);
};
