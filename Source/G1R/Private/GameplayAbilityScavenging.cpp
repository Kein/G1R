#include "GameplayAbilityScavenging.h"

UGameplayAbilityScavenging::UGameplayAbilityScavenging() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_interactiveWallActor = NULL;
    this->m_CorpseToEat = NULL;
    this->m_AlignCharacterToCorpseTask = NULL;
}

void UGameplayAbilityScavenging::OnAlignCharacterToCorpseCompleted(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}


