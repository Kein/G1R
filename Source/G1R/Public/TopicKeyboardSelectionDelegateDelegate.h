#pragma once
#include "CoreMinimal.h"
#include "TopicKeyboardSelectionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTopicKeyboardSelectionDelegate, int32, Key);

