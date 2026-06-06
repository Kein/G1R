#pragma once
#include "CoreMinimal.h"
#include "ItemVirtualData.h"
#include "OnPreItemRemovedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPreItemRemoved, const FItemVirtualData&, RemovedItem, int32, Count);

