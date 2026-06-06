#pragma once
#include "CoreMinimal.h"
#include "OnOutlineStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOutlineStateChanged, bool, IsActive);

