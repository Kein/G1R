#pragma once
#include "CoreMinimal.h"
#include "OnSharpenStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSharpenStateChanged, bool, IsActive);

