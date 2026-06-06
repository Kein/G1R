#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateSetDelegate.generated.h"

class APlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerStateSet, APlayerState*, oldPlayerState, APlayerState*, newPlayerState);

