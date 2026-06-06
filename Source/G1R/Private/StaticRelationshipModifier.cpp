#include "StaticRelationshipModifier.h"

UStaticRelationshipModifier::UStaticRelationshipModifier() {
    this->Weight = 1.00f;
}

bool UStaticRelationshipModifier::IsApplicableForWorld_Implementation(UWorld* ThisWorld) const {
    return false;
}

FGameplayTag UStaticRelationshipModifier::FindBestMatchingSpeciesRankTag(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

FGameplayTag UStaticRelationshipModifier::FindBestMatchingSpeciesHostilityTag(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

FGameplayTag UStaticRelationshipModifier::FindBestMatchingSpeciesFriendlinessTag(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

FGameplayTag UStaticRelationshipModifier::FindBestMatchingGuildRankTag(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

FGameplayTag UStaticRelationshipModifier::FindBestMatchingGuildHostilityTag(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}

FGameplayTag UStaticRelationshipModifier::FindBestMatchingGuildFriendlinessTag(const FGameplayTag& Tag) const {
    return FGameplayTag{};
}


