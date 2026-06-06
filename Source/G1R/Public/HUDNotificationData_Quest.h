#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_Quest.generated.h"

class UQuest;

USTRUCT(BlueprintType)
struct FHUDNotificationData_Quest : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UQuest* m_Quest;
    
    G1R_API FHUDNotificationData_Quest();
};

