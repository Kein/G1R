#pragma once
#include "CoreMinimal.h"
#include "WaitForAllPlayersToConfirmSleepDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitForAllPlayersToConfirmSleepDelegate, float, MaxSelectedHoursToSleep);

