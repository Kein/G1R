#include "GameplayAbilitySpellControl.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilitySpellControl::UGameplayAbilitySpellControl() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TargetControlledEffect = NULL;
    this->m_CasterControllingEffect = NULL;
    this->m_CameraTravelInitialDelay = 0.20f;
    this->m_CameraTravelDuration = 1.00f;
    this->m_WaitingForEndControlEventTask = NULL;
    this->m_Success = false;
}


void UGameplayAbilitySpellControl::OnControlFinished(FGameplayEventData Payload) {
}

void UGameplayAbilitySpellControl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilitySpellControl, m_Success);
}


