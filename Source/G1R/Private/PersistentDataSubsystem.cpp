#include "PersistentDataSubsystem.h"

UPersistentDataSubsystem::UPersistentDataSubsystem() {
    this->m_CurrentProfileId = -1;
    this->m_IsPermaDeath = false;
    this->m_PersistentData = NULL;
    this->m_PersistentDataList = NULL;
    this->m_CurrentSaveRequest = 0;
    this->m_LastSuccessfulSaveRequest = 0;
    this->m_LastSuccessfulLoadRequest = 0;
    this->m_LastGamePlayTime = 0.00f;
    this->m_SaveStatus = ESaveStatus::None;
    this->m_ProfileListSaveSize = 5242880;
    this->m_HDRSettings = NULL;
    this->m_SaveScreenshotEnabledSettings = true;
    this->m_IsAutosaveAllowedInCurrentMap = true;
    this->m_MaxProfileNumber = 4;
    this->bAllowSaveLoad = true;
    this->m_autosavePermaDeathTimer = 100.00f;
    this->m_ScreenshotTimeout = 5.00f;
    this->m_SaveScreenshotEnabled = true;
    this->m_ScreenshotResolutionX = 1280;
    this->m_ScreenshotResolutionY = 720;
}

bool UPersistentDataSubsystem::HasProfile() const {
    return false;
}

UGothicPersistentDataList* UPersistentDataSubsystem::GetSharedSave() {
    return NULL;
}

FString UPersistentDataSubsystem::GetSavePublicName(const FString& SlotName) {
    return TEXT("");
}

void UPersistentDataSubsystem::GetProfiles(TArray<FProfileData>& Profiles) {
}

void UPersistentDataSubsystem::GetMostRecentSaveForProfile(int32 ProfileId, FSaveGamePublicData& SaveData) {
}

void UPersistentDataSubsystem::GetMostRecentSave(int32& ProfileId, FSaveGamePublicData& SaveData) {
}

float UPersistentDataSubsystem::GetMostRecentPlayTime() {
    return 0.0f;
}

UGothicPersistentDataGame* UPersistentDataSubsystem::GetGameSave() {
    return NULL;
}

int32 UPersistentDataSubsystem::GetCurrentProfileId() const {
    return 0;
}

FProfileData UPersistentDataSubsystem::GetCurrentProfile() {
    return FProfileData{};
}

UPersistentDataSubsystem* UPersistentDataSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool UPersistentDataSubsystem::CheckIsPermaDeath() {
    return false;
}




