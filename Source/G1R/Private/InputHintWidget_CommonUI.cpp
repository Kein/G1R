#include "InputHintWidget_CommonUI.h"

UInputHintWidget_CommonUI::UInputHintWidget_CommonUI() {
    this->m_IsPersistent = true;
    this->m_ConsumeInput = false;
    this->m_HoldDelay = 0.00f;
}

void UInputHintWidget_CommonUI::SetHoldDelay(float _HoldDelay) {
}

void UInputHintWidget_CommonUI::SetDataTableRow(const FDataTableRowHandle& _DataTableRow) {
}

void UInputHintWidget_CommonUI::OverrideHoldProgress(float _Progress) {
}

void UInputHintWidget_CommonUI::OverrideDisplayText(FText _Text) {
}




bool UInputHintWidget_CommonUI::IsCurrentlyHoldAction() const {
    return false;
}


