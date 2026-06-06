#include "StoryQuestRequirements.h"

FStoryQuestRequirements::FStoryQuestRequirements() {
    this->QuestClass = NULL;
    this->bAllowWhenAvailable = false;
    this->bAllowWhenRunning = false;
    this->bAllowWhenSucceeded = false;
    this->bAllowWhenFailed = false;
}

