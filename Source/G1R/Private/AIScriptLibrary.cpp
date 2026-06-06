#include "AIScriptLibrary.h"
#include "Templates/SubclassOf.h"

UAIScriptLibrary::UAIScriptLibrary() {
}

USpawningRequest* UAIScriptLibrary::SpawnAIAgentWithTransform(UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> spawnDef, const FTransform& Transform, FOnEntitySpawnDelegateDynamic onSpawned) {
    return NULL;
}

USpawningRequest* UAIScriptLibrary::SpawnAIAgent(UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> spawnDef, const FVector& position) {
    return NULL;
}

void UAIScriptLibrary::SetWalkSpeed(const AActor* Entity, EWalkSpeed requestedWalkSpeed) {
}

void UAIScriptLibrary::SetMindset(AActor* Entity, EAIAgentMindset newMindset) {
}

bool UAIScriptLibrary::IsAPlayer(AActor* Actor) {
    return false;
}

EWalkSpeed UAIScriptLibrary::GetWalkSpeed(const AActor* Entity) {
    return EWalkSpeed::Walking;
}

AActor* UAIScriptLibrary::GetLocalPlayer(const UObject* WorldContextObject) {
    return NULL;
}


