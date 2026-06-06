#include "GameplayAbilityHit.h"

UGameplayAbilityHit::UGameplayAbilityHit() {
    this->bRetriggerInstancedAbility = true;
    this->AbilityTriggers.AddDefaulted(2);
    this->m_OnHitEffect = NULL;
}

UAnimMontage* UGameplayAbilityHit::GetHitMontage_Scriptable_Implementation(const UHitData* HitData, const FGameplayTagContainer& MetaData) {
    return NULL;
}


