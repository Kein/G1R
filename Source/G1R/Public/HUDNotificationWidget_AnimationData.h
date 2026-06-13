#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationWidget_AnimationData.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FHUDNotificationWidget_AnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UWidgetAnimation* m_Animation;
    
    G1R_API FHUDNotificationWidget_AnimationData();
};

