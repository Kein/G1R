#include "GenericAbilityTask_WaitForEvent.h"

UGenericAbilityTask_WaitForEvent::UGenericAbilityTask_WaitForEvent() {
    this->bWaitForExactTagMatch = false;
    this->OptionalExternalTarget = NULL;
}

UGenericAbilityTask_WaitForEvent* UGenericAbilityTask_WaitForEvent::TaskWaitForEvent(UGameplayAbility* OwningAbility, FGameplayTag NewEventToWaitFor, bool bRequireExactTagMatch, AActor* OptionalUseOtherActor) {
    return NULL;
}

UAbilitySystemComponent* UGenericAbilityTask_WaitForEvent::GetTargetASC() {
    return NULL;
}


