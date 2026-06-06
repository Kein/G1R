#pragma once
#include "CoreMinimal.h"
#include "OnBookInitializedDelegate.generated.h"

class UBookCoverConfiguration;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBookInitialized, FText, _BookTitle, UBookCoverConfiguration*, _BookCover);

