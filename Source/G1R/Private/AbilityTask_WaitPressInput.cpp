#include "AbilityTask_WaitPressInput.h"

UAbilityTask_WaitPressInput::UAbilityTask_WaitPressInput() {
    this->m_ActionId = EAbilityInputID::None;
    this->m_InputComponent = NULL;
}

void UAbilityTask_WaitPressInput::OnPressInput() {
}

UAbilityTask_WaitPressInput* UAbilityTask_WaitPressInput::CreateWaitPressInput(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputComponent* InputComponent, const EAbilityInputID ActionId) {
    return NULL;
}


