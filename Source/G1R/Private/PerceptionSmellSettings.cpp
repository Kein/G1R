#include "PerceptionSmellSettings.h"

FPerceptionSmellSettings::FPerceptionSmellSettings() {
    this->SmellRange = 0.00f;
    this->WeatherModifier[0] = 0.00f;
    this->WeatherModifier[1] = 0.00f;
    this->WeatherModifier[2] = 0.00f;
    this->WeatherModifier[3] = 0.00f;
    this->WeatherModifier[4] = 0.00f;
    this->OnScreenSkillModifier = 0.00f;
    this->OffScreenSkillModifier = 0.00f;
    this->LoseAwarenessWithExcludingTags = false;
    this->bUseLowerOffscreenSkill = false;
    this->AwarenessWearoffFactor = 0.00f;
    this->bIgnoreObstacles = false;
}

