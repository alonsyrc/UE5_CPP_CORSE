// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorClase1.generated.h"

UCLASS()
class UNREALENGINECOURSE_API AActorClase1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AActorClase1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Example")
		float edad;

};
