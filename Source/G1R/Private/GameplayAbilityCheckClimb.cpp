#include "GameplayAbilityCheckClimb.h"

UGameplayAbilityCheckClimb::UGameplayAbilityCheckClimb() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->m_Task = NULL;
    this->m_InputComponent = NULL;
}

void UGameplayAbilityCheckClimb::OnClimb(const FTraversalInfo& climbingInfo) {
}


