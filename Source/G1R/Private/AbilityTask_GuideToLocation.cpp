#include "AbilityTask_GuideToLocation.h"

UAbilityTask_GuideToLocation::UAbilityTask_GuideToLocation() {
    this->FollowCharacterState = NULL;
    this->GuideState = EGuideState::WaitForFollowActor;
    this->TurnToTask = NULL;
    this->WalkSpeedChangeNoticeDelay = 2.50f;
}

UAbilityTask_GuideToLocation* UAbilityTask_GuideToLocation::TaskGuideToLocation(UGameplayAbility* OwningAbility, const FVector& Location, AGothicCharacterState* CharacterStateToGuide, float AcceptanceDistance, float InCloseDistance, float InWaitingDistance, float InAbandonDistance) {
    return NULL;
}

bool UAbilityTask_GuideToLocation::IsGuiding(AActor* Actor) const {
    return false;
}


