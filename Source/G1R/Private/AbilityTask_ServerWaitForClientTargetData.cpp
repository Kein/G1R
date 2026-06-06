#include "AbilityTask_ServerWaitForClientTargetData.h"

UAbilityTask_ServerWaitForClientTargetData::UAbilityTask_ServerWaitForClientTargetData() {
}

UAbilityTask_ServerWaitForClientTargetData* UAbilityTask_ServerWaitForClientTargetData::ServerWaitForClientTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, bool TriggerOnce) {
    return NULL;
}

void UAbilityTask_ServerWaitForClientTargetData::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) {
}


