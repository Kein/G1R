#include "TerritorySubsystem.h"

UTerritorySubsystem::UTerritorySubsystem() {
    this->FarEnoughSpotDistance = 7000.00f;
    this->CharacterBoundingBoxExtent = 9000.00f;
    this->MaxHeightDifferenceToSpot = 2000.00f;
    this->SpotCloserToAttackerRelevanceFactor = 3.00f;
}

bool UTerritorySubsystem::TryGetRandomNavigablePointWithinTerritory(const AGothicCharacterState* State, const UTerritoryConfig* Territory, FVector& OutPoint) const {
    return false;
}

void UTerritorySubsystem::SetDebugNeverHaveCharacterInCombatRadius(bool bValue) {
}

void UTerritorySubsystem::SetDebugAlwaysReturnBeingInTerritory(bool bValue) {
}

void UTerritorySubsystem::SetDebugAlwaysHaveCharacterInCombatRadius(bool bValue) {
}

bool UTerritorySubsystem::IsCharacterStateWithinTerritory(const AGothicCharacterState* State, const UTerritoryConfig* Territory) const {
    return false;
}

UTerritoryConfig* UTerritorySubsystem::GetTerritoryByAssociatedAreaTag(FGameplayTag AreaTag, const UAbilitySystemComponent* ASC) const {
    return NULL;
}

UTerritoryConfig* UTerritorySubsystem::GetTerritoryByAreaTagContainer(const FGameplayTagContainer& AreaTags, const UAbilitySystemComponent* ASC) const {
    return NULL;
}

UTerritoryConfig* UTerritorySubsystem::GetTerritoryByAdditionalAreaTags(FGameplayTag AreaTag, const UAbilitySystemComponent* ASC) const {
    return NULL;
}

FInteractionSpotHandle UTerritorySubsystem::GetDisengageSpotInTerritory(const UTerritoryConfig* Territory, AGothicCharacterState* State, AGothicCharacterState* AttackerState, const FGameplayTagContainer& ValidSpotActionTags, const int32 CheckSpotAmount) const {
    return FInteractionSpotHandle{};
}

bool UTerritorySubsystem::GetDebugNeverHaveCharacterInCombatRadius() const {
    return false;
}

bool UTerritorySubsystem::GetDebugAlwaysReturnBeingInTerritory() const {
    return false;
}

bool UTerritorySubsystem::GetDebugAlwaysHaveCharacterInCombatRadius() const {
    return false;
}


