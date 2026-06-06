#pragma once
#include "CoreMinimal.h"
#include "InteractOpenContainerDelegateCMWDelegate.generated.h"

class UInteractiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractOpenContainerDelegateCMW, UInteractiveComponent*, ItemComponent);

