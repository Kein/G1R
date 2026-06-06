#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskAttackPushComboDelegateDelegate.generated.h"

class UAbilityTask_Attack;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityTaskAttackPushComboDelegate, UAbilityTask_Attack*, Attack);

