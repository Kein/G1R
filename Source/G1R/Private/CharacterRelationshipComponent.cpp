#include "CharacterRelationshipComponent.h"
#include "Templates/SubclassOf.h"

UCharacterRelationshipComponent::UCharacterRelationshipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveModifiersGeneration = 0;
}

bool UCharacterRelationshipComponent::IsOfHigherRankTowards(const AGothicCharacterState* Other) const {
    return false;
}

bool UCharacterRelationshipComponent::IsNeutralTowards(const AGothicCharacterState* Other) const {
    return false;
}

bool UCharacterRelationshipComponent::IsHostileTowards(const AGothicCharacterState* Other) const {
    return false;
}

bool UCharacterRelationshipComponent::IsFriendlyTowards(const AGothicCharacterState* Other) const {
    return false;
}

bool UCharacterRelationshipComponent::IsEnemyTowards(const AGothicCharacterState* Other) const {
    return false;
}

bool UCharacterRelationshipComponent::IsAngryTowards(const AGothicCharacterState* Other) const {
    return false;
}

void UCharacterRelationshipComponent::HandleOwnedTagUpdated(const FGameplayTag& Tag, bool bTagExists) {
}

ERelationshipRelativeRank UCharacterRelationshipComponent::GetRelativeRankOf(const AGothicCharacterState* Other) const {
    return ERelationshipRelativeRank::Unknown;
}

ERelationship UCharacterRelationshipComponent::GetRelationshipTowards(const AGothicCharacterState* Other) const {
    return ERelationship::Unknown;
}

ERelationshipHostility UCharacterRelationshipComponent::GetHostilityTowards(const AGothicCharacterState* Other) const {
    return ERelationshipHostility::Unknown;
}

float UCharacterRelationshipComponent::GetBaseSeverityOfCrimeIfCommitedByOther(const AGothicCharacterState* Other, FGameplayTag Crime) const {
    return 0.0f;
}

TArray<UActivePersonalRelationshipModifier*> UCharacterRelationshipComponent::GetActiveModifersOfClass(TSubclassOf<UActivePersonalRelationshipModifier> ModifierClass) const {
    return TArray<UActivePersonalRelationshipModifier*>();
}

TArray<AGothicCharacterState*> UCharacterRelationshipComponent::FindAllCharactersWithRelationshipInRadius(float QueryRadius, ERelationship Relationship) const {
    return TArray<AGothicCharacterState*>();
}

TArray<AGothicCharacterState*> UCharacterRelationshipComponent::FindAllCharactersWithRelationshipAt(const FVector& QueryLocation, float QueryRadius, ERelationship Relationship) const {
    return TArray<AGothicCharacterState*>();
}

FRelationshipEvaluation UCharacterRelationshipComponent::EvaluateRelationshipWith(const AGothicCharacterState* Other) const {
    return FRelationshipEvaluation{};
}

bool UCharacterRelationshipComponent::DoesCrimeApplyForOther(const AGothicCharacterState* Other, FGameplayTag Crime) const {
    return false;
}

UActivePersonalRelationshipModifier* UCharacterRelationshipComponent::AddActiveModifier(UActivePersonalRelationshipModifier* ModifierTemplate) {
    return NULL;
}


