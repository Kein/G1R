#include "GothicFlyAIController.h"
#include "GothicFlyPathfollowingComponent.h"

AGothicFlyAIController::AGothicFlyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGothicFlyPathfollowingComponent>(TEXT("PathFollowingComponent"))) {
}


