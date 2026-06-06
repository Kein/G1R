#include "WeaponDefinition.h"

UWeaponDefinition::UWeaponDefinition() {
    this->m_SuperArmorDamageBase = 0.00f;
    this->m_HitEffect = NULL;
    this->m_CriticalMultiplier = 1.00f;
    this->m_DeathEffect = NULL;
}

float UWeaponDefinition::GetSuperArmorDamage() const {
    return 0.0f;
}

UGameplayEffect* UWeaponDefinition::GetHitEffect() const {
    return NULL;
}

FGameplayTag UWeaponDefinition::GetHitCueDataByDamageTypeAndSpecie(FGameplayTag DamageTypeTag, FGameplayTag SpecieTypeTag) {
    return FGameplayTag{};
}

UGameplayEffect* UWeaponDefinition::GetDeathEffect() const {
    return NULL;
}

TArray<FGameplayTag> UWeaponDefinition::GetDamageTypes() const {
    return TArray<FGameplayTag>();
}

float UWeaponDefinition::GetDamage(const FGameplayTag& DamageType) const {
    return 0.0f;
}

FGameplayTagContainer UWeaponDefinition::GetCriticalWeakSpotsTags() const {
    return FGameplayTagContainer{};
}

float UWeaponDefinition::GetCriticalMultiplier() const {
    return 0.0f;
}

TMap<FGameplayTag, float> UWeaponDefinition::GetAllDamages() const {
    return TMap<FGameplayTag, float>();
}

void UWeaponDefinition::AddHitCueDataForSpecie(FGameplayTag DamageTypeTag, FGameplayTag SpecieTypeTag, FGameplayTag HitCueTag) {
}


