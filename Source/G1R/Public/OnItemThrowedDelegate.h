#pragma once
#include "CoreMinimal.h"
#include "OnItemThrowedDelegate.generated.h"

class AItemVisualWorld;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemThrowed, AItemVisualWorld*, Item);

