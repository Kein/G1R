#include "HUDLockPickUIController.h"

UHUDLockPickUIController::UHUDLockPickUIController() {
    this->m_LockPickUIWidget = NULL;
}

void UHUDLockPickUIController::OnLockPickUIFadedOut() {
}

FString UHUDLockPickUIController::GetBlueprintName() {
    return TEXT("");
}


