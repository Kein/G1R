#include "GameOverWidget.h"

UGameOverWidget::UGameOverWidget() {
    this->m_bIsSpecialReviveEnabled = false;
    this->m_ReviveCounter = -1;
    this->m_ReviveButton = NULL;
    this->Quit = NULL;
    this->m_PersistentDataSubsystem = NULL;
}

void UGameOverWidget::Revive() {
}

void UGameOverWidget::LoadLastSave() {
}

bool UGameOverWidget::IsSpecialReviveEnabled() const {
    return false;
}

bool UGameOverWidget::IsLoadButtonEnabled() {
    return false;
}

float UGameOverWidget::GetLastSaveTime() {
    return 0.0f;
}

bool UGameOverWidget::CheckLastSaveExists() {
    return false;
}

bool UGameOverWidget::CanRevive() const {
    return false;
}


