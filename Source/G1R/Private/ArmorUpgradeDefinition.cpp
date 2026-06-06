#include "ArmorUpgradeDefinition.h"

UArmorUpgradeDefinition::UArmorUpgradeDefinition() {
    this->m_ArmorUpgradeVisualDefinition = NULL;
    this->m_BuffStrength = 0;
    this->m_BuffDexterity = 0;
    this->m_BuffHealth = 0;
    this->m_BuffMana = 0;
    this->m_BuffToughness = 0;
    this->m_BuffWeight = 0;
    this->m_BuffProtEdge = 0;
    this->m_BuffProtBlunt = 0;
    this->m_BuffProtPoint = 0;
    this->m_BuffProtFire = 0;
    this->m_BuffProtWind = 0;
    this->m_BuffProtIce = 0;
    this->m_BuffProtEnergy = 0;
}

int32 UArmorUpgradeDefinition::GetBuffWindProtection() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffWeight() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffToughness() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffStrength() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffPointProtection() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffMana() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffIceProtection() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffHealth() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffFireProtection() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffEnergyProtection() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffEdgeProtection() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffDexterity() const {
    return 0;
}

int32 UArmorUpgradeDefinition::GetBuffBluntProtection() const {
    return 0;
}

bool UArmorUpgradeDefinition::CanBeUpgraded_Implementation(UGameStory* story) const {
    return false;
}


