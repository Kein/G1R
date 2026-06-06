#include "GameplayAttributeProgressBarWidget.h"

UGameplayAttributeProgressBarWidget::UGameplayAttributeProgressBarWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_GameplayAttributeCurrentValue = 0.00f;
    this->m_GameplayAttributeMaxValue = 0.00f;
    this->m_GameplayAttributeCurrentPercent = 1.00f;
    this->m_GameplayAttributeInterpolatedPercent = 1.00f;
    this->m_GameplayAttributeCriticalPercent = 0.00f;
    this->m_GameplayAttributeInterpolationSpeed = 0.50f;
    this->m_AbilitySystemComponent = NULL;
    this->m_TimeOnScreenOnDynamic = 3.00f;
    this->m_Visibility = EGothicHUDBarVisibility::Dynamic;
}

void UGameplayAttributeProgressBarWidget::Reset() {
}

void UGameplayAttributeProgressBarWidget::HandleHUDSettingsChanged() {
}








