#pragma once
#include "CoreMinimal.h"
#include "OnItemEquippedDelegate.generated.h"

class UItemDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemEquipped, const UItemDefinition*, Item);

