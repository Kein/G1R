#include "AnimConfig.h"
#include "Templates/SubclassOf.h"

UAnimConfig::UAnimConfig() {
    this->m_TimeToBeTired = 8.00f;
    this->m_MinTimeTired = 5.00f;
    this->m_LocoBlendCurvesConfig = NULL;
    this->m_IKConfig = NULL;
    this->m_PhysicalBonesConfig = NULL;
}

void UAnimConfig::SetDefaultMovementAnimData(TSubclassOf<UItemAnimConfig> ItemAnimConfig, TEnumAsByte<EMovementMode> MovementMode) {
}

void UAnimConfig::AddAnimForItem(const FGameplayTag& ItemTag, TSubclassOf<UItemAnimConfig> ItemAnimConfig, EWeaponSkill ItemSkill) {
}

void UAnimConfig::AddAnimForAction(const FGameplayTag& ActionTag, TSubclassOf<UInteractAnimConfig> ActionAnimConfig) {
}


