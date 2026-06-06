#include "StoryActionRegionTrait.h"

UStoryActionRegionTrait::UStoryActionRegionTrait() {
    this->RequirementsMustBe = EStoryActionRegionRequirementsMode::Fulfilled;
    this->HandleCharacterUniqueNames.AddDefaulted(1);
    this->bEnableTriggerLimit = false;
    this->NumTimesToTrigger = 1;
}

FCharacterUniqueName UStoryActionRegionTrait::GetHero() const {
    return FCharacterUniqueName{};
}

TArray<AGothicPlayerState*> UStoryActionRegionTrait::GetAllPlayers() const {
    return TArray<AGothicPlayerState*>();
}

FCharacterUniqueName UStoryActionRegionTrait::FindCharacter(FName CharacterUniqueName) const {
    return FCharacterUniqueName{};
}


