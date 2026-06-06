#include "AIEventResponse.h"

UAIEventResponse::UAIEventResponse() {
    this->bExecuteImmediately = false;
}

void UAIEventResponse::PerformResponse_Implementation(const FGameplayTag& AIEvent, const FRememberedPerception& Perception) const {
}

UGameplayAbility_CharacterAI* UAIEventResponse::GetOwningAIAbility() const {
    return NULL;
}

void UAIEventResponse::DrawImGuiShortDesc_Implementation() const {
}

void UAIEventResponse::DrawImGui_Implementation() const {
}


