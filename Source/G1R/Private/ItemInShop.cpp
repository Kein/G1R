#include "ItemInShop.h"

FItemInShop::FItemInShop() {
    this->m_ItemDef = NULL;
    this->m_ItemAmount = 0;
    this->m_ItemPrice = 0;
    this->m_ItemPreviousPrice = 0;
    this->m_ItemId = 0;
    this->m_eInventoryType = EInventoryTypes::None;
    this->m_SlotId = 0;
    this->m_ItemAmountDefault = 0;
}

