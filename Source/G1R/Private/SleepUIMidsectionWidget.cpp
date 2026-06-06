#include "SleepUIMidsectionWidget.h"

USleepUIMidsectionWidget::USleepUIMidsectionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_GivesMaxHealth = false;
    this->m_GivesMaxMana = false;
    this->m_CurrentHealthGain = 0.00f;
    this->m_CurrentManaGain = 0.00f;
}

void USleepUIMidsectionWidget::RefreshAttributeValues(int32 _HoursSlept) {
}


