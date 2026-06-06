#include "AttackLoopConfig.h"

UAttackLoopConfig::UAttackLoopConfig() {
    this->m_AIMaxSeconds = 5.00f;
    this->m_PlayerSeconds = 5.00f;
}

float UAttackLoopConfig::GetPlayerTime() const {
    return 0.0f;
}

UAnimMontage* UAttackLoopConfig::GetAttackMontage() const {
    return NULL;
}

float UAttackLoopConfig::GetAIMaxTime() const {
    return 0.0f;
}


