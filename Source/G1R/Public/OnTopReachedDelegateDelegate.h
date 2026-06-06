#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "TraversalInfo.h"
#include "OnTopReachedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTopReachedDelegate, FHitResult, HitResult, FTraversalInfo, TraversalInfo);

