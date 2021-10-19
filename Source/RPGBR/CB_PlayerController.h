// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CB_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RPGBR_API ACB_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ACB_PlayerController();

protected:
	// PlayerController Interface
	virtual void SetupInputComponent() override;
};
