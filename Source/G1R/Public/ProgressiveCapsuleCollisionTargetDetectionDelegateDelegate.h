#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "ProgressiveCapsuleCollisionTargetDetectionDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProgressiveCapsuleCollisionTargetDetectionDelegate, AActor*, Actor, const FHitResult, SweepResult);

