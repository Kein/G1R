#include "InteractionSubsystem.h"

UInteractionSubsystem::UInteractionSubsystem() {
    this->InteractionSpotSourceFiles.AddDefaulted(1);
}

FInteractionSpotUseToken UInteractionSubsystem::UseSpot(const FInteractionSpotClaimToken& ClaimToken) {
    return FInteractionSpotUseToken{};
}

void UInteractionSubsystem::ResetAllCooldowns() {
}

void UInteractionSubsystem::RemoveSpot(FInteractionSpotHandle Spot) {
}

void UInteractionSubsystem::MoveSpot(FInteractionSpotHandle Spot, const FTransform& NewTransform) {
}

bool UInteractionSubsystem::IsSpotClaimedBy(FInteractionSpotHandle Spot, const AGothicCharacterState* User) const {
    return false;
}

bool UInteractionSubsystem::IsSpotBlockedByClaimedOtherSpot(FInteractionSpotHandle Spot) const {
    return false;
}

bool UInteractionSubsystem::HasPawnAbilityToUseSpot(FInteractionSpotHandle Spot, const AGothicCharacterState* PotentialUser, FGameplayTag Action) const {
    return false;
}

void UInteractionSubsystem::HandleUserDestroyed(AActor* Actor) {
}

void UInteractionSubsystem::HandleClaimerDestroyed(AActor* Actor) {
}

UInteractionSubsystem* UInteractionSubsystem::GetInteractionSpots(UObject* WorldContextObject) {
    return NULL;
}

FName UInteractionSubsystem::GenerateUniqueSpotName(const FString& BasedOn) const {
    return NAME_None;
}

FInteractionSpotHandle UInteractionSubsystem::FindSpotByName(FName Name) const {
    return FInteractionSpotHandle{};
}

TArray<FString> UInteractionSubsystem::DebugCanPawnClaimSpotFailReason(FInteractionSpotHandle Spot, AGothicCharacterState* PotentialUser, FGameplayTag Action) const {
    return TArray<FString>();
}

FInteractionSpotClaimToken UInteractionSubsystem::ClaimSpot(FInteractionSpotHandle Spot, AGothicCharacterState* User, FGameplayTag Action) {
    return FInteractionSpotClaimToken{};
}

bool UInteractionSubsystem::CanPawnClaimSpotAndHasAbilityForAction(FInteractionSpotHandle Spot, const AGothicCharacterState* PotentialUser, FGameplayTag Action) const {
    return false;
}

bool UInteractionSubsystem::CanPawnClaimSpot(FInteractionSpotHandle Spot, const AGothicCharacterState* PotentialUser, FGameplayTag Action) const {
    return false;
}

FInteractionSpotHandle UInteractionSubsystem::AddSpot(const FInteractionSpot& Spot) {
    return FInteractionSpotHandle{};
}


