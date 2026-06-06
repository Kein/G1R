#include "RelationshipSystem.h"

URelationshipSystem::URelationshipSystem() {
}

FStaticRelationshipEvaluation URelationshipSystem::StaticRelationshipBetween(const FGameplayTag& MySpecies, const FGameplayTag& OtherSpecies, const FGameplayTag& MyGuild, const FGameplayTag& OtherGuild) const {
    return FStaticRelationshipEvaluation{};
}

FRelationshipEvaluation URelationshipSystem::RelationshipBetween(const AGothicCharacterState* Me, const AGothicCharacterState* Other, float MaxAgeSeconds, bool bStaticOnly) const {
    return FRelationshipEvaluation{};
}

FPersonalRelationshipEvaluation URelationshipSystem::PersonalRelationshipBetween(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return FPersonalRelationshipEvaluation{};
}

TArray<AGothicCharacterState*> URelationshipSystem::FindAllCharactersWithRelationshipInRadius(const AGothicCharacterState* Me, const FVector& QueryLocation, float QueryRadius, ERelationship Relationship) const {
    return TArray<AGothicCharacterState*>();
}

FPersonalRelationshipEvaluation URelationshipSystem::ActivePersonalRelationshipBetween(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return FPersonalRelationshipEvaluation{};
}


