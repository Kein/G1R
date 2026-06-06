#include "GothicWorldSettings.h"

AGothicWorldSettings::AGothicWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreepointManagerConfig = NULL;
    this->SpawnpointManagerConfig = NULL;
    this->GameTimeConfig = NULL;
    this->WeatherConfig = NULL;
    this->TerritoryWorldConfig = NULL;
    this->SpawningManagerConfig = NULL;
    this->WorldPartitionGridToBeFullyLoadedForNPCSpawn = TEXT("MainGrid");
    this->OutlineSubsystemConfig = NULL;
    this->WorldPointManagerConfig = NULL;
    this->WorldItemSpawnConfig = NULL;
    this->DifficultyPresetOverride = NULL;
}

AGothicWorldSettings* AGothicWorldSettings::Get(const UObject* WorldContextObject) {
    return NULL;
}


