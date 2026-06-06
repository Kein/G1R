#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_SaveGame.generated.h"

USTRUCT(BlueprintType)
struct FHUDNotificationData_SaveGame : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FText m_Description;
    
    G1R_API FHUDNotificationData_SaveGame();
};

