#include "HUDQuickSlotController.h"

UHUDQuickSlotController::UHUDQuickSlotController() {
    this->m_SlotType = EQuickSlotType::Wheel;
    this->m_CrossbarWidgetClass = NULL;
    this->m_HotbarWidgetClass = NULL;
    this->m_TransformedHotbarWidgetClass = NULL;
    this->m_WheelWidgetClass = NULL;
    this->m_ControlledHotbarWidgetClass = NULL;
    this->m_QuickSlot = NULL;
    this->m_ControlledQuickSlot = NULL;
    this->m_HUDManagementController = NULL;
}

void UHUDQuickSlotController::QuickSlotBindingRelease() {
}

void UHUDQuickSlotController::QuickSlotBindingPress() {
}

void UHUDQuickSlotController::OnQuickSlotItemClickedBind(int32 ItemId, EInventoryTypes InventoryType) {
}

void UHUDQuickSlotController::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

void UHUDQuickSlotController::OnInventoryItemClickedBind(int32 ItemId, EInventoryTypes InventoryType) {
}

void UHUDQuickSlotController::HandleInputTypeChanged(ECommonInputType _InputType) {
}

FString UHUDQuickSlotController::GetWheelBlueprintName() {
    return TEXT("");
}

FString UHUDQuickSlotController::GetTransformedHotbarBlueprintName() {
    return TEXT("");
}

FString UHUDQuickSlotController::GetHotbarBlueprintName() {
    return TEXT("");
}

FString UHUDQuickSlotController::GetCrossbarBlueprintName() {
    return TEXT("");
}

FString UHUDQuickSlotController::GetControlledHotbarBlueprintName() {
    return TEXT("");
}



