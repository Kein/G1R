#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemPickNotifDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FItemPickNotifDelegate, FText, ItemName, FGuid, InternalId, int32, Amount, const FString&, ItemDefinitionClass);

