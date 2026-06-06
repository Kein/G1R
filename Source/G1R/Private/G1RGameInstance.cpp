#include "G1RGameInstance.h"

UG1RGameInstance::UG1RGameInstance() {
    this->m_InvertedVerticalCamera = false;
    this->m_InvertedHorizontalCamera = false;
    this->m_CameraSensitivity = 1.00f;
}

void UG1RGameInstance::SetQuickLoadAfterLoadMap(bool save) {
}

void UG1RGameInstance::SetInputMode(EGameInputMode Mode, UUserWidget* FocusWidget) {
}

void UG1RGameInstance::SaveSettings() {
}

UGothicGameUserSettings* UG1RGameInstance::GetSettings() const {
    return NULL;
}

EGameInputMode UG1RGameInstance::GetInputMode() const {
    return EGameInputMode::UI;
}

EGameInputDevice UG1RGameInstance::GetInputDevice() const {
    return EGameInputDevice::MouseAndKeyboard;
}

FString UG1RGameInstance::GetDebugOnScreenBuildInfo() const {
    return TEXT("");
}

void UG1RGameInstance::DestroySession() const {
}


