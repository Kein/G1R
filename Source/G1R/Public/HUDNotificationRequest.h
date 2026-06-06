#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "Templates/SubclassOf.h"
#include "HUDNotificationRequest.generated.h"

class UHUDNotificationWidgetBase;

USTRUCT(BlueprintType)
struct FHUDNotificationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<UHUDNotificationWidgetBase> m_WidgetClass;
    
    UPROPERTY(Transient)
    FInstancedStruct m_Data;
    
    UPROPERTY(Instanced, Transient)
    UHUDNotificationWidgetBase* m_WidgetInstance;
    
    G1R_API FHUDNotificationRequest();
};

