#include "AbilityTask_WaitTargetDataUsingActor.h"

UAbilityTask_WaitTargetDataUsingActor::UAbilityTask_WaitTargetDataUsingActor() {
    this->TargetActor = NULL;
}

UAbilityTask_WaitTargetDataUsingActor* UAbilityTask_WaitTargetDataUsingActor::WaitTargetDataWithReusableActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, AGameplayAbilityTargetActor* InTargetActor, bool bCreateKeyIfNotValidForMorePredicting) {
    return NULL;
}

void UAbilityTask_WaitTargetDataUsingActor::OnTargetDataReplicatedCancelledCallback() {
}

void UAbilityTask_WaitTargetDataUsingActor::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) {
}

void UAbilityTask_WaitTargetDataUsingActor::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data) {
}

void UAbilityTask_WaitTargetDataUsingActor::OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data) {
}


