#include "AttachedItem.h"

FAttachedItem::FAttachedItem() {
    this->m_ItemInvType = EInventoryTypes::None;
    this->m_ItemInvSlot = 0;
    this->m_ItemCarrySlot = EVisualCarrySlot::None;
}

