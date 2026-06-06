#include "CreditsScreenWidget.h"

UCreditsScreenWidget::UCreditsScreenWidget() {
    this->m_BaseCreditsScrollSpeed = 1.00f;
    this->m_CreditsSpeedUpMultiplier = 3.00f;
}

float UCreditsScreenWidget::GetFinalPositionFrom(UWidget* Widget) {
    return 0.0f;
}


