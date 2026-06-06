#include "FreepointManagerConfig.h"
#include "Templates/SubclassOf.h"

UFreepointManagerConfig::UFreepointManagerConfig() {
    this->InteractionSpotSourceFiles.AddDefaulted(2);
}

void UFreepointManagerConfig::SetRadius(float Radius) {
}

void UFreepointManagerConfig::SetPriority(float Priority) {
}

void UFreepointManagerConfig::SetLevel(FName Level) {
}

void UFreepointManagerConfig::SetEntryDirection(EInteractionSpotEntryDirection EntryDirection) {
}

void UFreepointManagerConfig::SetCooldownOnFreepoint(float cooldown) {
}

void UFreepointManagerConfig::SetCanChainActionOnFreepoint() {
}

void UFreepointManagerConfig::SetAllowAnyOrientationWhenUsingFreepoint() {
}

TArray<FFreepointConfig_DEPRECATED> UFreepointManagerConfig::GetRegisteredFreepoints() const {
    return TArray<FFreepointConfig_DEPRECATED>();
}

void UFreepointManagerConfig::AddWeatherConditionOnFreepoint(TSubclassOf<UWeatherCondition> WeatherCondition) {
}

void UFreepointManagerConfig::AddTimeRangeOnFreepoint(TSubclassOf<UTimeRange> TimeRange) {
}

void UFreepointManagerConfig::AddTagOnFreepoint(const FGameplayTag& Tag) {
}

void UFreepointManagerConfig::AddTagListOnFreepoint(TSubclassOf<UFreepointActionTagList> tagList) {
}

void UFreepointManagerConfig::AddNavAreaOnFreepoint(TSubclassOf<UNavArea> NavArea) {
}

void UFreepointManagerConfig::AddFreepoint(FName Name, FRotator Rotator, FVector position) {
}

void UFreepointManagerConfig::AddCharacterUniqueNameRestrictionOnFreepoint(FName UniqueName) {
}

void UFreepointManagerConfig::AddAcceptedCharacterOnFreepoint(const FGameplayTag& Tag) {
}


