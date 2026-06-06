#pragma once
#include "CoreMinimal.h"
#include "ESwimType.h"
#include "G1RSwimTypeChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FG1RSwimTypeChangedDelegate, ESwimType, NewSwimType);

