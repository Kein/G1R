#include "AbilityTask_AI.h"

UAbilityTask_AI::UAbilityTask_AI() {
}

AGothicCharacter* UAbilityTask_AI::GetSelf() const {
    return NULL;
}

AGothicNPCState* UAbilityTask_AI::GetNPCState() const {
    return NULL;
}

AGothicAIController* UAbilityTask_AI::GetController() const {
    return NULL;
}

AGothicCharacterState* UAbilityTask_AI::GetCharacterState() const {
    return NULL;
}

bool UAbilityTask_AI::BP_ShouldShowTaskInfoInImGui_Implementation() {
    return false;
}



