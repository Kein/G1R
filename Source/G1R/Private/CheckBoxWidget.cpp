#include "CheckBoxWidget.h"

UCheckBoxWidget::UCheckBoxWidget() {
    this->InputHint = NULL;
    this->m_CheckedState = ECheckBoxState::Unchecked;
}

void UCheckBoxWidget::ToggleCheckedState() {
}


void UCheckBoxWidget::SetCheckedState(ECheckBoxState _CheckedState) {
}


bool UCheckBoxWidget::IsUndetermined() const {
    return false;
}

bool UCheckBoxWidget::IsUnchecked() const {
    return false;
}

bool UCheckBoxWidget::IsChecked() const {
    return false;
}

ECheckBoxState UCheckBoxWidget::GetCheckedState() const {
    return ECheckBoxState::Unchecked;
}


