#include "CharacterPersonalSpaceSubsystem.h"

UCharacterPersonalSpaceSubsystem::UCharacterPersonalSpaceSubsystem() {
}

bool UCharacterPersonalSpaceSubsystem::TryFindSpreadOutLocationWithinGroup(AGothicCharacter* Character, TArray<AGothicCharacter*>& Group, float WantedMoveDistance, float MinMoveDistance, FVector& OutLocation) {
    return false;
}

bool UCharacterPersonalSpaceSubsystem::TryFindSpreadOutLocationFromAllCharactersNearby(AGothicCharacter* Character, float FindNearbyCharactersRadius, float WantedMoveDistance, float MinMoveDistance, FVector& OutLocation) {
    return false;
}

void UCharacterPersonalSpaceSubsystem::StopTrackingCharacter(const AGothicCharacter* GothicCharacter) {
}

void UCharacterPersonalSpaceSubsystem::StartTrackingCharacter(AGothicCharacter* GothicCharacter, float TraceDistance, int32 TraceCount, bool bDebugDraw) {
}

bool UCharacterPersonalSpaceSubsystem::CanMoveStraightToLocation(AGothicCharacter* Character, const FVector& TestLocation, FVector& OutHitLocation, const FVector& CharacterExtentFactor) {
    return false;
}

bool UCharacterPersonalSpaceSubsystem::CanMoveStraightInDirection(const AGothicCharacter* Character, const FVector& Direction, float Distance, FVector& OutHitLocation, const FVector& CharacterExtentFactor) {
    return false;
}


