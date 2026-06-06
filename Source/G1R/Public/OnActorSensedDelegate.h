#pragma once
#include "CoreMinimal.h"
#include "OnActorSensedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorSensed, AActor*, Actor, bool, IsItem);

