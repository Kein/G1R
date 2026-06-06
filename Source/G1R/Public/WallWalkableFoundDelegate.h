#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "WallWalkableFoundDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWallWalkableFound, FHitResult, HitResult, bool, Jump);

