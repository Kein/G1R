#include "AbilityTaskGeneric.h"

UAbilityTaskGeneric::UAbilityTaskGeneric() {
    this->TaskResult = EGenericTaskResult::Failed;
    this->bHasCustomPathfollowSetting = false;
    this->bCouldNotPushPathfollowSetting = false;
}

void UAbilityTaskGeneric::SetCustomPathfollowingSetting(const FGothicPathfollowSettings& PathfollowSetting) {
}

bool UAbilityTaskGeneric::ReportTimeSkipWhateverIsLeft() {
    return false;
}

bool UAbilityTaskGeneric::ReportTimeSkip(float SecondsThatWillBeSkipped) {
    return false;
}

bool UAbilityTaskGeneric::IsInDailyRoutineSimulation() const {
    return false;
}

bool UAbilityTaskGeneric::HasTaskJustStarted(float ThresholdRealtimeSeconds) const {
    return false;
}

bool UAbilityTaskGeneric::HasBeenActivated() const {
    return false;
}

void UAbilityTaskGeneric::HandleTimeskipRequest_Implementation() {
}

float UAbilityTaskGeneric::GetTimeRequestedToSkip() const {
    return 0.0f;
}

float UAbilityTaskGeneric::GetRuntimeSeconds() const {
    return 0.0f;
}

FInGameTime UAbilityTaskGeneric::GetRuntimeInGame() const {
    return FInGameTime{};
}

FInGameTime UAbilityTaskGeneric::GetInGameTimeNow() const {
    return FInGameTime{};
}

APlayerController* UAbilityTaskGeneric::GetAvatarPlayerController() const {
    return NULL;
}

AGothicNPCState* UAbilityTaskGeneric::GetAvatarNPCState() const {
    return NULL;
}

AGothicCharacterState* UAbilityTaskGeneric::GetAvatarCharacterState() const {
    return NULL;
}

AGothicCharacter* UAbilityTaskGeneric::GetAvatarCharacter() const {
    return NULL;
}

AGothicAIController* UAbilityTaskGeneric::GetAvatarAIController() const {
    return NULL;
}

void UAbilityTaskGeneric::EndTaskWithResult(EGenericTaskResult Result) {
}

void UAbilityTaskGeneric::EndTaskAsSuccess() {
}

void UAbilityTaskGeneric::EndTaskAsFailure() {
}

void UAbilityTaskGeneric::EndTaskAsCancelled() {
}



void UAbilityTaskGeneric::BP_ExternalCancel() {
}


