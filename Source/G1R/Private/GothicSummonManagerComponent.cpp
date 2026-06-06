#include "GothicSummonManagerComponent.h"
#include "Templates/SubclassOf.h"

UGothicSummonManagerComponent::UGothicSummonManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGothicSummonManagerComponent::SetDelayedSpawn(AActor* SummonerActor, TSubclassOf<UGameplayEffect> SummonedEffect, TSubclassOf<USpawnAIAgentDefinition> SpawnAIAgentDefinition, FVector position, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, AActor* SummonCreatureVisualEffect, float Delay) {
}

AGothicNPCState* UGothicSummonManagerComponent::DoDelayedSpawn_Scriptable_Implementation(AActor* SummonerActor, TSubclassOf<UGameplayEffect> SummonedEffect, TSubclassOf<USpawnAIAgentDefinition> SpawnAIAgentDefinition, FVector position, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, AActor* SummonCreatureVisualEffect) {
    return NULL;
}


