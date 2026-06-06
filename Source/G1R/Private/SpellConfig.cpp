#include "SpellConfig.h"
#include "Templates/SubclassOf.h"

USpellConfig::USpellConfig() {
    this->m_SpellItemAnimConfig = NULL;
    this->m_SpellTargetType = ESpellTargetType::None;
    this->m_SpellManaUsage = ESpellManaUsage::Normal;
    this->m_TimePercentageFromWhichCantCancelSpell = 0.00f;
    this->m_AreaRange = 1000.00f;
    this->m_AreaAngle = 360.00f;
}

bool USpellConfig::IsTargetReachable_Scriptable_Implementation(const AGothicCharacter* Instigator, const AGothicCharacter* Target) const {
    return false;
}

float USpellConfig::GetTimePercentageFromWhichCantCancelSpell() const {
    return 0.0f;
}

ESpellTargetType USpellConfig::GetSpellTargetType() const {
    return ESpellTargetType::None;
}

int32 USpellConfig::GetSpellLevels_Scriptable_Implementation() const {
    return 0;
}

int32 USpellConfig::GetSpellLevels() const {
    return 0;
}

FSpellLevelRange USpellConfig::GetSpellLevel(const int32 spellLevel) const {
    return FSpellLevelRange{};
}

TSubclassOf<USpellConfigLevelData> USpellConfig::GetSpellConfigLevelData(const int32 spellLevel) const {
    return NULL;
}

TSubclassOf<UScriptGameplayAbility> USpellConfig::GetSpellClass(const int32 spellLevel) const {
    return NULL;
}

FGameplayTag USpellConfig::GetSpellCategoryTag() const {
    return FGameplayTag{};
}

float USpellConfig::GetSpellAreaRange() const {
    return 0.0f;
}

float USpellConfig::GetSpellAreaAngle() const {
    return 0.0f;
}

FName USpellConfig::GetSpawnLocationSocketName() const {
    return NAME_None;
}

ESpellManaUsage USpellConfig::GetManaUsage() const {
    return ESpellManaUsage::Normal;
}

FCameraBehaviour USpellConfig::GetCameraBehaviour() const {
    return FCameraBehaviour{};
}


void USpellConfig::AddSpellLevel(float NewCastManaCost, float NewCastTime, float NewManaCostSc, TSubclassOf<UScriptGameplayAbility> SpellClass, TSubclassOf<USpellConfigLevelData> SpellConfigLevelData) {
}


