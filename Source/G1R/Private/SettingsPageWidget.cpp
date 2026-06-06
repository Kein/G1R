#include "SettingsPageWidget.h"

USettingsPageWidget::USettingsPageWidget() {
    this->m_SettingsDetailWidget = NULL;
}

void USettingsPageWidget::Reset() {
}

void USettingsPageWidget::Reinitialize() {
}




bool USettingsPageWidget::HasChanges() const {
    return false;
}

FText USettingsPageWidget::GetDisplayName() const {
    return FText::GetEmpty();
}

void USettingsPageWidget::FocusFirstSettingsRow() {
}

void USettingsPageWidget::DiscardChanges() {
}

void USettingsPageWidget::ApplyChanges() {
}


