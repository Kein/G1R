#include "GameplayAbilityHitPhaseChange.h"

UGameplayAbilityHitPhaseChange::UGameplayAbilityHitPhaseChange() {
    this->AbilityTriggers.AddDefaulted(3);
}

bool UGameplayAbilityHitPhaseChange::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityHitPhaseChange::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityHitPhaseChange::InitializeHitData(FGameplayEventData& Payload, FGameplayEffectContext_HitResponse& HitContext) {
}

void UGameplayAbilityHitPhaseChange::DoPhaseChange_Scriptable_Implementation() {
}


