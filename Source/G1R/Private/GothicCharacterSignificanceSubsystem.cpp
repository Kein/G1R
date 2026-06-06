#include "GothicCharacterSignificanceSubsystem.h"
#include "Templates/SubclassOf.h"

UGothicCharacterSignificanceSubsystem::UGothicCharacterSignificanceSubsystem() {
    this->MainPlayerUniqueName = TEXT("Hero");
}

void UGothicCharacterSignificanceSubsystem::RemoveHideCharacterRequest(const UObject* Context, const AGothicCharacterState* CharacterToHide) {
}

void UGothicCharacterSignificanceSubsystem::RemoveHideCharacterByUniqueNameRequest(const UObject* Context, FName CharacterUniqueName) {
}

void UGothicCharacterSignificanceSubsystem::RemoveHideAllCharactersRequest(const UObject* Context) {
}

void UGothicCharacterSignificanceSubsystem::RemoveHideAllCharactersOfTerritoryRequest(const UObject* Context) {
}

void UGothicCharacterSignificanceSubsystem::RemoveHideAllButMainPlayerRequest(const UObject* Context, const AGothicCharacterState* CharacterToHide) {
}

void UGothicCharacterSignificanceSubsystem::RemoveForceVisibilityCharacterRequest(const UObject* Context, const AGothicCharacterState* CharacterToHide) {
}

void UGothicCharacterSignificanceSubsystem::RemoveAllRequestsOfObject(const UObject* Context) {
}

void UGothicCharacterSignificanceSubsystem::RemoveAllForceVisibilityCharacterRequests(const UObject* Context) {
}

bool UGothicCharacterSignificanceSubsystem::IsAllowedToBeVisible(const AGothicCharacterState* CharacterState) const {
    return false;
}

void UGothicCharacterSignificanceSubsystem::HideCharactersWithUniqueName(const UObject* Context, FName CharacterUniqueName) {
}

void UGothicCharacterSignificanceSubsystem::HideCharacter(const UObject* Context, const AGothicCharacterState* CharacterToHide) {
}

void UGothicCharacterSignificanceSubsystem::HideAllCharactersOfTerritory(const UObject* Context, TSubclassOf<UTerritoryConfig> TerritoryClass) {
}

void UGothicCharacterSignificanceSubsystem::HideAllCharactersOfSpeciesInTerritory(const UObject* Context, TSubclassOf<UTerritoryConfig> TerritoryClass, FGameplayTag Species) {
}

void UGothicCharacterSignificanceSubsystem::HideAllCharacters(const UObject* Context) {
}

void UGothicCharacterSignificanceSubsystem::HideAllButMainPlayer(const UObject* Context) {
}

void UGothicCharacterSignificanceSubsystem::ForceVisibilityCharacter(const UObject* Context, const AGothicCharacterState* CharacterToHide) {
}


