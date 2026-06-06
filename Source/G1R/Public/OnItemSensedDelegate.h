#pragma once
#include "CoreMinimal.h"
#include "OnItemSensedDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSensed, UInteractiveComponent*, Item);

