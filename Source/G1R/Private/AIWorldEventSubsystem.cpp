#include "AIWorldEventSubsystem.h"
#include "Templates/SubclassOf.h"

UAIWorldEventSubsystem::UAIWorldEventSubsystem() {
}

void UAIWorldEventSubsystem::StopExplicitEventOfClass(TSubclassOf<UAIWorldEventExplicit> AIWorldEventClass) {
}

void UAIWorldEventSubsystem::StartExplicitEventOfClass(TSubclassOf<UAIWorldEventExplicit> AIWorldEventClass) {
}

bool UAIWorldEventSubsystem::IsEventOfClassPending(TSubclassOf<UAIWorldEvent> AIWorldEventClass) const {
    return false;
}

bool UAIWorldEventSubsystem::IsEventOfClassActive(TSubclassOf<UAIWorldEvent> AIWorldEventClass) const {
    return false;
}

bool UAIWorldEventSubsystem::IsAllowedToJoinEventOfClass(const AGothicCharacterState* CharacterState, TSubclassOf<UAIWorldEvent> AIWorldEventClass) const {
    return false;
}

bool UAIWorldEventSubsystem::HasCharacterJoinedEventOfClass(const AGothicCharacterState* CharacterState, TSubclassOf<UAIWorldEvent> AIWorldEventClass) const {
    return false;
}

UAIWorldEvent* UAIWorldEventSubsystem::GetActiveEventOfClass(TSubclassOf<UAIWorldEvent> AIWorldEventClass) const {
    return NULL;
}


