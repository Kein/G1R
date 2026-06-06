#pragma once
#include "CoreMinimal.h"
#include "AIWorldEventStartedDelegateDelegate.generated.h"

class UAIWorldEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIWorldEventStartedDelegate, UAIWorldEvent*, AIWorldEvent);

