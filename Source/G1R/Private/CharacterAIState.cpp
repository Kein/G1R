#include "CharacterAIState.h"
#include "Templates/SubclassOf.h"

UCharacterAIState::UCharacterAIState() {
    this->bShouldExitState = false;
    this->bSupportsSimulatedSteps = false;
    this->AssessmentModuleClass = NULL;
    this->AssessmentModule = NULL;
    this->WorldEventToActivate = NULL;
    this->requestedWalkSpeed = EWalkSpeed::Count;
}

void UCharacterAIState::SetWalkSpeed(EWalkSpeed WalkSpeed) {
}

void UCharacterAIState::SetOther(AGothicCharacter* Other) {
}

void UCharacterAIState::RestartState() {
}

void UCharacterAIState::ResetWalkSpeed() {
}

void UCharacterAIState::RemoveDynamicOwnedGameplayTagFromOwner(const FGameplayTag& Tag) {
}

bool UCharacterAIState::PrefersGracefulExit_Implementation() const {
    return false;
}

void UCharacterAIState::OnGracefulExitRequested_Implementation() {
}

bool UCharacterAIState::MayDoGracefulExitNow_Implementation() const {
    return false;
}

bool UCharacterAIState::IsSubStateOf(TSubclassOf<UCharacterAIState> Class) {
    return false;
}

bool UCharacterAIState::IsInSubStateOfClass(TSubclassOf<UCharacterAIState> Class) {
    return false;
}

AGothicCharacter* UCharacterAIState::GetSelf() const {
    return NULL;
}

UCharacterAIState* UCharacterAIState::GetParentState() const {
    return NULL;
}

AGothicCharacter* UCharacterAIState::GetOther() const {
    return NULL;
}

AGothicNPCState* UCharacterAIState::GetNPCState() const {
    return NULL;
}

FVector UCharacterAIState::GetMoveGoalOffsetFor_Implementation(const AActor* TargetActor) const {
    return FVector{};
}

UCharacterAIState* UCharacterAIState::GetCurrentSubstate() const {
    return NULL;
}

AGothicAIController* UCharacterAIState::GetController() const {
    return NULL;
}

AGothicCharacterState* UCharacterAIState::GetCharacterState() const {
    return NULL;
}

FBox UCharacterAIState::EstimateMovementBoundingBox_Implementation() const {
    return FBox{};
}

UCharacterAIState* UCharacterAIState::CreateFromClass(TSubclassOf<UCharacterAIState> Class, UGameplayAbility_CharacterAI* OwningAI) {
    return NULL;
}

int32 UCharacterAIState::CancelSubStatesOfClass(TSubclassOf<UCharacterAIState> Class) {
    return 0;
}

bool UCharacterAIState::BP_ShouldShowTaskInfoInImGui_Implementation() {
    return false;
}


void UCharacterAIState::BP_OnGameplayTagEvent_Implementation(const FGameplayTag Tag, const FGameplayEventData& EventData) {
}

void UCharacterAIState::BP_OnAnyPerceptionReceived_Implementation(AActor* Instigator, FGameplayTag Tag) {
}



void UCharacterAIState::BP_DrawStateImGui() {
}



void UCharacterAIState::AssessEventFromPerception(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, FGameplayTag Assess) {
}

void UCharacterAIState::AddDynamicOwnedGameplayTagToOwner(const FGameplayTag& Tag) {
}


