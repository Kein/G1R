#pragma once
#include "CoreMinimal.h"
#include "MemorizedEvent.h"
#include "OnMemorizedEvent_BPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMemorizedEvent_BP, const FMemorizedEvent&, MemorizedEvent);

