#include "AIState_DailyRoutine_RandomInteractions.h"

UAIState_DailyRoutine_RandomInteractions::UAIState_DailyRoutine_RandomInteractions() {
    this->bSupportsSimulatedSteps = true;
    this->CurrentTask = NULL;
    this->WaitSecondsIfAllFails = 1.00f;
    this->ChanceToDoActionOnSpot = 1.00f;
    this->SpotReachRadius = 250.00f;
    this->NumInteractionLimit = -1;
    this->InitialWalkspeed = EWalkSpeed::Walking;
    this->TryTakeOutItemIfPossible = NULL;
    this->bAddItemToTakeOutToInventoryIfMissing = true;
}

void UAIState_DailyRoutine_RandomInteractions::HandleCurrentTaskTimeLimitReached(UAbilityTask_InteractWith* Task) {
}

void UAIState_DailyRoutine_RandomInteractions::AddInteraction(const FInteraction& Interaction) {
}

void UAIState_DailyRoutine_RandomInteractions::AddBackupInteraction(const FInteraction& Interaction) {
}


