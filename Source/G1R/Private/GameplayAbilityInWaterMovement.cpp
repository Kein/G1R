#include "GameplayAbilityInWaterMovement.h"

UGameplayAbilityInWaterMovement::UGameplayAbilityInWaterMovement() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_UpdateWeaponTask = NULL;
}

void UGameplayAbilityInWaterMovement::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled) {
}

void UGameplayAbilityInWaterMovement::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}


