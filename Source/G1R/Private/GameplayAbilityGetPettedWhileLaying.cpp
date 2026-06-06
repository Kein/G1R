#include "GameplayAbilityGetPettedWhileLaying.h"

UGameplayAbilityGetPettedWhileLaying::UGameplayAbilityGetPettedWhileLaying() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_PlayMontageTask = NULL;
}


