#include "QuickSlotWheel.h"

UQuickSlotWheel::UQuickSlotWheel() {
    this->SelectedItemPos = 0;
    this->RightStickXValue = 0.00f;
    this->RightStickYValue = 0.00f;
    this->Button_EquipClick = NULL;
}


void UQuickSlotWheel::UnEquipItem() {
}

void UQuickSlotWheel::GetRightStickYAxisValue(const FKey& Key, float Delta) {
}

void UQuickSlotWheel::GetRightStickXAxisValue(const FKey& Key, float Delta) {
}




