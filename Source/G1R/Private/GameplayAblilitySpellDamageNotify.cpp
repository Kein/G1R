#include "GameplayAblilitySpellDamageNotify.h"

UGameplayAblilitySpellDamageNotify::UGameplayAblilitySpellDamageNotify() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_PlayMontageTask = NULL;
}

void UGameplayAblilitySpellDamageNotify::PlayMontageTask(UAnimMontage* Montage) {
}

void UGameplayAblilitySpellDamageNotify::OnUpdateAbility_Scriptable_Implementation(float DeltaTime) {
}

void UGameplayAblilitySpellDamageNotify::OnNotifyDamageEnd_Scriptable_Implementation() {
}

void UGameplayAblilitySpellDamageNotify::OnNotifyDamageBegin_Scriptable_Implementation(float TotalDuration) {
}

void UGameplayAblilitySpellDamageNotify::OnInterrupted_Scriptable_Implementation() {
}

void UGameplayAblilitySpellDamageNotify::OnInterrupted() {
}

void UGameplayAblilitySpellDamageNotify::OnCompleted_Scriptable_Implementation() {
}

void UGameplayAblilitySpellDamageNotify::OnCompleted() {
}

void UGameplayAblilitySpellDamageNotify::OnCancelled_Scriptable_Implementation() {
}

void UGameplayAblilitySpellDamageNotify::OnCancelled() {
}

void UGameplayAblilitySpellDamageNotify::OnActivateAbility_Scriptable_Implementation() {
}

void UGameplayAblilitySpellDamageNotify::DoEndAbility() {
}


