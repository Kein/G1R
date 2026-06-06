#pragma once
#include "CoreMinimal.h"
#include "OnAnyInputEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyInputEvent, bool, InputPressed);

