#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationInputHintRequest.generated.h"

class UHUDNotificationWidgetBase;

USTRUCT()
struct FHUDNotificationInputHintRequest {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UHUDNotificationWidgetBase* m_Widget;
    
    G1R_API FHUDNotificationInputHintRequest();
};

