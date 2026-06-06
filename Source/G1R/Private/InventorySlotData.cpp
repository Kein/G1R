#include "InventorySlotData.h"

UInventorySlotData::UInventorySlotData() {
    this->m_Pos = -1;
    this->m_InventoryType = EInventoryTypes::None;
    this->m_Value = -1;
    this->m_PreviousValue = -1;
    this->m_Amount = -1;
    this->m_IsEmpty = false;
    this->m_TraderItemIndex = 0;
    this->m_ShowValue = false;
    this->m_IsActive = true;
    this->m_CanBeClicked = true;
    this->m_CanBeUsedByPlayer = true;
    this->m_HasUnseenChanges = false;
}


