#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "HUDNotification_GameplayAttributeSettings.h"
#include "HUDNotification_GameplayTagSettings.h"
#include "HUDNotificationMainWidgetBase.generated.h"

class UHUDNotificationAreaWidgetBase;

UCLASS(Abstract, EditInlineNew)
class G1R_API UHUDNotificationMainWidgetBase : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FHUDNotification_GameplayTagSettings> m_GameplayTagSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FHUDNotification_GameplayAttributeSettings> m_GameplayAttributeSettings;
    
    UPROPERTY(Instanced, Transient)
    TArray<UHUDNotificationAreaWidgetBase*> m_AreaWidgets;
    
public:
    UHUDNotificationMainWidgetBase();

};

