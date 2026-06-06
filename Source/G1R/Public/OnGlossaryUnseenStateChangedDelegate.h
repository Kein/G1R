#pragma once
#include "CoreMinimal.h"
#include "OnGlossaryUnseenStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlossaryUnseenStateChanged, bool, UnseenState);

