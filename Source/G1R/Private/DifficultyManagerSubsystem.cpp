#include "DifficultyManagerSubsystem.h"
#include "Templates/SubclassOf.h"

UDifficultyManagerSubsystem::UDifficultyManagerSubsystem() {
    this->m_currentPreset = NULL;
    this->m_customCombatSettings = NULL;
    this->m_customResourcesSettings = NULL;
    this->m_customProgressionSettings = NULL;
    this->m_SurvivalMode = false;
    this->m_PermanentDeathMode = false;
    this->m_FakeSloppyCombos = true;
}

void UDifficultyManagerSubsystem::UpdateProfilePreset() {
}

void UDifficultyManagerSubsystem::SetSurvivalModeState(bool Value) {
}

void UDifficultyManagerSubsystem::SetIsPermanentDeathMode(bool isPermanentDeathMode) {
}

void UDifficultyManagerSubsystem::SetCustomGroupDifficultySettings(EDifficultyGroup Group, TSubclassOf<UDifficultySettings> Settings) {
}

void UDifficultyManagerSubsystem::SetCurrentPreset(TSubclassOf<UDifficultyPreset> Preset) {
}

void UDifficultyManagerSubsystem::OnFakeSloppyCombosApplied() {
}

bool UDifficultyManagerSubsystem::GetSurvivalModeState() const {
    return false;
}

TSubclassOf<UResourcesDifficultySettings> UDifficultyManagerSubsystem::GetResourcesDifficultySettingsClass() const {
    return NULL;
}

UResourcesDifficultySettings* UDifficultyManagerSubsystem::GetResourcesDifficultySettings() const {
    return NULL;
}

TSubclassOf<UProgressionDifficultySettings> UDifficultyManagerSubsystem::GetProgressionDifficultySettingsClass() const {
    return NULL;
}

UProgressionDifficultySettings* UDifficultyManagerSubsystem::GetProgressionDifficultySettings() const {
    return NULL;
}

int32 UDifficultyManagerSubsystem::GetNumberOfSettingsByGroup(EDifficultyGroup Group) const {
    return 0;
}

int32 UDifficultyManagerSubsystem::GetNumberOfPresets() const {
    return 0;
}

TArray<TSubclassOf<UDifficultySettings>> UDifficultyManagerSubsystem::GetGroupDifficultySettingsArray(EDifficultyGroup Group) const {
    return TArray<TSubclassOf<UDifficultySettings>>();
}

TArray<TSubclassOf<UDifficultyPreset>> UDifficultyManagerSubsystem::GetDifficultyPresetArray() const {
    return TArray<TSubclassOf<UDifficultyPreset>>();
}

TSubclassOf<UDifficultySettings> UDifficultyManagerSubsystem::GetCustomDifficultySettings(EDifficultyGroup Group) const {
    return NULL;
}

TSubclassOf<UDifficultyPreset> UDifficultyManagerSubsystem::GetCurrentPreset() const {
    return NULL;
}

TSubclassOf<UCombatDifficultySettings> UDifficultyManagerSubsystem::GetCombatDifficultySettingsClass() const {
    return NULL;
}

UCombatDifficultySettings* UDifficultyManagerSubsystem::GetCombatDifficultySettings() const {
    return NULL;
}

UDifficultyManagerSubsystem* UDifficultyManagerSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UDifficultyManagerSubsystem::AddGroupDifficultySettings(TSubclassOf<UDifficultySettings> Settings, EDifficultyGroup Group) {
}

void UDifficultyManagerSubsystem::AddDifficultyPreset(TSubclassOf<UDifficultyPreset> NewPreset) {
}


