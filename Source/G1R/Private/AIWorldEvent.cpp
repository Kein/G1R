#include "AIWorldEvent.h"

UAIWorldEvent::UAIWorldEvent() {
    this->MaxAllowedNonMainParticipants = -1;
    this->EventLocationRadius = 1000.00f;
    this->bRequireCharactersToBeAtEventLocationBeforeJoining = true;
    this->bEndInteractionOfNonMainParticipantsWhenEnding = true;
    this->bWaitUntilMainParticipantsAreAtEventLocation = true;
    this->bWaitUntilAllMainParticipantsHaveJoined = true;
}

bool UAIWorldEvent::IsCharacterAtEventLocation(const AGothicCharacterState* CharacterState) const {
    return false;
}

TSet<AGothicCharacterState*> UAIWorldEvent::GetJoinedParticipants() const {
    return TSet<AGothicCharacterState*>();
}

TSet<AGothicNPCState*> UAIWorldEvent::GetJoinedNPCParticipants() const {
    return TSet<AGothicNPCState*>();
}

TSet<AGothicNPCState*> UAIWorldEvent::GetJoinedNonMainNPCParticipants() const {
    return TSet<AGothicNPCState*>();
}

TSet<AGothicNPCState*> UAIWorldEvent::GetJoinedMainNPCParticipants() const {
    return TSet<AGothicNPCState*>();
}

bool UAIWorldEvent::BP_IsCharacterAllowedToJoin_Implementation(const AGothicCharacterState* CharacterState) const {
    return false;
}






