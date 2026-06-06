#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_Item.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FHUDNotificationData_Item : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UItemDefinition* m_Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_Count;
    
    G1R_API FHUDNotificationData_Item();
};

