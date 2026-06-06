#pragma once
#include "CoreMinimal.h"
#include "OnActorsInSensorsDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorsInSensors, const TArray<UInteractiveComponent*>&, SightOutlineArray, UInteractiveComponent*, ActionOutline);

