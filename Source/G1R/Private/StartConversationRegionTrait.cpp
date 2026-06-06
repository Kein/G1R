#include "StartConversationRegionTrait.h"

UStartConversationRegionTrait::UStartConversationRegionTrait() {
    this->HandleCharacterUniqueNames.AddDefaulted(1);
    this->bForceSelfConversation = false;
    this->bReTryEachTick = false;
}


