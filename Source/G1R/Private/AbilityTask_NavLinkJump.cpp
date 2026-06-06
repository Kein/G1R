#include "AbilityTask_NavLinkJump.h"

UAbilityTask_NavLinkJump::UAbilityTask_NavLinkJump() {
    this->MovementComponent = NULL;
    this->OwningAbility = NULL;
}

UAbilityTask_NavLinkJump* UAbilityTask_NavLinkJump::TaskNavLinkJump(UGameplayAbility* NewOwningAbility, const FVector& NavLinkStart, const FVector& NavLinkEnd) {
    return NULL;
}


