#include "AbilityTask_AmbientConversation.h"
#include "Templates/SubclassOf.h"

UAbilityTask_AmbientConversation::UAbilityTask_AmbientConversation() {
    this->OtherCharacter = NULL;
    this->TopicToAct = NULL;
}

UAbilityTask_AmbientConversation* UAbilityTask_AmbientConversation::TaskAmbientConversation(UGameplayAbility* OwningAbility, AGothicCharacterState* NewOtherCharacter, TSubclassOf<UConversationTopic> NewTopicToAct) {
    return NULL;
}


