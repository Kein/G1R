#include "MapData.h"

UMapData::UMapData() {
    this->m_WorldMapBoundingBox = NULL;
}

void UMapData::UnregisterMapVolume(const FGameplayTag Tag) {
}

void UMapData::TeleportActorToNormalized2DPosition(AGothicCharacter* Character, FVector2D position) {
}

void UMapData::RemoveMarkerFromMap(FGameplayTag _GameplayTag, FVector2D _Position) {
}

void UMapData::RegisterMapVolume(AActor* Volume, FGameplayTag Tag) {
}

FInstancedStruct UMapData::GetSaveData() const {
    return FInstancedStruct{};
}

FMapPlayerPosAndRot UMapData::GetNormalized2DPositionAndRotationFromActor(AActor* Actor, FGameplayTag MapTag) {
    return FMapPlayerPosAndRot{};
}

FMapMarkerArrayData UMapData::GetMarkersArrayFromTag(FGameplayTag _GameplayTag) {
    return FMapMarkerArrayData{};
}

UMapData* UMapData::GetInstance() {
    return NULL;
}

FGameplayTagContainer UMapData::GetActorMapTags(APlayerController* _PlayerController) {
    return FGameplayTagContainer{};
}

bool UMapData::AddMarkerToMap(FGameplayTag _GameplayTag, FVector2D _Position, FGameplayTag _MarkerTag) {
    return false;
}


