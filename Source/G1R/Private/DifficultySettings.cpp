#include "DifficultySettings.h"

UDifficultySettings::UDifficultySettings() {
    this->m_uiSortingPriority = 0.00f;
}

float UDifficultySettings::GetUISortingPriority() const {
    return 0.0f;
}

FText UDifficultySettings::GetSettingsName() const {
    return FText::GetEmpty();
}


