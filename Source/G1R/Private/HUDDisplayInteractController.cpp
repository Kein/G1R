#include "HUDDisplayInteractController.h"

UHUDDisplayInteractController::UHUDDisplayInteractController() {
    this->m_WidgetClassBP = NULL;
    this->m_InteractSensor = NULL;
}

void UHUDDisplayInteractController::OnItemSensed(UInteractiveComponent* Item) {
}

void UHUDDisplayInteractController::OnItemNoLongerSensed(UInteractiveComponent* Item) {
}

FString UHUDDisplayInteractController::GetBlueprintName() {
    return TEXT("");
}


