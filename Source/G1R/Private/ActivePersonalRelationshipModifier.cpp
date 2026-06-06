#include "ActivePersonalRelationshipModifier.h"

UActivePersonalRelationshipModifier::UActivePersonalRelationshipModifier() {
    this->bIsGlobalModifierClass = false;
    this->bCanTick = false;
    this->bDiscardIfNotHighestRelationshipWeight = false;
    this->bDiscardIfNotHighestHostilityWeight = false;
    this->bDiscardIfNotHighestRankWeight = false;
}

void UActivePersonalRelationshipModifier::SetValidUntilTime(const FInGameTime& Time) {
}

void UActivePersonalRelationshipModifier::SetValidForTime(const FInGameTime& Duration) {
}

void UActivePersonalRelationshipModifier::SetValidForIngameSeconds(float InGameSeconds) {
}

void UActivePersonalRelationshipModifier::SetValidForIngameHours(float InGameHours) {
}

void UActivePersonalRelationshipModifier::SetValidForIngameDays(float InGameDays) {
}


bool UActivePersonalRelationshipModifier::HasTimeRanOut() const {
    return false;
}

void UActivePersonalRelationshipModifier::HandleModifierRemoved_Implementation() {
}

void UActivePersonalRelationshipModifier::HandleModifierAdded_Implementation() {
}

FInGameTime UActivePersonalRelationshipModifier::GetTimeLeft() const {
    return FInGameTime{};
}

AGothicCharacterState* UActivePersonalRelationshipModifier::GetOwner() const {
    return NULL;
}

FInGameTime UActivePersonalRelationshipModifier::GetInGameTimeNow() const {
    return FInGameTime{};
}

FString UActivePersonalRelationshipModifier::GetDebugDescription_Implementation() const {
    return TEXT("");
}

void UActivePersonalRelationshipModifier::Discard() {
}

void UActivePersonalRelationshipModifier::BP_Tick_Implementation(float DeltaTime) {
}

bool UActivePersonalRelationshipModifier::BP_MatchesModifier_Implementation(const UActivePersonalRelationshipModifier* OtherModifier) const {
    return false;
}



