#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_AreaDiscovered.generated.h"

USTRUCT(BlueprintType)
struct FHUDNotificationData_AreaDiscovered : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FText m_AreaDiscovered;
    
    G1R_API FHUDNotificationData_AreaDiscovered();
};

