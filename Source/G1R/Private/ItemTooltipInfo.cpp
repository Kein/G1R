#include "ItemTooltipInfo.h"

FItemTooltipInfo::FItemTooltipInfo() {
    this->InventoryOpenedState = EInventoryOpenedStates::Default;
    this->IsValid = false;
    this->ItemHotkey = 0;
    this->IsEquipped = false;
    this->CanBeEquipped = false;
    this->CanBePurchased = false;
    this->CanAfford = false;
}

