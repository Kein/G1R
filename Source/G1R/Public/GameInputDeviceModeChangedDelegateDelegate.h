#pragma once
#include "CoreMinimal.h"
#include "EGameInputDevice.h"
#include "GameInputDeviceModeChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameInputDeviceModeChangedDelegate, EGameInputDevice, InputDeviceMode);

