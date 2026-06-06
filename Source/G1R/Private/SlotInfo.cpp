#include "SlotInfo.h"

FSlotInfo::FSlotInfo() {
    this->m_SlotVisual = NULL;
    this->m_SlotInvType = EInventoryTypes::None;
    this->m_SlotInvSlot = 0;
    this->m_SlotDef = NULL;
    this->m_SlotMagnitude = 0;
    this->m_ExtraData = NULL;
}

