#pragma once
#include "CoreMinimal.h"
#include "EBookCaptureAnimState.generated.h"

UENUM(BlueprintType)
enum class EBookCaptureAnimState : uint8 {
    Closed,
    Opening,
    Opened,
    SwitchingPage,
    SwitchedPage,
    Closing,
};

