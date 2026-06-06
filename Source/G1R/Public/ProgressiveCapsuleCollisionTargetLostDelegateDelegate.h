#pragma once
#include "CoreMinimal.h"
#include "ProgressiveCapsuleCollisionTargetLostDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressiveCapsuleCollisionTargetLostDelegate, AActor*, Actor);

