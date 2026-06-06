#include "GameplayAbilityConversationV2WithUI.h"

UGameplayAbilityConversationV2WithUI::UGameplayAbilityConversationV2WithUI() {
    this->AbilityTriggers.AddDefaulted(2);
    this->PlayerConversationWidget = NULL;
    this->PlayerController = NULL;
}

void UGameplayAbilityConversationV2WithUI::ServerUserRequestedSkip_Implementation() {
}

void UGameplayAbilityConversationV2WithUI::ServerRequestStartActingTopic_Implementation(UConversationTopic* Topic) {
}
bool UGameplayAbilityConversationV2WithUI::ServerRequestStartActingTopic_Validate(UConversationTopic* Topic) {
    return true;
}

void UGameplayAbilityConversationV2WithUI::ServerRequestStartActingSubTopic_Implementation(UConversationTopic* Topic) {
}

void UGameplayAbilityConversationV2WithUI::ClientShowSubChoiceUI_Implementation(const TArray<UConversationTopic*>& AvailableTopics) {
}

void UGameplayAbilityConversationV2WithUI::ClientShowConversationUI_Implementation() {
}

void UGameplayAbilityConversationV2WithUI::ClientShowChoiceUI_Implementation(const TArray<UConversationTopic*>& AvailableTopics) {
}


