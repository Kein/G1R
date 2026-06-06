#include "GameplayEffectContext_HitResponse.h"

FGameplayEffectContext_HitResponse::FGameplayEffectContext_HitResponse() {
    this->CanBeParried = false;
    this->CanBeDeflected = false;
    this->WeaponUsed = NULL;
    this->MultiplierSuperArmor = 0.00f;
    this->BowStretch = 0.00f;
    this->CustomKnockbackData = NULL;
    this->AttackConfig = NULL;
}

