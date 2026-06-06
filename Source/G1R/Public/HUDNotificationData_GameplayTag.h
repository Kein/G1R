#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_GameplayTag.generated.h"

USTRUCT(BlueprintType)
struct FHUDNotificationData_GameplayTag : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FGameplayTag m_GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_WasAdded;
    
    G1R_API FHUDNotificationData_GameplayTag();
};

