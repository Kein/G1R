#include "ArmorCustomization.h"

UArmorCustomization::UArmorCustomization() {
    this->TileView_Items = NULL;
}

void UArmorCustomization::UnregisterInputSlotSection() {
}

void UArmorCustomization::UnregisterInputGeneral() {
}

void UArmorCustomization::UnEquipSelectedModification() {
}

bool UArmorCustomization::TrySetCurrentWidgetIndex(int32 _Index) {
    return false;
}


FItemTooltipInfo UArmorCustomization::RequestTooltip() {
    return FItemTooltipInfo{};
}

void UArmorCustomization::RequestedCloseWidget() {
}

void UArmorCustomization::RegisterInputSlotSection() {
}

void UArmorCustomization::RegisterInputGeneral() {
}

void UArmorCustomization::PreviewModification(bool _bEquip) {
}







bool UArmorCustomization::LoadModifications() {
    return false;
}

bool UArmorCustomization::HasPreviewAttribute(FGameplayAttribute _Attribute) const {
    return false;
}



void UArmorCustomization::HandleFocusRight() {
}

void UArmorCustomization::HandleFocusLeft() {
}


UArmorCustomizationSlotData* UArmorCustomization::GetSlotDataForIndex(int32 _Index) {
    return NULL;
}

float UArmorCustomization::GetPreviewArmorAttribute(FGameplayAttribute _Attribute) const {
    return 0.0f;
}

UArmorCustomizationSlotData* UArmorCustomization::GetEquippedCustomizationSlotDataForPart(int32 _SlotIndex) {
    return NULL;
}

int32 UArmorCustomization::GetCurrentWidgetIndex() const {
    return 0;
}

int32 UArmorCustomization::GetCurrentOreAmount() const {
    return 0;
}

void UArmorCustomization::EquipSelectedModification() {
}

bool UArmorCustomization::CanAffordModification(UArmorCustomizationSlotData* _Slot) const {
    return false;
}

bool UArmorCustomization::CanAffordCurrentlyHoveredModification() const {
    return false;
}

void UArmorCustomization::BuyEquipUnequipCurrentlySelectedModification() {
}


