#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_Generic.generated.h"

USTRUCT(BlueprintType)
struct FHUDNotificationData_Generic : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FString m_String;
    
    G1R_API FHUDNotificationData_Generic();
};

