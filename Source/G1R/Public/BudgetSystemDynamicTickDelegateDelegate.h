#pragma once
#include "CoreMinimal.h"
#include "BudgetSystemDynamicTickDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FBudgetSystemDynamicTickDelegate, float, DeltaTime);

