// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_PlayerController.h"
#include "CB_CameraLogic.h"

ACB_PlayerController::ACB_PlayerController() {
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ACB_PlayerController::SetupInputComponent() {
	Super::SetupInputComponent();												// Set up gameplay key bindings

	
}