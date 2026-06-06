#include "GothicDiveAIController.h"
#include "GothicDivePathfollowingComponent.h"

AGothicDiveAIController::AGothicDiveAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGothicDivePathfollowingComponent>(TEXT("PathFollowingComponent"))) {
}


