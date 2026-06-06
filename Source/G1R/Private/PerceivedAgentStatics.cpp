#include "PerceivedAgentStatics.h"

UPerceivedAgentStatics::UPerceivedAgentStatics() {
}

void UPerceivedAgentStatics::SetCharacterState(FPerceivedAgent& This, AGothicCharacterState* CharacterState, const UObject* WorldContextObject) {
}

void UPerceivedAgentStatics::SetCharacter(FPerceivedAgent& This, AGothicCharacter* Character, const UObject* WorldContextObject) {
}

AGothicCharacterState* UPerceivedAgentStatics::GetCharacterState(const FPerceivedAgent& This, const UObject* WorldContextObject) {
    return NULL;
}

AGothicCharacter* UPerceivedAgentStatics::GetCharacter(const FPerceivedAgent& This, const UObject* WorldContextObject) {
    return NULL;
}

AActor* UPerceivedAgentStatics::GetActor(const FPerceivedAgent& This, const UObject* WorldContextObject) {
    return NULL;
}


