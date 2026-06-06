#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "HUDCrosshair.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UHUDCrosshair : public UInterface {
    GENERATED_BODY()
};

class IHUDCrosshair : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetOutOfFocus();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetInFocus(const AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowUnreachableLocation(const FVector& Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetRangedWeaponCrosshairVisibility(bool Visible, bool IsAiming);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetMagicCrosshairVisibility(bool Visible, bool isTargeting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshWeaponAccuracy(float accuracy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshWarning(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefreshTarget(bool hasTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideUnreachableLocation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageCaused(bool isCritical);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCastEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCastBegin(int32 spellLevel, int32 totalLevels, float manaCost, float castDuration);
    
};

