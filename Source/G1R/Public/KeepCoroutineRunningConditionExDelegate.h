#pragma once
#include "CoreMinimal.h"
#include "KeepCoroutineRunningConditionExDelegate.generated.h"

class UAbilityTaskGeneric;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FKeepCoroutineRunningConditionEx, UAbilityTaskGeneric*, Task);

