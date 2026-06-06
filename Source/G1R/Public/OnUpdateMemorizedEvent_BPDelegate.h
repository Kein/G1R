#pragma once
#include "CoreMinimal.h"
#include "MemorizedEvent.h"
#include "OnUpdateMemorizedEvent_BPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateMemorizedEvent_BP, const FMemorizedEvent&, MemorizedEvent);

