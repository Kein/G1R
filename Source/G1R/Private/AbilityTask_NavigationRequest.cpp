#include "AbilityTask_NavigationRequest.h"

UAbilityTask_NavigationRequest::UAbilityTask_NavigationRequest() {
    this->BackToNavMeshTask = NULL;
}

UAbilityTask_NavigationRequest* UAbilityTask_NavigationRequest::TaskNavigationRequest(UGameplayAbility* OwningAbility, const FGothicAIMoveRequest& NewMoveRequest) {
    return NULL;
}

void UAbilityTask_NavigationRequest::OnNavLinkTagChanged(const FGameplayTag InTag, int32 NewCount) {
}

void UAbilityTask_NavigationRequest::OnLockMovementTagChanged(const FGameplayTag InTag, int32 NewCount) {
}

bool UAbilityTask_NavigationRequest::BP_IsAlreadyAtGoal(const AGothicCharacterState* CharacterState, const FVector& Location, float ReachDistance) {
    return false;
}


