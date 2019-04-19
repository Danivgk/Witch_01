// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MedKit.generated.h"

UCLASS()
class WITCHHUNT_04_API AMedKit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMedKit();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor);

	float RunningTime;

	UPROPERTY(EditAnywhere, Category = "MedKit Movement")
		float XValue;

	UPROPERTY(EditAnywhere, Category = "MedKit Movement")
		float YValue;

	UPROPERTY(EditAnywhere, Category = "MedKit Movement")
		float ZValue;

};
