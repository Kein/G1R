#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenType.h"
#include "OnLoadingScreenTypeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenTypeChanged, ELoadingScreenType, ScreenType);

