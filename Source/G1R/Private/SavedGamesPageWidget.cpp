#include "SavedGamesPageWidget.h"

USavedGamesPageWidget::USavedGamesPageWidget() {
    this->TileView_Saves = NULL;
    this->m_ProfileInfo = NULL;
    this->m_SelectedSlot = NULL;
    this->MenuState = EMainMenuState::Default;
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->m_NumManualSaveSlots = 0;
    this->m_NumAutoSaveSlots = 0;
    this->m_NumQuickSaveSlots = 0;
    this->m_IsPlatformPC = true;
    this->m_IsModePermadeath = false;
}



void USavedGamesPageWidget::UpdateInfo() {
}

void USavedGamesPageWidget::StartSavingSave(const FString& SaveName, bool isOverwritingSave) {
}

void USavedGamesPageWidget::StartLoadingSave(const FString& SaveName) {
}

void USavedGamesPageWidget::StartDeletingSave(const FString& SaveName) {
}




void USavedGamesPageWidget::OnGameSaved() {
}

void USavedGamesPageWidget::OnCannotSave() {
}


bool USavedGamesPageWidget::IsProfileInPermaDeathMode() {
    return false;
}

bool USavedGamesPageWidget::CheckQuickSave(const FString& SaveName) {
    return false;
}


