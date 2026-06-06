#include "HUDDisplayBossHealthBarController.h"

UHUDDisplayBossHealthBarController::UHUDDisplayBossHealthBarController() {
    this->m_WidgetClass = NULL;
    this->m_Character = NULL;
    this->m_BossInformationWidget = NULL;
    this->m_OverrideMaxHealthValue = -1.00f;
}

void UHUDDisplayBossHealthBarController::UpdateInfoWithoutVisibilityChange(AGothicCharacter* newCharacterToGetInfoFrom) {
}

void UHUDDisplayBossHealthBarController::ShowWidget(AGothicCharacter* newCharacterToGetInfoFrom) {
}

void UHUDDisplayBossHealthBarController::SetOverrideMaxHealthValue(float overrideValue) {
}

void UHUDDisplayBossHealthBarController::HideWidget() {
}

void UHUDDisplayBossHealthBarController::HandleHUDSettingsChanged() {
}

FString UHUDDisplayBossHealthBarController::GetBlueprintName() {
    return TEXT("");
}

UHUDDisplayBossHealthBarController* UHUDDisplayBossHealthBarController::Get(const UObject* _WorldContextObject) {
    return NULL;
}


