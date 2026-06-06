#include "InteractionAnimTransition.h"

FInteractionAnimTransition::FInteractionAnimTransition() {
    this->bSeamless = false;
    this->bReturnToMainLoopAfterEnd = false;
    this->bAutoTransitionForPlayer = false;
    this->bIgnoreCooldowns = false;
    this->CooldownSeconds = 0.00f;
    this->CooldownAfterAnyTransition = 0.00f;
    this->BlockOtherTransitionsForSeconds = 0.00f;
    this->Probability = 0.00f;
    this->Weight = 0.00f;
    this->TransitionKind = EInteractionInputKind::None;
    this->OverrideBlendInTime = 0.00f;
    this->BlendOutDurationMultiplier = 0.00f;
}

