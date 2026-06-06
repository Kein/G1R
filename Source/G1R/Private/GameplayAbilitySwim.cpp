#include "GameplayAbilitySwim.h"
#include "Templates/SubclassOf.h"

UGameplayAbilitySwim::UGameplayAbilitySwim() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_SwimTask = NULL;
    this->m_OxygenDepletionEffect = NULL;
    this->m_OxygenRecoveryEffect = NULL;
    this->m_OxygenRanOutEffect = NULL;
    this->m_OxygenRestoreEffect = NULL;
}

void UGameplayAbilitySwim::Server_ApplyEffects_StopDiving_Implementation() {
}

void UGameplayAbilitySwim::Server_ApplyEffects_StartDiving_Implementation() {
}

void UGameplayAbilitySwim::Server_ApplyEffects_OxygenRestored_Implementation() {
}


void UGameplayAbilitySwim::Server_ApplyEffects_OxygenRanOut_Implementation() {
}

void UGameplayAbilitySwim::OnSwimTypeChanged(ESwimType NewSwimType) {
}

void UGameplayAbilitySwim::OnClimb(const FGameplayTag CallbackTag, int32 NewCount) {
}

void UGameplayAbilitySwim::InputSwimUp(const FInputActionInstance& Instance) {
}

void UGameplayAbilitySwim::InputSwimDown(const FInputActionInstance& Instance) {
}

FActiveGameplayEffectHandle UGameplayAbilitySwim::ApplyGameplayEffect(TSubclassOf<UScriptGameplayEffect> EffectClass) {
    return FActiveGameplayEffectHandle{};
}


