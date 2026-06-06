#include "3DDebugCharacterWidget.h"

U3DDebugCharacterWidget::U3DDebugCharacterWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_Character = NULL;
    this->HealthBar = NULL;
    this->SuperArmorBar = NULL;
    this->StateLabel = NULL;
    this->DirIcon = NULL;
    this->HealthNumberLabel = NULL;
    this->m_AbComp = NULL;
}

void U3DDebugCharacterWidget::UpdateData() {
}

void U3DDebugCharacterWidget::HideHealthBar() {
}


