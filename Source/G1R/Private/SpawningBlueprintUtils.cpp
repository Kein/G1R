#include "SpawningBlueprintUtils.h"
#include "Templates/SubclassOf.h"

USpawningBlueprintUtils::USpawningBlueprintUtils() {
}

void USpawningBlueprintUtils::UnspawnEntity(UObject* WorldContextObject, AActor* Entity) {
}

void USpawningBlueprintUtils::SpawnAIAgentDeferred(UObject* WorldContextObject, const FTransform& Transform, TSubclassOf<USpawnAIAgentDefinition> CurrentSpawnAIAgentDefinition) {
}

int64 USpawningBlueprintUtils::SpawnAIAgent(UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> SpawningDefinition, const FTransform& Transform) {
    return 0;
}

AActor* USpawningBlueprintUtils::GetEntityFromSpawningRequest(UObject* WorldContextObject, int64 SpawningRequestID) {
    return NULL;
}


