#include "ButtonWidget.h"

UButtonWidget::UButtonWidget() {
    this->InputHint = NULL;
    this->m_HasSecondaryAction = false;
    this->m_HoldDelay = 0.00f;
}

void UButtonWidget::StartClick() {
}

void UButtonWidget::SetDataTableRow(const FDataTableRowHandle& _DataTableRow) {
}

void UButtonWidget::SecondaryClick() {
}






bool UButtonWidget::IsPressedBy(EButtonWidget_Button _InputButton) const {
    return false;
}

bool UButtonWidget::IsPressed() const {
    return false;
}

FGameplayTag UButtonWidget::GetGameplayTag() const {
    return FGameplayTag{};
}

void UButtonWidget::EndClick() {
}

void UButtonWidget::Click() {
}


