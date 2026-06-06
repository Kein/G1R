#pragma once
#include "CoreMinimal.h"
#include "OnOverlapExitDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverlapExitDelegate, const AActor*, Actor);

