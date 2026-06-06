#pragma once
#include "CoreMinimal.h"
#include "OnProjectileStopDelegate.generated.h"

class AItemVisualWorld;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileStop, AItemVisualWorld*, Item);

