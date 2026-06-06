#include "PopupPersistentDataTextInput.h"

UPopupPersistentDataTextInput::UPopupPersistentDataTextInput() {
    this->m_CheckProfileInsteadOfSaveGame = false;
    this->m_PersistentDataSubsystem = NULL;
}





void UPopupPersistentDataTextInput::Initialization(bool CheckProfileInsteadOfSaveGame) {
}

bool UPopupPersistentDataTextInput::CanUseName(const FString& Name) {
    return false;
}



