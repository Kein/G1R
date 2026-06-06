#include "CharacterPerceptionComponent.h"

UCharacterPerceptionComponent::UCharacterPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UCharacterPerceptionComponent::ShareAwarenessWithAllSensedCharacters(const AGothicCharacter* SensedCharacterToSync, float WithinDistance) {
    return 0;
}

void UCharacterPerceptionComponent::SetAwarenessToCharacter(const AGothicCharacter* Target, EPerceptionSense ViaSense, float Awareness) {
}

void UCharacterPerceptionComponent::ReportPerceptionEvent(const FGameplayTag& EventTag, const FVector& AtLocation, AGothicCharacter* SensedCharacter, AActor* TargetActor, AActor* InstigatorActor, AActor* AffectedActor) {
}

bool UCharacterPerceptionComponent::IsSensedByAnyHostileCharacter() const {
    return false;
}

void UCharacterPerceptionComponent::HandleWeatherChanged(EWeather PreviousWeather, EWeather NewWeather) {
}

void UCharacterPerceptionComponent::HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

float UCharacterPerceptionComponent::GetSumLevelOfSensedCharactersMatchingPerceptionHandler(const FPerceptionHandlerHandle& Handler) const {
    return 0.0f;
}

FPerceptionSightSettings UCharacterPerceptionComponent::GetSightCapabilities() const {
    return FPerceptionSightSettings{};
}

TArray<AGothicCharacter*> UCharacterPerceptionComponent::GetSensedLivingCharacters(EPerceptionSense ViaSense, bool bIncludeDefeated) const {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UCharacterPerceptionComponent::GetSensedDeadCharacters(EPerceptionSense ViaSense) const {
    return TArray<AGothicCharacter*>();
}

AGothicCharacter* UCharacterPerceptionComponent::GetOwnerCharacter() const {
    return NULL;
}

TArray<AGothicCharacter*> UCharacterPerceptionComponent::GetHostileCharactersPerceivingMe(float Radius) const {
    return TArray<AGothicCharacter*>();
}

FPerceptionHearingSettings UCharacterPerceptionComponent::GetHearingCapabilities() const {
    return FPerceptionHearingSettings{};
}

float UCharacterPerceptionComponent::GetAwarenessToCharacter(const AGothicCharacter* Target, EPerceptionSense ViaSense) const {
    return 0.0f;
}

TArray<AItemVisualWorld*> UCharacterPerceptionComponent::GetAllSensedItemsMatchingPerceptionHandler(const FPerceptionHandlerHandle& Handler) const {
    return TArray<AItemVisualWorld*>();
}

TArray<AGothicCharacter*> UCharacterPerceptionComponent::GetAllSensedCharactersWithRelationship(ERelationship Relationship, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UCharacterPerceptionComponent::GetAllSensedCharactersMatchingPerceptionHandler(const FPerceptionHandlerHandle& Handler) const {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicCharacter*> UCharacterPerceptionComponent::GetAllSensedCharacters(const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const {
    return TArray<AGothicCharacter*>();
}

bool UCharacterPerceptionComponent::CanSmell(const AGothicCharacter* OtherCharacter, float MinTimeSeconds, float AwarenessThreshold) const {
    return false;
}

bool UCharacterPerceptionComponent::CanSense(const AGothicCharacter* OtherCharacter, float MinTimeSeconds) const {
    return false;
}

bool UCharacterPerceptionComponent::CanSee(const AGothicCharacter* OtherCharacter, float MinTimeSeconds, float AwarenessThreshold) const {
    return false;
}

bool UCharacterPerceptionComponent::CanHear(const AGothicCharacter* OtherCharacter, float MinTimeSeconds, float AwarenessThreshold) const {
    return false;
}

FPerceptionShortTermMemory UCharacterPerceptionComponent::BP_GetMemory() const {
    return FPerceptionShortTermMemory{};
}

FPerceptionHandlerHandle UCharacterPerceptionComponent::BP_AddPerceptionHandler(const FPerceptionHandler& Handler) {
    return FPerceptionHandlerHandle{};
}

int32 UCharacterPerceptionComponent::ApplyAwarenessOfAllCharactersSensedBy(const AGothicCharacter* SensingCharacterToSync, float WithinDistance) {
    return 0;
}


