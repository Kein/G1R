#include "GameplayAbilityGesture.h"

UGameplayAbilityGesture::UGameplayAbilityGesture() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AbilityTriggers.AddDefaulted(3);
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->ActiveIdleMontage = NULL;
    this->ActiveGestureMontage = NULL;
    this->IdleBlendInSeconds = 2.00f;
    this->IdleBlendOutSeconds = 1.00f;
    this->GestureBlendInSeconds = 0.50f;
    this->GestureBlendOutSeconds = 1.00f;
    this->bMatchTargetDurationViaPlayRate = true;
    this->MatchTargetDurationMaxSpeed = 2.00f;
    this->MatchTargetDurationMinSpeed = 0.50f;
}


