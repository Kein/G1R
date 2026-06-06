#include "DebugPlayerWidget.h"

UDebugPlayerWidget::UDebugPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_DebugControlWidget = NULL;
    this->ComboLabel = NULL;
    this->m_TimeToResetComboLabel = 3.00f;
}

void UDebugPlayerWidget::ResetComboLabel() {
}

void UDebugPlayerWidget::OnCombo(EComboQuality Combo) {
}


