#include "SpawnTestCharacterAction.h"
#include "Templates/SubclassOf.h"

USpawnTestCharacterAction::USpawnTestCharacterAction() {
    this->spawnDef = NULL;
    this->DailyRoutineClass = NULL;
}

USpawnTestCharacterAction* USpawnTestCharacterAction::SpawnTestCharacter(const UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> NewSpawnDef, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, const FTransform& NewTransform) {
    return NULL;
}

void USpawnTestCharacterAction::HandleCharacterSpawned(AGothicNPCState* CharacterState, AGothicCharacter* Character) {
}


