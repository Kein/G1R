#include "HUDDisplayHealthBarController.h"

UHUDDisplayHealthBarController::UHUDDisplayHealthBarController() {
    this->OldTarget = NULL;
    this->m_TargetCombatMarker = NULL;
}

FString UHUDDisplayHealthBarController::GetCombatTargetMarkerBlueprintName() {
    return TEXT("");
}


