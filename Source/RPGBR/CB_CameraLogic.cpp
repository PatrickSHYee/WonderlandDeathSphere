// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_CameraLogic.h"
#include "CB_PlayerController.h"

// Sets default values
ACB_CameraLogic::ACB_CameraLogic()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACB_CameraLogic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACB_CameraLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACB_CameraLogic::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

