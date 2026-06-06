#include "PerceptionComponent.h"

UPerceptionComponent::UPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CustomUpdateRate = 0.00f;
}

void UPerceptionComponent::ReportAreaEventAt(const FGameplayTag& EventTag, const FVector& AtLocation, float Radius, AActor* SensedActor, AActor* TargetActor, AActor* InstigatorActor, AActor* AffectedActor) {
}

bool UPerceptionComponent::IsInHearingRangeOfAnyPlayer(EPerceptionNoiseLoudness Loudness) const {
    return false;
}

TArray<AGothicCharacter*> UPerceptionComponent::GetCharactersPerceivingMe(EPerceptionSense ViaSense, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith) const {
    return TArray<AGothicCharacter*>();
}

bool UPerceptionComponent::CanBeSeenByAnyPlayer(float MinTimeSeconds) const {
    return false;
}

void UPerceptionComponent::BroadcastAreaEvent(const FGameplayTag& EventTag, float Radius, AActor* SensedActor, AActor* TargetActor, AActor* InstigatorActor, AActor* AffectedActor) {
}


