#include "FCharacterUniqueNameMixins.h"

UFCharacterUniqueNameMixins::UFCharacterUniqueNameMixins() {
}

bool UFCharacterUniqueNameMixins::HasSpawnedVisuals(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return false;
}

AGothicCharacter* UFCharacterUniqueNameMixins::GetSpawnedCharacter(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return NULL;
}

AGothicPlayerState* UFCharacterUniqueNameMixins::GetPlayerState(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return NULL;
}

int32 UFCharacterUniqueNameMixins::GetNumWithSpawnedVisuals(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return 0;
}

int32 UFCharacterUniqueNameMixins::GetNumTotal(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return 0;
}

AGothicNPCState* UFCharacterUniqueNameMixins::GetNPCState(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return NULL;
}

AGothicCharacterState* UFCharacterUniqueNameMixins::GetCharacterState(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return NULL;
}

TArray<AGothicCharacter*> UFCharacterUniqueNameMixins::GetAllSpawnedCharacters(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return TArray<AGothicCharacter*>();
}

TArray<AGothicPlayerState*> UFCharacterUniqueNameMixins::GetAllPlayerStates(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return TArray<AGothicPlayerState*>();
}

TArray<AGothicNPCState*> UFCharacterUniqueNameMixins::GetAllNPCStates(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return TArray<AGothicNPCState*>();
}

TArray<AGothicCharacterState*> UFCharacterUniqueNameMixins::GetAllCharacterStates(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return TArray<AGothicCharacterState*>();
}

UGameplayAbility_CharacterAI* UFCharacterUniqueNameMixins::GetAI(const FCharacterUniqueName& This, const UObject* WorldContextObject) {
    return NULL;
}


