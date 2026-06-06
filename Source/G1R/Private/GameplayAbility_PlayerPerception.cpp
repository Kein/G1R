#include "GameplayAbility_PlayerPerception.h"

UGameplayAbility_PlayerPerception::UGameplayAbility_PlayerPerception() {
    this->m_ActivateAbilityOnGranted = true;
}

void UGameplayAbility_PlayerPerception::HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}



