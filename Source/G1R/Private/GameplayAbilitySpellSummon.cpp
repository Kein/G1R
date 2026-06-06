#include "GameplayAbilitySpellSummon.h"
#include "Templates/SubclassOf.h"

UGameplayAbilitySpellSummon::UGameplayAbilitySpellSummon() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_SummonedEffect = NULL;
}

void UGameplayAbilitySpellSummon::SummonAI(TSubclassOf<USpawnAIAgentDefinition> SpawnAIAgentDefinition, FVector position, TSubclassOf<UAIState_DailyRoutine> DailyRoutine) {
}

void UGameplayAbilitySpellSummon::OnSummonedServer_Scriptable_Implementation(AGothicNPCState* CharacterState) {
}


