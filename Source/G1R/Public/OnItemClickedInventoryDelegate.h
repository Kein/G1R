#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "OnItemClickedInventoryDelegate.generated.h"

class UInventoryMain;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnItemClickedInventory, int32, ItemId, EInventoryTypes, InventoryType, int32, ItemAmount, UInventoryMain*, InventoryMain);

