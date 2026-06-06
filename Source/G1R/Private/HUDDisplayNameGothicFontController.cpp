#include "HUDDisplayNameGothicFontController.h"

UHUDDisplayNameGothicFontController::UHUDDisplayNameGothicFontController() {
    this->m_WidgetClassBP = NULL;
}

void UHUDDisplayNameGothicFontController::OnItemSensed(UInteractiveComponent* Item) {
}

void UHUDDisplayNameGothicFontController::OnItemNoLongerSensed(UInteractiveComponent* Item) {
}

FString UHUDDisplayNameGothicFontController::GetBlueprintName() {
    return TEXT("");
}


