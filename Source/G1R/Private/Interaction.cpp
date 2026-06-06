#include "Interaction.h"

FInteraction::FInteraction() {
    this->Priority = 0;
    this->Weight = 0.00f;
    this->DurationSeconds = 0.00f;
    this->DurationVariance = 0.00f;
    this->CooldownOnFail = 0.00f;
    this->LastTimeFailed = 0.00f;
    this->bMayUseCustomAbility = false;
}

