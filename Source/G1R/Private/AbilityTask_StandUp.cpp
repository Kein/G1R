#include "AbilityTask_StandUp.h"

UAbilityTask_StandUp::UAbilityTask_StandUp() {
    this->m_InteractiveComponent = NULL;
    this->m_CharacterState = NULL;
}

UAbilityTask_StandUp* UAbilityTask_StandUp::CreateUpdateStandUp(UGameplayAbility* OwningAbility, FName TaskInstanceName, float Duration) {
    return NULL;
}


