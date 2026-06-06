#pragma once
#include "CoreMinimal.h"
#include "AIWorldEventEndedDelegateDelegate.generated.h"

class UAIWorldEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIWorldEventEndedDelegate, UAIWorldEvent*, AIWorldEvent);

