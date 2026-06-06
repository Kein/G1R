#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbility_EquipWaterWeapon.generated.h"

class AGothicCharacter;
class UCarryComponent;

UCLASS()
class G1R_API UGameplayAbility_EquipWaterWeapon : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_WeaponType;
    
public:
    UGameplayAbility_EquipWaterWeapon();

protected:
    UFUNCTION()
    void TryEquipWeapon();
    
    UFUNCTION()
    void OnTagUpdated(FGameplayTag Tag, int32 NewCount);
    
    UFUNCTION()
    void OnPreviousWeaponUnequipped();
    
    UFUNCTION()
    void EquipWeapon();
    
};

