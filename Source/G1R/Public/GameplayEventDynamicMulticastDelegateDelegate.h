#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEventDynamicMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayEventDynamicMulticastDelegate, const FGameplayEventData, GameplayEventData);

