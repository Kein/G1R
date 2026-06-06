#include "ManagementMain.h"

UManagementMain::UManagementMain() {
    this->W_Inventory_Main = NULL;
    this->InventoryOpenedState = EInventoryOpenedStates::Default;
    this->InventoryMainClassBP = NULL;
}






bool UManagementMain::Initialization(EInventoryOpenedStates NewInventoryOpenedState) {
    return false;
}

void UManagementMain::InitContentWidgets(const UPanelWidget* _Container) {
}

UInventoryMain* UManagementMain::GetInventoryWidget() {
    return NULL;
}

EInventoryOpenedStates UManagementMain::GetInventoryOpenedState() {
    return EInventoryOpenedStates::Default;
}





