#include "DebugControlWidget.h"

UDebugControlWidget::UDebugControlWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_ControllerPanel = NULL;
    this->m_JoysticRight = NULL;
    this->m_JoysticLeft = NULL;
    this->m_KeyboardPanel = NULL;
    this->m_TimerWheelShowSeconds = 0.50f;
}

void UDebugControlWidget::ClearMouseWheel() const {
}


