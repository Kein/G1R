#include "MainMenuWidget.h"

UMainMenuWidget::UMainMenuWidget() {
    this->m_StartWithInputEnabled = true;
    this->m_InitialRepeatDelay = 0.50f;
    this->m_RepeatDelay = 0.10f;
    this->m_MostRecentProfileId = 0;
    this->m_ShowMultiplayer = false;
    this->QuitButton = NULL;
    this->TextBlock_UserName = NULL;
    this->VerticalBox_Buttons = NULL;
    this->ButtonPosition = -1;
}

void UMainMenuWidget::StopSelect() {
}

void UMainMenuWidget::StartSelectUp() {
}

void UMainMenuWidget::StartSelectDown() {
}

void UMainMenuWidget::SelectUp() {
}

void UMainMenuWidget::SelectFirst() {
}

void UMainMenuWidget::SelectDown() {
}

void UMainMenuWidget::RefreshButtonFocus() {
}

void UMainMenuWidget::OnContinueClicked() {
}

void UMainMenuWidget::NativeOnDeactivated() {
}

void UMainMenuWidget::NativeOnActivated() {
}

bool UMainMenuWidget::IsContinueEnabled() {
    return false;
}

UWidget* UMainMenuWidget::GetFirstButton() const {
    return NULL;
}

UVerticalBox* UMainMenuWidget::GetButtonsBox() {
    return NULL;
}

bool UMainMenuWidget::CreateDemoProfile() {
    return false;
}

void UMainMenuWidget::CleanAllProfiles() {
}

void UMainMenuWidget::CheckEmptyProfilesAndDelete() {
}

bool UMainMenuWidget::ActivateDemoProfile() {
    return false;
}


