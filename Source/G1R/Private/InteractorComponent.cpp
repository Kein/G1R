#include "InteractorComponent.h"
#include "Templates/SubclassOf.h"

UInteractorComponent::UInteractorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<TSubclassOf<UAbilityTask_InteractionSpot>> UInteractorComponent::FindDefaultInteractionsForCharacterClass(TSubclassOf<AGothicCharacter> CharacterClass) {
    return TArray<TSubclassOf<UAbilityTask_InteractionSpot>>();
}

TArray<TSubclassOf<UAbilityTask_InteractionSpot>> UInteractorComponent::FindAllTasksMatchingTag(const FGameplayTag& Tag) const {
    return TArray<TSubclassOf<UAbilityTask_InteractionSpot>>();
}


