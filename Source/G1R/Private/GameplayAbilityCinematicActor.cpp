#include "GameplayAbilityCinematicActor.h"

UGameplayAbilityCinematicActor::UGameplayAbilityCinematicActor() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->SayVoiceline = NULL;
    this->HUDCinematicController = NULL;
}

void UGameplayAbilityCinematicActor::FinishedPreloadingVoiceLine() {
}


