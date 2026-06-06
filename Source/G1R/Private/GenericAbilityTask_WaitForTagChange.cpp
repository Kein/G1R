#include "GenericAbilityTask_WaitForTagChange.h"

UGenericAbilityTask_WaitForTagChange::UGenericAbilityTask_WaitForTagChange() {
    this->bCheckTagsOnActivate = true;
}

void UGenericAbilityTask_WaitForTagChange::OnStateTagCountChanged(const FGameplayTag InTag, int32 NewCount) {
}


