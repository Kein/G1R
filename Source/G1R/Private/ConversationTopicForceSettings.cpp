#include "ConversationTopicForceSettings.h"

FConversationTopicForceSettings::FConversationTopicForceSettings() {
    this->ApproachBy = EConversationForceWalk::None;
    this->RangeType = EConversationForceRangeType::DefaultRange;
    this->bDoAmbientDuringCombat = false;
}

