#include "InventoryItemTooltip.h"

UInventoryItemTooltip::UInventoryItemTooltip() {
    this->m_Input_Equip = NULL;
    this->m_Input_Unequip = NULL;
    this->m_Input_Drop = NULL;
    this->m_Input_Utilize = NULL;
    this->m_Input_ShowWearableComparisonTooltip = NULL;
    this->m_UnequipTimeThreshold = 0.00f;
}







void UInventoryItemTooltip::OnUnequipTimerEnds() {
}

void UInventoryItemTooltip::OnUnequipActionTriggered() {
}

void UInventoryItemTooltip::OnUnequipActionReleased() {
}

void UInventoryItemTooltip::OnToggleWearableComparisonTooltipStart() {
}

void UInventoryItemTooltip::OnToggleWearableComparisonTooltipEnds() {
}


