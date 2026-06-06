#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityEquipWeaponAuto.generated.h"

UCLASS()
class G1R_API UGameplayAbilityEquipWeaponAuto : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
    UGameplayAbilityEquipWeaponAuto();

private:
    UFUNCTION()
    void EquippingFinished();
    
};

