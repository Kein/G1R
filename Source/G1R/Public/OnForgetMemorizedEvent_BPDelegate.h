#pragma once
#include "CoreMinimal.h"
#include "MemorizedEvent.h"
#include "OnForgetMemorizedEvent_BPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForgetMemorizedEvent_BP, const FMemorizedEvent&, MemorizedEvent);

