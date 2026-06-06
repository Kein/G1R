#include "EquippedWearablesBar.h"

UEquippedWearablesBar::UEquippedWearablesBar() {
    this->m_ToolTipEquippedItem = NULL;
    this->m_ToolTipNewItem = NULL;
}

void UEquippedWearablesBar::UnregisterInput() {
}

bool UEquippedWearablesBar::TrySetCurrentWidgetIndex(int32 _Index) {
    return false;
}

void UEquippedWearablesBar::Setup(UInventoryItemTooltip* _ToolTipEquippedItem, UInventoryItemTooltip* _ToolTipNewItem) {
}


void UEquippedWearablesBar::RegisterInput() {
}

void UEquippedWearablesBar::HandleFocusRight() {
}

void UEquippedWearablesBar::HandleFocusLeft() {
}


int32 UEquippedWearablesBar::GetCurrentWidgetIndex() const {
    return 0;
}

int32 UEquippedWearablesBar::FindNextValidFocus(int32 _StartIndex, int32 _Direction) {
    return 0;
}


