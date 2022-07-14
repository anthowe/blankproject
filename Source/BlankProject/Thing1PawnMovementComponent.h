// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Thing1PawnMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class BLANKPROJECT_API UThing1PawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

		virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
