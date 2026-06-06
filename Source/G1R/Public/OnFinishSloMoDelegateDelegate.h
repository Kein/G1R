#pragma once
#include "CoreMinimal.h"
#include "OnFinishSloMoDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishSloMoDelegate, AActor*, Target);

