#pragma once
#include "CoreMinimal.h"
#include "EUICraftingStates.h"
#include "CraftingMenuExitDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraftingMenuExit, EUICraftingStates, UICraftingState);

