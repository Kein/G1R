#include "PerceivedInteractiveObjectStatics.h"

UPerceivedInteractiveObjectStatics::UPerceivedInteractiveObjectStatics() {
}

bool UPerceivedInteractiveObjectStatics::IsPersonallyOwnedByAnyone(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject) {
    return false;
}

bool UPerceivedInteractiveObjectStatics::IsPersonallyOwnedBy(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject, const AGothicCharacterState* CharacterState) {
    return false;
}

bool UPerceivedInteractiveObjectStatics::IsOwnedByCharactersGuild(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject, const AGothicCharacterState* CharacterState) {
    return false;
}

TSet<AGothicCharacterState*> UPerceivedInteractiveObjectStatics::GetPersonallyOwnedBy(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject) {
    return TSet<AGothicCharacterState*>();
}

FGameplayTagContainer UPerceivedInteractiveObjectStatics::GetOwnedByGuilds(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject) {
    return FGameplayTagContainer{};
}


