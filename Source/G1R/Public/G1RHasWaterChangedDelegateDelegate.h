#pragma once
#include "CoreMinimal.h"
#include "G1RHasWaterChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FG1RHasWaterChangedDelegate, bool, hasWaterNew);

