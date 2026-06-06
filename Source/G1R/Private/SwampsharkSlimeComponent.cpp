#include "SwampsharkSlimeComponent.h"

USwampsharkSlimeComponent::USwampsharkSlimeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SlimeEffectCurve = NULL;
    this->m_SlimeFadeOutCurve = NULL;
    this->SlimeAgressive = NULL;
    this->SlimeAttack = NULL;
    this->SlimeDeath = NULL;
    this->SlimeHit = NULL;
    this->SlimeLower = NULL;
    this->SlimeRaised = NULL;
    this->SlimeStunned = NULL;
}


