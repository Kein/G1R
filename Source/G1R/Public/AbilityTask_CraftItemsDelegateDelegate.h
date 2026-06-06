#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_CraftItemsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityTask_CraftItemsDelegate, bool, mustFinish);

