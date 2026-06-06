#include "SettingsRowWidget.h"
#include "Templates/SubclassOf.h"

USettingsRowWidget::USettingsRowWidget() {
    this->m_Setting = NULL;
    this->m_AutoApplyChanges = true;
    this->m_SettingWidget = NULL;
}

void USettingsRowWidget::Reset() {
}

void USettingsRowWidget::Reinitialize() {
}




bool USettingsRowWidget::IsSupported() const {
    return false;
}

bool USettingsRowWidget::IsAvailable() const {
    return false;
}

bool USettingsRowWidget::HideUnavailable() const {
    return false;
}

bool USettingsRowWidget::HasChanges() const {
    return false;
}

void USettingsRowWidget::DiscardChanges() {
}

USettingObjectWidget* USettingsRowWidget::CreateSettingsWidgetInternal(TSubclassOf<USettingObjectWidget> _WidgetClass) {
    return NULL;
}

void USettingsRowWidget::ApplyChanges() {
}


