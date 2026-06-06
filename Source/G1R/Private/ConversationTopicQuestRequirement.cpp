#include "ConversationTopicQuestRequirement.h"

FConversationTopicQuestRequirement::FConversationTopicQuestRequirement() {
    this->QuestClass = NULL;
    this->bAllowWhenAvailable = false;
    this->bAllowWhenRunning = false;
    this->bAllowWhenSucceeded = false;
    this->bAllowWhenFailed = false;
}

