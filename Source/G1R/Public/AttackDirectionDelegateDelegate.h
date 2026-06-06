#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttackDirectionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackDirectionDelegate, FGameplayTag, Direction);

