#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "OnOverlapEnterDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapEnterDelegate, UPrimitiveComponent*, HitComp, const FHitResult, Hit);

