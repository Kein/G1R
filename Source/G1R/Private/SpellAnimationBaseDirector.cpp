#include "SpellAnimationBaseDirector.h"

USpellAnimationBaseDirector::USpellAnimationBaseDirector() {
    this->m_MontageTask = NULL;
    this->m_CurrentAnimation = NULL;
    this->m_AnimData = NULL;
    this->m_OwningAbility = NULL;
    this->m_OriginalLocomotionData = NULL;
    this->m_CurrentCharacter = NULL;
}

void USpellAnimationBaseDirector::OnInterrupted() {
}

void USpellAnimationBaseDirector::OnCompleted() {
}

void USpellAnimationBaseDirector::OnCancelled() {
}


