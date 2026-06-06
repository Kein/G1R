#pragma once
#include "CoreMinimal.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "PerceptionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPerceptionDelegate, const FRememberedPerception&, Perception, const FPerceptionShortTermMemory&, Memory);

