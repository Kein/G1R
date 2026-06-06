#include "PauseMenuWidget.h"

UPauseMenuWidget::UPauseMenuWidget() {
    this->QuitButton = NULL;
    this->m_PersistentDataSubsystem = NULL;
}

bool UPauseMenuWidget::IsSavingEnabled() {
    return false;
}

bool UPauseMenuWidget::IsLoadingEnabled() {
    return false;
}



