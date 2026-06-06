#include "GameplayAbilitySelfConversation.h"

UGameplayAbilitySelfConversation::UGameplayAbilitySelfConversation() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->SelfTopicSet = NULL;
}


