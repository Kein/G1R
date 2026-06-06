#pragma once
#include "CoreMinimal.h"
#include "OnOverlapComponentExitDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapComponentExitDelegate, const UPrimitiveComponent*, PrimitiveComponent);

