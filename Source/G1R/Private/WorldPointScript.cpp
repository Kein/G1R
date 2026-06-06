#include "WorldPointScript.h"
#include "Templates/SubclassOf.h"

UWorldPointScript::UWorldPointScript() {
    this->m_LinkedActorDefinition = NULL;
    this->m_SpawnedLinkedActor = NULL;
}

FName UWorldPointScript::SpawnWarningFlock(const TSubclassOf<UAmbientLifeConfig> ItemDefinition, int32 Num, float Direction, float spread) {
    return NAME_None;
}

void UWorldPointScript::SpawnLinkedActor(const TSubclassOf<ULinkedActorDefinition> linkedActor) {
}

FName UWorldPointScript::SpawnItem(const TSubclassOf<UItemDefinition> ItemDefinition) {
    return NAME_None;
}

FName UWorldPointScript::SpawnAreaFlock(const TSubclassOf<UAmbientLifeConfig> ItemDefinition, int32 Num) {
    return NAME_None;
}

FName UWorldPointScript::SpawnAIAgent(const TSubclassOf<USpawnAIAgentDefinition> NewSpawnAIAgent, UAIState_DailyRoutine* DailyRoutine) {
    return NAME_None;
}

void UWorldPointScript::Server_SpawnEmptyItem_Implementation(FItemVirtualData itemToSpawn, FItemSpawnPosition position, int32 coordId) {
}

void UWorldPointScript::Server_SpawnBasicInventoryItem_Implementation(FItemVirtualData itemToSpawn, FItemSpawnPosition position, int32 coordId, const FString& worldPointName) {
}

void UWorldPointScript::OnItemDestroyed(AActor* Target) {
}

void UWorldPointScript::OnAIAgentSpawned_Implementation(AActor* Entity, FName Name) {
}


