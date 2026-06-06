#include "SettingsMessageWidget.h"

USettingsMessageWidget::USettingsMessageWidget() {
}

void USettingsMessageWidget::RemoveMessage(const FSettingsMessageHandle& _Handle) {
}



bool USettingsMessageWidget::HasMessage(const FSettingsMessageHandle& _Handle) const {
    return false;
}

void USettingsMessageWidget::ConfirmShow() {
}

void USettingsMessageWidget::ConfirmHide() {
}

FSettingsMessageHandle USettingsMessageWidget::AddMessage(const FText& _Message, float _Duration, ESettingsMessagePriority _Priority) {
    return FSettingsMessageHandle{};
}


