#pragma once
#include "CoreMinimal.h"
#include "GameControllerDirectionChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameControllerDirectionChangedDelegate, float, Degree);

