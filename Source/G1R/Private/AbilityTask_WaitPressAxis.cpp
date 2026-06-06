#include "AbilityTask_WaitPressAxis.h"

UAbilityTask_WaitPressAxis::UAbilityTask_WaitPressAxis() {
    this->m_Threshold = 0.00f;
    this->m_InputComponent = NULL;
}

void UAbilityTask_WaitPressAxis::OnAxis(float AxisValue) {
}

UAbilityTask_WaitPressAxis* UAbilityTask_WaitPressAxis::CreateWaitPressAxis(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputComponent* InputComponent, FName Axis_X, FName Axis_Y, float Threshold) {
    return NULL;
}


