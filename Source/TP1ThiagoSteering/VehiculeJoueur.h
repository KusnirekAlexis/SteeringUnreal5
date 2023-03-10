// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vehicule.h"
#include "VehiculeJoueur.generated.h"

UCLASS()
class TP1THIAGOSTEERING_API AVehiculeJoueur : public AVehicule
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AVehiculeJoueur();
	UPROPERTY(EditAnywhere)
		AVehicule* Vehicule;
	UPROPERTY(EditAnywhere)
		float Speed = 2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION()
		void MoveForward(float DeltaTime);
	UFUNCTION()
		void MoveRight(float DeltaTime);
	UFUNCTION()
		void MoveUp(float DeltaTime);

	void SetupInput();

};

