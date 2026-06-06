#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "OnAttributeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAttributeChanged, const FGameplayAttribute&, Attribute, float, NewValue, float, OldValue);

