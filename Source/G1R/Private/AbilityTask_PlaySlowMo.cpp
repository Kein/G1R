#include "AbilityTask_PlaySlowMo.h"

UAbilityTask_PlaySlowMo::UAbilityTask_PlaySlowMo() {
    this->m_Target = NULL;
}

UAbilityTask_PlaySlowMo* UAbilityTask_PlaySlowMo::PlaySlowMo(UGameplayAbility* OwningAbility, AActor* Target, float Time, float Magnitude) {
    return NULL;
}

void UAbilityTask_PlaySlowMo::OnTimeFinish() {
}


