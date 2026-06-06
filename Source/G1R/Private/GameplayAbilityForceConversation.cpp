#include "GameplayAbilityForceConversation.h"

UGameplayAbilityForceConversation::UGameplayAbilityForceConversation() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->RequiredAwarenessOfOther = 1.00f;
}

bool UGameplayAbilityForceConversation::HasSomethingToSayTo(const AGothicCharacter* CharacterSelf, const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, EConversationForceRangeType RangeType) {
    return false;
}

void UGameplayAbilityForceConversation::HandleSensedSomeoneWeHaveSomethingToSayTo(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, EConversationForceRangeType RangeType) {
}

void UGameplayAbilityForceConversation::FoundCharacterWeHaveSomethingToSayTo(const AGothicCharacter* OtherCharacter, EConversationForceRangeType RangeType) {
}


