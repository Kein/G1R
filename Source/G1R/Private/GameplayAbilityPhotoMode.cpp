#include "GameplayAbilityPhotoMode.h"

UGameplayAbilityPhotoMode::UGameplayAbilityPhotoMode() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_PreviousOwner = NULL;
    this->m_Controller = NULL;
    this->m_PhotoPawn = NULL;
}


