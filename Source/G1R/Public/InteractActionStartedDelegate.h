#pragma once
#include "CoreMinimal.h"
#include "InteractActionStartedDelegate.generated.h"

class UAbilityTask_InteractWith;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractActionStarted, UAbilityTask_InteractWith*, Task);

