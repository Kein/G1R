#pragma once
#include "CoreMinimal.h"
#include "InteractDurationTimeLimitReachedDelegate.generated.h"

class UAbilityTask_InteractWith;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractDurationTimeLimitReached, UAbilityTask_InteractWith*, Task);

