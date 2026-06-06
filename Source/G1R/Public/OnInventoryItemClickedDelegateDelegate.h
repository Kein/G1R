#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "OnInventoryItemClickedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemClickedDelegate, int32, ItemId, EInventoryTypes, InventoryType);

