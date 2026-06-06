#include "PresetTransitionEntry.h"

FPresetTransitionEntry::FPresetTransitionEntry() {
    this->PossibleNextPresetClass = NULL;
    this->MonologStateValidity = EConversationPresetMonologState::Any;
    this->Weight = 0.00f;
}

