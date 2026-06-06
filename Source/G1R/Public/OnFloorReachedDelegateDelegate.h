#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "OnFloorReachedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloorReachedDelegate, FHitResult, HitResult);

