#pragma once
#include "CoreMinimal.h"
#include "ProjectileCollideSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProjectileCollideSignature, AActor*, CollideActor);

