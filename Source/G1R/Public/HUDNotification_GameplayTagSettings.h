#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ENotificationGameplayTagType.h"
#include "HUDNotification_GameplayTagSettings.generated.h"

class UHUDNotificationWidgetBase;

USTRUCT(BlueprintType)
struct FHUDNotification_GameplayTagSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_EventType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENotificationGameplayTagType m_TagType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UHUDNotificationWidgetBase> m_NotificationWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_DesiredTimeOverride;
    
    G1R_API FHUDNotification_GameplayTagSettings();
};

