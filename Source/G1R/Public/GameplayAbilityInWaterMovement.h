#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityMovement.h"
#include "GameplayAbilityInWaterMovement.generated.h"

class UAbilityTask_UpdateWaterWeapon;

UCLASS()
class G1R_API UGameplayAbilityInWaterMovement : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdateWaterWeapon* m_UpdateWeaponTask;
    
public:
    UGameplayAbilityInWaterMovement();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
};

