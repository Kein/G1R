#include "AbilityTask_Attack.h"

UAbilityTask_Attack::UAbilityTask_Attack() {
    this->bBlockStateMachineWhileBlocked = true;
    this->bLastMoveHasHit = false;
    this->NumHits = 0;
    this->bEndComboOnMiss = false;
}

UAbilityTask_Attack* UAbilityTask_Attack::TaskAttackTop(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_Attack* UAbilityTask_Attack::TaskAttackRight(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_Attack* UAbilityTask_Attack::TaskAttackLeft(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_Attack* UAbilityTask_Attack::TaskAttackCombo(UGameplayAbility* OwningAbility, const TArray<FGameplayTag>& NewComboChain, bool NewBEndComboOnMiss) {
    return NULL;
}

UAbilityTask_Attack* UAbilityTask_Attack::TaskAttackBottom(UGameplayAbility* OwningAbility) {
    return NULL;
}

UAbilityTask_Attack* UAbilityTask_Attack::TaskAttack(UGameplayAbility* OwningAbility, FGameplayTag Direction) {
    return NULL;
}

bool UAbilityTask_Attack::IsComboMovePossible(const FGameplayTag& Move) const {
    return false;
}

FGameplayTagContainer UAbilityTask_Attack::GetPossibleComboMoves() {
    return FGameplayTagContainer{};
}

FGameplayTag UAbilityTask_Attack::DirectionTop() {
    return FGameplayTag{};
}

FGameplayTag UAbilityTask_Attack::DirectionRight() {
    return FGameplayTag{};
}

FGameplayTag UAbilityTask_Attack::DirectionLeft() {
    return FGameplayTag{};
}

FGameplayTag UAbilityTask_Attack::DirectionBottom() {
    return FGameplayTag{};
}


