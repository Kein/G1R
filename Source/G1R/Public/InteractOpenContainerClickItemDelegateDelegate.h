#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "InteractOpenContainerClickItemDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractOpenContainerClickItemDelegate, int32, ItemPos, EInventoryTypes, InventorySlot);

