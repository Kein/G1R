#include "AbilityTask_Swim.h"

UAbilityTask_Swim::UAbilityTask_Swim() {
    this->m_Character = NULL;
    this->m_SwimConfig = NULL;
}

UAbilityTask_Swim* UAbilityTask_Swim::CreateTask(UGameplayAbility* OwningAbility, FName TaskInstanceName) {
    return NULL;
}


