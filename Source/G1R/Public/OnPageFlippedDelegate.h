#pragma once
#include "CoreMinimal.h"
#include "OnPageFlippedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPageFlipped, bool, _LeftPage);

