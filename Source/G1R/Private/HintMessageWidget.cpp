#include "HintMessageWidget.h"

UHintMessageWidget::UHintMessageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Text = NULL;
    this->StayOnScreenForSeconds = 1.50f;
    this->FadeoutDurationSeconds = 1.00f;
}


