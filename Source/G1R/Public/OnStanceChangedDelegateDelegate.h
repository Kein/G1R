#pragma once
#include "CoreMinimal.h"
#include "EStance.h"
#include "OnStanceChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStanceChangedDelegate, EStance, stance);

