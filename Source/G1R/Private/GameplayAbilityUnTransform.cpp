#include "GameplayAbilityUnTransform.h"

UGameplayAbilityUnTransform::UGameplayAbilityUnTransform() {
    this->AbilityTriggers.AddDefaulted(2);
    this->m_SpawnDefinition = NULL;
    this->m_UnTransformPlayMontageTask = NULL;
}


void UGameplayAbilityUnTransform::OnUnTransformMontageCompleted() {
}

void UGameplayAbilityUnTransform::OnHoldFinished() {
}

void UGameplayAbilityUnTransform::OnHoldCanceled() {
}




