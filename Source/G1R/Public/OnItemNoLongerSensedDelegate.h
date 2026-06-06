#pragma once
#include "CoreMinimal.h"
#include "OnItemNoLongerSensedDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemNoLongerSensed, UInteractiveComponent*, Item);

