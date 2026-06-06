#include "SpellProjectileDefinition.h"

USpellProjectileDefinition::USpellProjectileDefinition() {
    this->m_Name = FText::FromString(TEXT("SpellProjectile"));
    this->m_DefaultTargetDistance = 10000.00f;
    this->m_Speed = 1500.00f;
    this->m_Gravity = 0.00f;
    this->m_SteeringFactor = 1.00f;
    this->m_LifeTime = 6.00f;
}

float USpellProjectileDefinition::GetDamageByCharacterMagicCircle(AGothicCharacter* Character, FGameplayTag DamageTag) {
    return 0.0f;
}

void USpellProjectileDefinition::AddDamageForMagicCircle(FGameplayTag DamageTag, FGameplayTag MagicCircleTag, float DamageValue) {
}


