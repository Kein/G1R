#include "AttackConfig.h"

UAttackConfig::UAttackConfig() {
    this->m_CanKnockback = false;
    this->m_SuperArmorDamageMultiplier = 1.00f;
    this->m_SuperArmorResistanceMultiplier = 1.00f;
}

float UAttackConfig::GetSuperArmorResistanceMultiplier() const {
    return 0.0f;
}

float UAttackConfig::GetSuperArmorDamageMultiplier() const {
    return 0.0f;
}

TMap<FGameplayTag, float> UAttackConfig::GetDamageMultipliers() const {
    return TMap<FGameplayTag, float>();
}

FGameplayTag UAttackConfig::GetAttackDirection() const {
    return FGameplayTag{};
}

bool UAttackConfig::CanKnockback() const {
    return false;
}

bool UAttackConfig::CanBeParried() const {
    return false;
}

bool UAttackConfig::CanBeDeflected() const {
    return false;
}


