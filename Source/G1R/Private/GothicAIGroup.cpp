#include "GothicAIGroup.h"
#include "Templates/SubclassOf.h"

UGothicAIGroup::UGothicAIGroup() {
}

void UGothicAIGroup::MakeCharacterLeaveGroup(AGothicCharacter* Character) {
}

void UGothicAIGroup::MakeCharacterJoinGroup(AGothicCharacter* Character) {
}

bool UGothicAIGroup::IsCharacterAllowedToJoin_Implementation(AGothicCharacter* Character) {
    return false;
}

bool UGothicAIGroup::HasCharacterJoinedGroup(AGothicCharacter* Character) const {
    return false;
}





void UGothicAIGroup::HandleJoinedCharacterDestroyed(AActor* DestroyedActor) {
}

TArray<AGothicCharacter*> UGothicAIGroup::GetJoinedCharactersWithTags(const FGameplayTagContainer& Included, const FGameplayTagContainer& Excluded) const {
    return TArray<AGothicCharacter*>();
}

TArray<AActor*> UGothicAIGroup::GetGroupTargets_Implementation() const {
    return TArray<AActor*>();
}

FVector UGothicAIGroup::GetGroupCenterLocation() const {
    return FVector{};
}

FBox UGothicAIGroup::GetGroupBoundingBox() const {
    return FBox{};
}

TArray<AGothicCharacter*> UGothicAIGroup::GetConsciousJoinedCharacters() const {
    return TArray<AGothicCharacter*>();
}

TArray<UGothicAIGroup*> UGothicAIGroup::GetAllActiveGroupsOfClass(const UObject* WorldContextObject, TSubclassOf<UGothicAIGroup> GroupClass) {
    return TArray<UGothicAIGroup*>();
}

void UGothicAIGroup::DisplayImGui_Implementation(AGothicCharacter* ContextCharacter) {
}

void UGothicAIGroup::DebugDrawGroup(float LifeTimeSeconds) const {
}


