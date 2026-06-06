#include "QuickSlotBase.h"

UQuickSlotBase::UQuickSlotBase() {
    this->m_InventoryBase = NULL;
    this->m_ItemType = EInventoryFilterTypes::All;
    this->m_OnScreenTime = 0.00f;
    this->m_IsControlBarVisible = false;
    this->m_IsBindingPressed = false;
    this->m_OpenedFromState = Default;
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
}

bool UQuickSlotBase::UpdateToolTipToAssignTo(int32 SlotId) {
    return false;
}

FItemTooltipInfo UQuickSlotBase::UpdateToolTipItemComparison(FItemTooltipInfo ItemBase, FItemTooltipInfo ItemComparedTo) {
    return FItemTooltipInfo{};
}

bool UQuickSlotBase::UpdateToolTipBaseItem(int32 ItemPos, EInventoryTypes InventoryType) {
    return false;
}

void UQuickSlotBase::StartAutohideTimer() {
}

void UQuickSlotBase::SetInWearablesEditMode(bool _Enabled) {
}



void UQuickSlotBase::ReceiveInventoryItemClicked(int32 ItemId, EInventoryTypes InventoryType) {
}



bool UQuickSlotBase::IsSlotActive(int32 SlotIndex) {
    return false;
}

bool UQuickSlotBase::IsInWearablesEditMode() const {
    return false;
}


void UQuickSlotBase::Initialization(TEnumAsByte<EHUDQuickSlotOpenedFromPriorityState> _openedFrom, EInventoryTypes _Type) {
}



TEnumAsByte<EHUDQuickSlotOpenedFromPriorityState> UQuickSlotBase::GetOpenedFromState() const {
    return Default;
}

ECommonInputType UQuickSlotBase::GetCurrentInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}

void UQuickSlotBase::EquipItem(int32 ItemPos) {
}

void UQuickSlotBase::EquipInSlot(int32 SlotId) {
}


void UQuickSlotBase::CloseWidget_Internal() {
}



