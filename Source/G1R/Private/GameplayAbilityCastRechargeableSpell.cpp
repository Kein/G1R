#include "GameplayAbilityCastRechargeableSpell.h"

UGameplayAbilityCastRechargeableSpell::UGameplayAbilityCastRechargeableSpell() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_GA_Attack = NULL;
}

void UGameplayAbilityCastRechargeableSpell::ClientPlayNextCastLevel_Implementation() {
}


