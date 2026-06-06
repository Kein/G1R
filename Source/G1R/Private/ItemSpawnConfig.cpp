#include "ItemSpawnConfig.h"

FItemSpawnConfig::FItemSpawnConfig() {
    this->m_IsActive = false;
    this->m_Refillable = false;
    this->m_RefillHours = 0;
    this->m_InheritOwnerFromArea = false;
}

