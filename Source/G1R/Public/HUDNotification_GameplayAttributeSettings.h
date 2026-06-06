#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HUDNotification_GameplayAttributeSettings.generated.h"

class UHUDNotificationWidgetBase;

USTRUCT(BlueprintType)
struct FHUDNotification_GameplayAttributeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayAttribute m_Attribute;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UHUDNotificationWidgetBase> m_NotificationWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_DesiredTimeOverride;
    
    G1R_API FHUDNotification_GameplayAttributeSettings();
};

