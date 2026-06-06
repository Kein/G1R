#include "HUDBossInformationWidget.h"

UHUDBossInformationWidget::UHUDBossInformationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_BossCharState = NULL;
    this->m_GameplayAttributeCurrentValue = 0.00f;
    this->m_GameplayAttributeMaxValue = 0.00f;
    this->m_GameplayAttributeCurrentPercent = 1.00f;
    this->m_GameplayAttributeInterpolatedPercent = 1.00f;
    this->m_GameplayAttributeInterpolationSpeed = 0.50f;
}





void UHUDBossInformationWidget::CleanUp() {
}




