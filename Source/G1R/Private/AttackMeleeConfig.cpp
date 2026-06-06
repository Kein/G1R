#include "AttackMeleeConfig.h"

UAttackMeleeConfig::UAttackMeleeConfig() {
    this->m_AttackDistanceFromMontage = 0.00f;
    this->m_AttackHandle = EAttackHandle::RightHand;
}

UAnimMontage* UAttackMeleeConfig::GetParriedMontage() const {
    return NULL;
}

UAnimMontage* UAttackMeleeConfig::GetDeflectedMontage() const {
    return NULL;
}

UAnimMontage* UAttackMeleeConfig::GetAttackMontage() const {
    return NULL;
}

EAttackHandle UAttackMeleeConfig::GetAttackHandle() const {
    return EAttackHandle::None;
}

float UAttackMeleeConfig::GetAttackDistanceFromMontage() {
    return 0.0f;
}


