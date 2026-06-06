#include "GameplayAbility_AI.h"

UGameplayAbility_AI::UGameplayAbility_AI() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

AGothicNPCState* UGameplayAbility_AI::GetNPCState() const {
    return NULL;
}

AGothicCharacterState* UGameplayAbility_AI::GetCharacterState() const {
    return NULL;
}

AGothicCharacter* UGameplayAbility_AI::GetCharacter() const {
    return NULL;
}

AGothicAIController* UGameplayAbility_AI::GetAIController() const {
    return NULL;
}


