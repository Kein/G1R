#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBasicVerbMessage.h"
#include "GothicGlobalEventListenerDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGothicGlobalEventListenerDelegate, FGameplayTag, Channel, const FGothicBasicVerbMessage&, Payload);

