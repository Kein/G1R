#include "InteractionSpotsLibrary.h"

UInteractionSpotsLibrary::UInteractionSpotsLibrary() {
}

void UInteractionSpotsLibrary::SortSpotArrayByDistance(TArray<FInteractionSpotHandle>& Spots, const FVector& Center, const UObject* WorldContextObject) {
}

bool UInteractionSpotsLibrary::IsSpotReachableByCharacter(const AGothicCharacterState* CharacterState, const FInteractionSpotHandle& Handle, const UObject* WorldContextObject) {
    return false;
}

FVector UInteractionSpotsLibrary::GetLocationByName(FName InteractionSpotName, const UObject* WorldContextObject) {
    return FVector{};
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsUsableByPawnInRadius_TryMultipleActions(AGothicCharacterState* PotentialUser, const FGameplayTagContainer& PossibleActions, const FVector& Location, float Radius) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsPotentiallyUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsInRadius2D(const FVector2D& Location, float Radius, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsInRadius(const FVector& Location, float Radius, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsInBrush(UBrushComponent* Brush, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsInBox3D(const FBox& Box, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindSpotsInBox2D(const FBox2D& Box, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindReachableSpotsInBox(const FBox& Box, const UObject* WorldContextObject, AGothicCharacterState* CharacterState) {
    return TArray<FInteractionSpotHandle>();
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindRandomReachableUsableSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag) {
    return FInteractionSpotHandle{};
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindRandomReachableUnclaimedSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag) {
    return FInteractionSpotHandle{};
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindRandomReachableSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject) {
    return FInteractionSpotHandle{};
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindRandomReachableClaimableSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag) {
    return FInteractionSpotHandle{};
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindClosestUsableSpotInRadiusWithTag(AGothicCharacterState* PotentialUser, const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject) {
    return FInteractionSpotHandle{};
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindClosestUnclaimedSpotInRadiusWithTag(const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject) {
    return FInteractionSpotHandle{};
}

FInteractionSpotHandle UInteractionSpotsLibrary::FindClosestSpotInRadiusWithTag(const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject) {
    return FInteractionSpotHandle{};
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindAllSpotsInVolume(AVolume* Volume, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindAllSpotsInAreaAtLocation(const FVector& Location, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindAllSpotsInArea(UAreaTagRegionTrait* Area, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

TArray<FInteractionSpotHandle> UInteractionSpotsLibrary::FindAllReachableSpotsInAreaAtLocation(const FVector& Location, AGothicCharacterState* CharacterState, const UObject* WorldContextObject) {
    return TArray<FInteractionSpotHandle>();
}

int32 UInteractionSpotsLibrary::CountSpotsUsableByPawnInRadius_TryMultipleActions(AGothicCharacterState* PotentialUser, const FGameplayTagContainer& PossibleActions, const FVector& Location, float Radius) {
    return 0;
}

int32 UInteractionSpotsLibrary::CountSpotsUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius) {
    return 0;
}

bool UInteractionSpotsLibrary::CanFindSpotsUsableByPawnInRadius_TryMultipleActions(AGothicCharacterState* PotentialUser, const FGameplayTagContainer& PossibleActions, const FVector& Location, float Radius) {
    return false;
}

bool UInteractionSpotsLibrary::CanFindSpotsUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius) {
    return false;
}


