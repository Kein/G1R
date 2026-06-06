#include "HUDManagementController.h"

UHUDManagementController::UHUDManagementController() {
    this->m_WidgetClass = NULL;
    this->m_GothicPlayerController = NULL;
    this->m_ManagementMain = NULL;
    this->m_OpenedState = EInventoryOpenedStates::Default;
    this->m_HUDQuickSlotController = NULL;
    this->OpeningItem = NULL;
}

void UHUDManagementController::QuickSlotToggle() {
}

void UHUDManagementController::QuickSlotClose() {
}

void UHUDManagementController::OpenManagementPage(FGameplayTag _TabTag, FGameplayTag _FilterTag, const UObject* _Item) {
}

void UHUDManagementController::OnReceivedItemClicked(int32 ItemId, EInventoryTypes InventoryType) {
}

void UHUDManagementController::OnOpenContainerRefreshInventory() {
}

void UHUDManagementController::OnOpenContainerClosed() {
}

void UHUDManagementController::OnItemClickedDFromInventory(int32 ItemId, EInventoryTypes InventoryType, int32 ItemAmount, UInventoryMain* InventoryMain) {
}

void UHUDManagementController::OnBlockStateTagChange(FGameplayTag InTag, int32 NewCount) {
}

UHUDManagementController* UHUDManagementController::GetManagementController(const APlayerController* _PlayerController) {
    return NULL;
}

FString UHUDManagementController::GetBlueprintName() {
    return TEXT("");
}

void UHUDManagementController::CloseManagementScreen() {
}


