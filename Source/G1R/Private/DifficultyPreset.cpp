#include "DifficultyPreset.h"
#include "Templates/SubclassOf.h"

UDifficultyPreset::UDifficultyPreset() {
    this->m_uiSortingPriority = 0.00f;
}

float UDifficultyPreset::GetUISortingPriority() const {
    return 0.0f;
}

FText UDifficultyPreset::GetPresetName() const {
    return FText::GetEmpty();
}

FText UDifficultyPreset::GetPresetDescription() const {
    return FText::GetEmpty();
}

TSubclassOf<UDifficultySettings> UDifficultyPreset::GetGroupDifficultySettings(EDifficultyGroup Group) const {
    return NULL;
}


