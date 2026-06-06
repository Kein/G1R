#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationInputHintRequest.h"
#include "HUDNotificationInputHintManager.generated.h"

USTRUCT(BlueprintType)
struct FHUDNotificationInputHintManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FHUDNotificationInputHintRequest> m_InputHintRequests;
    
public:
    G1R_API FHUDNotificationInputHintManager();
};

