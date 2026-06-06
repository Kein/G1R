#include "GameplayAbilityCoverHead.h"

UGameplayAbilityCoverHead::UGameplayAbilityCoverHead() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->CoverHeadAnimationTask = NULL;
    this->RequiredRainLevel = 1;
    this->QueryTickIntervall = 1.00f;
}


