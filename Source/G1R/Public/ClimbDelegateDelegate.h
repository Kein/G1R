#pragma once
#include "CoreMinimal.h"
#include "TraversalInfo.h"
#include "ClimbDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClimbDelegate, const FTraversalInfo&, climbInfo);

