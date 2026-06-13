#include "HUDCinematicController.h"

UHUDCinematicController::UHUDCinematicController() {
    this->m_CinematicVisibilityMode = Hidden;
    this->m_WidgetClassCinematicMain = NULL;
    this->m_WidgetClassCinematicTop = NULL;
    this->m_GothicPlayerController = NULL;
    this->W_CinematicWidget = NULL;
}

void UHUDCinematicController::UpdateVisibility(TEnumAsByte<ECinematicVisibilityMode> NewVisibilityMode) {
}

void UHUDCinematicController::OnVoiceline(FVoicelineData VoicelineData) {
}

FString UHUDCinematicController::GetBlueprintNameCinematicTop() {
    return TEXT("");
}

FString UHUDCinematicController::GetBlueprintNameCinematicMain() {
    return TEXT("");
}

void UHUDCinematicController::ForceHiddenVisibility(bool IsVisible) {
}


