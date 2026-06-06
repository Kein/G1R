#include "InputHintWidget.h"

UInputHintWidget::UInputHintWidget() {
}


FKey UInputHintWidget::GetCurrentKey() const {
    return FKey{};
}

FSlateBrush UInputHintWidget::GetCurrentIconBrush() const {
    return FSlateBrush{};
}

FText UInputHintWidget::GetCurrentDisplayText() const {
    return FText::GetEmpty();
}

void UInputHintWidget::EmitInputActionTriggeredEvents() {
}


