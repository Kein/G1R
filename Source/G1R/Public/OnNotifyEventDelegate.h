#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "OnNotifyEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyEvent, const FAnimNotifyEvent&, Notify);

