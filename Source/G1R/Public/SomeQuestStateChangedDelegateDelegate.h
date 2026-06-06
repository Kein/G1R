#pragma once
#include "CoreMinimal.h"
#include "SomeQuestStateChangedDelegateDelegate.generated.h"

class UQuest;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSomeQuestStateChangedDelegate, UQuest*, Quest);

