#pragma once
#include "CoreMinimal.h"
#include "EWeaponSkill.h"
#include "ProjectileDefinition.h"
#include "BreakableProjectileDefinition.generated.h"

class AActor;

UCLASS(EditInlineNew)
class G1R_API UBreakableProjectileDefinition : public UProjectileDefinition {
    GENERATED_BODY()
public:
    UBreakableProjectileDefinition();

    UFUNCTION(BlueprintImplementableEvent)
    float CalculatePenetrationCoef_Scriptable(float kineticEnergyCoef, float surfaceHardness) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 CalculateBreakagePercentage_Scriptable(float distanceBetweenBowmanLocationAndHitLocation, float surfaceHardness, float kineticEnergyCoef, const AActor* HitActor, EWeaponSkill weaponSkill) const;
    
};

