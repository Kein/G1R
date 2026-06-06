#pragma once
#include "CoreMinimal.h"
#include "OnWorldFadeStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorldFadeStateChanged, bool, IsActive);

