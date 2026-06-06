#include "ProfileSlotInfo.h"

UProfileSlotInfo::UProfileSlotInfo() {
    this->TimePlayed = 0.00f;
    this->DifficultyPreset = NULL;
    this->CustomCombatSettings = NULL;
    this->CustomResourcesSettings = NULL;
    this->CustomProgressionSettings = NULL;
    this->Survival = false;
    this->PermanentDeath = false;
    this->PermanentDeathGameOver = false;
    this->MostRecentChapterId = 0;
}


