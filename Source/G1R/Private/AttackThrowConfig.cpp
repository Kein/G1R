#include "AttackThrowConfig.h"

UAttackThrowConfig::UAttackThrowConfig() {
    this->m_ProjectileClass = NULL;
    this->m_ArrowGravityModifier = 1.00f;
    this->m_ProjectileSpeedMin = 1.00f;
    this->m_ProjectileSpeedMax = 1.00f;
}

float UAttackThrowConfig::GetProjectileSpeedMin() const {
    return 0.0f;
}

float UAttackThrowConfig::GetProjectileSpeedMax() const {
    return 0.0f;
}

FVector UAttackThrowConfig::GetProjectileRotator() const {
    return FVector{};
}

UItemDefinition* UAttackThrowConfig::GetProjectile() const {
    return NULL;
}

UAnimMontage* UAttackThrowConfig::GetAttackMontage() const {
    return NULL;
}

float UAttackThrowConfig::GetArrowGravityModifier() const {
    return 0.0f;
}


