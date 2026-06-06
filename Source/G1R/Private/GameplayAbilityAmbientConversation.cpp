#include "GameplayAbilityAmbientConversation.h"

UGameplayAbilityAmbientConversation::UGameplayAbilityAmbientConversation() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(2);
    this->TopicToAct = NULL;
    this->ActConversationTopic = NULL;
}


