#include "TooltipInfoParameters.h"

FTooltipInfoParameters::FTooltipInfoParameters() {
    this->Actor = NULL;
    this->Item = NULL;
    this->CompareItem = NULL;
    this->ItemHotkey = 0;
    this->bCanBeEquipped = false;
    this->bIsEquipped = false;
    this->bCanBePurchased = false;
    this->bCanAfford = false;
    this->OpenedState = EInventoryOpenedStates::Default;
    this->SlotId = 0;
}

