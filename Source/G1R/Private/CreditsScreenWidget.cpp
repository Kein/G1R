#include "CreditsScreenWidget.h"

UCreditsScreenWidget::UCreditsScreenWidget() {
    this->m_BaseCreditsScrollSpeed = 1.00f;
    this->m_CreditsSpeedUpMultiplier = 3.00f;
    this->ScrollBox = NULL;
    this->m_SpeedUpDirection = 0.00f;
}


float UCreditsScreenWidget::GetCurrentScrollSpeed() const {
    return 0.0f;
}


