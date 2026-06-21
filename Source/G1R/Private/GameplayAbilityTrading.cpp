#include "GameplayAbilityTrading.h"

UGameplayAbilityTrading::UGameplayAbilityTrading() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ShouldResetInteractiveLogic = false;
    this->m_TraderActor = NULL;
    this->m_HUDTradingController = NULL;
    this->m_TraderPayload = NULL;
}

void UGameplayAbilityTrading::OnUIDoPurchase() {
}

void UGameplayAbilityTrading::OnCloseScreenCallback() {
}


