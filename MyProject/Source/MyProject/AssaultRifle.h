// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "UObject/Object.h"
#include "AssaultRifle.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AAssaultRifle : public AWeapon
{
	GENERATED_BODY()
	
    virtual void OnStartFire() override;
    virtual void OnStopFire() override;
};
