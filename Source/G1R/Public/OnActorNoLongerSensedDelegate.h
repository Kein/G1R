#pragma once
#include "CoreMinimal.h"
#include "OnActorNoLongerSensedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorNoLongerSensed, AActor*, Actor, bool, IsItem);

