#include "AbilityTask_InteractionSpot_Montage_Sleep.h"
#include "EInteractionFastExitMode.h"

UAbilityTask_InteractionSpot_Montage_Sleep::UAbilityTask_InteractionSpot_Montage_Sleep() {
    this->QuickExitMode = EInteractionFastExitMode::PlayExitAnimation;
    this->MontageEntrySleepLeft = TEXT("EntrySleepLeft");
    this->MontageEntrySleepRight = TEXT("EntrySleepRight");
    this->MontageLoopSleepLeft = TEXT("LoopSleepLeft");
    this->MontageLoopSleepRight = TEXT("LoopSleepRight");
    this->MontageExitSleepLeft = TEXT("ExitSleepLeft");
    this->MontageExitSleepRight = TEXT("ExitSleepRight");
    this->MontageLoopSit = TEXT("Loop");
}


