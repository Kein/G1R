#pragma once
#include "CoreMinimal.h"
#include "ClockTime.h"
#include "ReachedClockTimeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedClockTimeDelegate, const FClockTime&, TimeReached);

