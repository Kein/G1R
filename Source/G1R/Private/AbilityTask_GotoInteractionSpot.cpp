#include "AbilityTask_GotoInteractionSpot.h"

UAbilityTask_GotoInteractionSpot::UAbilityTask_GotoInteractionSpot() {
    this->bFailIfClaimed = true;
}

UAbilityTask_GotoInteractionSpot* UAbilityTask_GotoInteractionSpot::TaskGotoInteractionSpot(UGameplayAbility* OwningAbility, FInteractionSpotHandle NewTargetSpot, bool NewBFailIfClaimed, float ReachDistance) {
    return NULL;
}

UAbilityTask_GotoInteractionSpot* UAbilityTask_GotoInteractionSpot::TaskFindAndGotoSpot(UGameplayAbility* OwningAbility, FVector SearchAt, float SearchRadius, FGameplayTag ActionToDo, bool NewBFailIfClaimed, float ReachDistance) {
    return NULL;
}

void UAbilityTask_GotoInteractionSpot::OnSpotOccupierChanged(const FInteractionSpot& Spot, AActor* New, AActor* Old, FGameplayTag Action) {
}

bool UAbilityTask_GotoInteractionSpot::CanGotoInteractionSpot(const AGothicCharacter* Character, FInteractionSpotHandle NewTargetSpot, float ReachDistance) {
    return false;
}

bool UAbilityTask_GotoInteractionSpot::CanFindAndGotoSpot(const AGothicCharacter* Character, FVector SearchAt, float SearchRadius, FGameplayTag ActionToDo, float ReachDistance) {
    return false;
}


