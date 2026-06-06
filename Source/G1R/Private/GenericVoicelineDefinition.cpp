#include "GenericVoicelineDefinition.h"

UGenericVoicelineDefinition::UGenericVoicelineDefinition() {
    this->Weight = 1.00f;
    this->MinRequiredWeight = 0.00f;
    this->GlobalCooldownSeconds = 0.00f;
}

bool UGenericVoicelineDefinition::HasCanBeSaidNowFunction() const {
    return false;
}



