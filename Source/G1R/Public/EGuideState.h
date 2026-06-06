#pragma once
#include "CoreMinimal.h"
#include "EGuideState.generated.h"

UENUM()
enum class EGuideState : int32 {
    CannotGuide,
    IsMoving,
    WaitForFollowActor,
    FollowActorGone,
};

