// Fill out your copyright notice in the Description page of Project Settings.


#include "Interact_audio.h"

// Sets default values
AInteract_audio::AInteract_audio()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteract_audio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteract_audio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInteract_audio::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

