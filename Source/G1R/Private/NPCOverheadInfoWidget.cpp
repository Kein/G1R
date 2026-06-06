#include "NPCOverheadInfoWidget.h"

UNPCOverheadInfoWidget::UNPCOverheadInfoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HealthDeltaSpeed = 0.00f;
    this->HealthBarPercentCurrent = 0.00f;
    this->HealthBarPercentLow = 0.00f;
}


void UNPCOverheadInfoWidget::UpdateHealthBar(float DeltaTime, float NewHealth, float MaxHealth) {
}




void UNPCOverheadInfoWidget::SetCharacterName(FText CharName) {
}




