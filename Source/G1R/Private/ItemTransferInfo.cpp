#include "ItemTransferInfo.h"

FItemTransferInfo::FItemTransferInfo() {
    this->m_ToLootContainer = false;
    this->m_Inventory = NULL;
    this->m_ItemId = 0;
    this->m_InventoryType = EInventoryTypes::None;
    this->m_Amount = 0.00f;
}

