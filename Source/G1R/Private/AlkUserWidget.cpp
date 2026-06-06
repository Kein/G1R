#include "AlkUserWidget.h"

UAlkUserWidget::UAlkUserWidget() {
    this->m_CurrentInputType = ECommonInputType::MouseAndKeyboard;
}





UPlayerWidget* UAlkUserWidget::GetPlayerWidget() {
    return NULL;
}

ECommonInputType UAlkUserWidget::GetCurrentInputType() const {
    return ECommonInputType::MouseAndKeyboard;
}


