#include "FishingWidget.h"

UFishingWidget::UFishingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_OwnerCharacter = NULL;
    this->m_ChooseBaitWidget = NULL;
    this->m_Left = NULL;
    this->m_Right = NULL;
}

void UFishingWidget::ShowChooseBait(bool Show) {
}


