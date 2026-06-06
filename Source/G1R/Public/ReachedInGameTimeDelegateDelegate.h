#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "ReachedInGameTimeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReachedInGameTimeDelegate, const FInGameTime&, TimeReached);

