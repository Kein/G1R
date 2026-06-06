#pragma once
#include "CoreMinimal.h"
#include "WaitAbilityEndDelegateDelegate.generated.h"

class UGameplayAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitAbilityEndDelegate, UGameplayAbility*, EndAbility);

