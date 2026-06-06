#include "SettingObjectWidget.h"

USettingObjectWidget::USettingObjectWidget() {
    this->m_AutoApplyChanges = true;
    this->m_GenericSetting = NULL;
}

void USettingObjectWidget::SetSettingObject(USettingObject* _Setting) {
}

void USettingObjectWidget::SetAutoApplyChanges(bool _Value) {
}

void USettingObjectWidget::Reset() {
}

void USettingObjectWidget::Reinitialize() {
}



bool USettingObjectWidget::IsSupported() const {
    return false;
}

bool USettingObjectWidget::IsAvailable() const {
    return false;
}

void USettingObjectWidget::IncreaseValue() {
}

bool USettingObjectWidget::HideUnavailable() const {
    return false;
}

bool USettingObjectWidget::HasChanges() const {
    return false;
}

void USettingObjectWidget::DiscardChanges() {
}

void USettingObjectWidget::DecreaseValue() {
}

void USettingObjectWidget::ApplyChanges() {
}


