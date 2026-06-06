#pragma once
#include "CoreMinimal.h"
#include "NotifyUIItemAddedDelegate.generated.h"

class UItemDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNotifyUIItemAdded, const UItemDefinition*, NewItem, int32, Count);

