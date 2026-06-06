#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateWaterWeapon.generated.h"

class AGothicCharacter;
class UAbilityTask_UpdateWaterWeapon;
class UCarryComponent;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_UpdateWaterWeapon : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
public:
    UAbilityTask_UpdateWaterWeapon();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateWaterWeapon* UpdateWaterWeapon(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
protected:
    UFUNCTION()
    void OnGroundWeaponUnequipped();
    
    UFUNCTION()
    void EquipWaterWalkingWeapon();
    
    UFUNCTION()
    void EquipSwimmingWeapon();
    
    UFUNCTION()
    void CheckWaterWeapons();
    
};

