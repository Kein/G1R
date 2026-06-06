#include "AIAgentController.h"
#include "GothicPathFollowingComponent.h"

AAIAgentController::AAIAgentController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGothicPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
}


