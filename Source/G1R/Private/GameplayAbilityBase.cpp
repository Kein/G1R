#include "GameplayAbilityBase.h"

UGameplayAbilityBase::UGameplayAbilityBase() {
    this->m_ActivateAbilityOnGranted = false;
    this->m_TickEnabled = false;
    this->m_bCanEverTick = false;
    this->m_FinishOnInputReleased = false;
    this->m_OnlyPlayer = false;
    this->m_LoadAssetsPriority = 15;
    this->m_MaxActiveCount = 1;
}

void UGameplayAbilityBase::TriggerEndOn(const FGameplayTag Tag) {
}

void UGameplayAbilityBase::TriggerBeginOn(const FGameplayTag Tag, TEnumAsByte<EGameplayAbilityTriggerSource::Type> TriggerSource) {
}


