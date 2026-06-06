#include "SpawnpointManagerConfig.h"
#include "Templates/SubclassOf.h"

USpawnpointManagerConfig::USpawnpointManagerConfig() {
}

void USpawnpointManagerConfig::AddItemSpawnpoint(FName Name, TSubclassOf<UItemDefinition> itemDef, FRotator Rotator, FVector position) {
}

void USpawnpointManagerConfig::AddAISpawnpoint(FName Name, TSubclassOf<USpawnAIAgentDefinition> spawnDef, FRotator Rotator, FVector position) {
}

void USpawnpointManagerConfig::AddAIAmbientSpawnpoint(FName Name, TSubclassOf<USpawnAIAgentDefinition> spawnDef, FRotator Rotator, FVector position, float minSpawnCount, float maxSpawnCount, float Radius) {
}


