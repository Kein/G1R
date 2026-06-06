#include "ComboAttackConfig.h"
#include "Templates/SubclassOf.h"

UComboAttackConfig::UComboAttackConfig() {
    this->m_GA_Attack = NULL;
    this->m_MetaData = NULL;
}

void UComboAttackConfig::AddOptionByTiming(const FGameplayTag AttackDirection, EComboTiming ComboTiming, const TSubclassOf<UComboAttackConfig> Combo) const {
}

void UComboAttackConfig::AddOption(const FGameplayTag AttackDirection, const TSubclassOf<UComboAttackConfig> Combo) const {
}


