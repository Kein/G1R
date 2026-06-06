#include "ArmorCustomizationSlotData.h"

UArmorCustomizationSlotData::UArmorCustomizationSlotData() {
    this->m_UpgradeDefinition = NULL;
    this->m_IsEmpty = true;
    this->m_IsEquipped = false;
    this->m_IsBought = false;
    this->m_bIsLocked = false;
    this->m_IsNew = false;
    this->m_CanAfford = false;
}

UArmorUpgradeDefinition* UArmorCustomizationSlotData::GetDefaultUpgradeDefinition() const {
    return NULL;
}


