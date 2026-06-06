#include "GameplayAbilitySpellCameraBase.h"

UGameplayAbilitySpellCameraBase::UGameplayAbilitySpellCameraBase() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_bCanEverTick = true;
    this->m_WasCharacterMoving = false;
}

void UGameplayAbilitySpellCameraBase::ServerDisableCameraBehaviour_Implementation() {
}

void UGameplayAbilitySpellCameraBase::OnUpdateAbility_Scriptable_Implementation(float DeltaTime) {
}

void UGameplayAbilitySpellCameraBase::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled) {
}

bool UGameplayAbilitySpellCameraBase::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilitySpellCameraBase::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilitySpellCameraBase::ClientDisableCameraBehaviour_Implementation() {
}


