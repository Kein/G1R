#include "PerceptionSystem.h"

UPerceptionSystem::UPerceptionSystem() {
    this->bSingleThreadedGather = false;
    this->bShowSightPerceptions = false;
}

bool UPerceptionSystem::TryCreatePerceptionEvent(const AGothicCharacter* EventSensedBy, const FGameplayTag& EventTag, const FVector& AtLocation, const FVector& AtNavLocation, const AActor* OriginActor, const AActor* TargetActor, const AActor* InstigatorActor, const AActor* AffectedActor, FRememberedPerception& Perception) {
    return false;
}

void UPerceptionSystem::TestRemoveAllPerceptionHandlers() {
}

void UPerceptionSystem::StopSoundEvent(FPerceptionSoundAreaHandle AreaEventHandle) {
}

FPerceptionSoundAreaHandle UPerceptionSystem::ReportSoundWithInfiniteDuration(AActor* Instigator, const FGameplayTag& SoundTag, const FVector& AtLocation, EPerceptionNoiseLoudness Loudness, bool IsBoundToOriginActor) {
    return FPerceptionSoundAreaHandle{};
}

FPerceptionSoundAreaHandle UPerceptionSystem::ReportSoundWithDuration(AActor* Instigator, const FGameplayTag& SoundTag, const FVector& AtLocation, EPerceptionNoiseLoudness Loudness, float Duration, bool IsBoundToOriginActor) {
    return FPerceptionSoundAreaHandle{};
}

void UPerceptionSystem::ReportSoundShort(AActor* Instigator, const FGameplayTag& SoundTag, const FVector& AtLocation, EPerceptionNoiseLoudness Loudness, float WaitSeconds, bool IsBoundToOriginActor) {
}

bool UPerceptionSystem::IsInHearingRangeOfAnyPlayer(const AActor* Actor, EPerceptionNoiseLoudness Loudness) const {
    return false;
}

bool UPerceptionSystem::HasFreeLineOfSightBetween(const AGothicCharacter* Character, const AGothicCharacter* Other, float MaxRaycastAgeSeconds) const {
    return false;
}

FPerceptionAgentHandle UPerceptionSystem::GetViewTargetAgent(FPerceptionAgentHandle SensingAgent) const {
    return FPerceptionAgentHandle{};
}

FPerceptionSightSettings UPerceptionSystem::GetSightCapabilities(const UCharacterPerceptionComponent* CharacterPerceptionComponent) const {
    return FPerceptionSightSettings{};
}

TSet<AItemVisualWorld*> UPerceptionSystem::GetItemsPerceivedByHandler(FPerceptionHandlerHandle HandlerHandle) const {
    return TSet<AItemVisualWorld*>();
}

FPerceptionHearingSettings UPerceptionSystem::GetHearingCapabilities(const UCharacterPerceptionComponent* CharacterPerceptionComponent) const {
    return FPerceptionHearingSettings{};
}

TSet<AGothicCharacter*> UPerceptionSystem::GetCharactersPerceivedByHandler(FPerceptionHandlerHandle HandlerHandle, bool bCheckForTags) const {
    return TSet<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UPerceptionSystem::GetAllSensedCharactersWithRelationship(AGothicCharacter* PerceivedBy, ERelationship Relationship, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UPerceptionSystem::GetAllSensedCharacters(AGothicCharacter* PerceivedBy, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UPerceptionSystem::GetAllHostilesSensingCharacter(const AGothicCharacter* SensedCharacter, EPerceptionSense ViaSense, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, float MinAwareness) const {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UPerceptionSystem::GetAllCharactersSensing(const AActor* SensedActor, EPerceptionSense ViaSense, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, float MinAwareness) const {
    return TArray<AGothicCharacter*>();
}

FGameplayTagContainer UPerceptionSystem::GetAgentTagsOfAgent(FPerceptionAgentHandle Agent) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPerceptionSystem::GetAgentTagsOfActor(AActor* Actor) const {
    return FGameplayTagContainer{};
}

void UPerceptionSystem::FillPerceivedAgent(FPerceivedAgent& Out, FPerceptionAgentHandle Sensing, FPerceptionAgentHandle Perceived) const {
}

bool UPerceptionSystem::CanSense(const AGothicCharacter* Character, const AGothicCharacter* Other, float MinTimeSeconds) const {
    return false;
}

bool UPerceptionSystem::CanSee(const AGothicCharacter* Character, const AGothicCharacter* Other, float MinTimeSeconds, float AwarenessThreshold) const {
    return false;
}

bool UPerceptionSystem::CanAnyPlayerSee(const AActor* Actor, float MinTimeSeconds, float AwarenessThreshold) const {
    return false;
}

void UPerceptionSystem::BroadcastPerceptionEvent(const FGameplayTag& EventTag, const FVector& AtLocation, const AActor* OriginActor, const AActor* TargetActor, const AActor* InstigatorActor, const AActor* AffectedActor, const AActor* EffectCauser, FGameplayTagContainer EffectCauserTags, float Magnitude, float EstimatedSecondsUntilImpact) {
}


