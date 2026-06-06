#include "AbilityTask_HandleSubdialog.h"
#include "ConversationTopicSet.h"
#include "Templates/SubclassOf.h"

UAbilityTask_HandleSubdialog::UAbilityTask_HandleSubdialog() {
    this->bReturnToThis = false;
    this->ActTask = NULL;
    this->TopicSet = CreateDefaultSubobject<UConversationTopicSet>(TEXT("TopicSet"));
}

UAbilityTask_HandleSubdialog* UAbilityTask_HandleSubdialog::TaskHandleSubdialog(UGameplayAbility* OwningAbility, const TArray<TSubclassOf<UConversationTopic>>& Topics, UConversationTopic* FromTopic) {
    return NULL;
}

void UAbilityTask_HandleSubdialog::OnSubtopicActEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTask_HandleSubdialog::HandleTopicSelected(UConversationTopic* Topic) {
}


