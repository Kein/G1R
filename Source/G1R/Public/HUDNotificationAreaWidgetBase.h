#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AlkUserWidget.h"
#include "HUDNotificationRequest.h"
#include "HUDNotificationAreaWidgetBase.generated.h"

class UHUDNotificationWidgetBase;

UCLASS(Abstract, EditInlineNew)
class G1R_API UHUDNotificationAreaWidgetBase : public UAlkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_AcceptedImportances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_MaxActiveNotifications;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_ForbiddenAbilityTags;
    
    UPROPERTY(Transient)
    TArray<FHUDNotificationRequest> m_NotificationRequestQueue;
    
    UPROPERTY(Transient)
    TArray<FHUDNotificationRequest> m_ActiveNotifications;
    
    UPROPERTY(Instanced, Transient)
    TArray<UHUDNotificationWidgetBase*> m_NotificationWidgetPool;
    
public:
    UHUDNotificationAreaWidgetBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveNotificationWidget(const UHUDNotificationWidgetBase* _NotificationWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddNotificationWidget(const UHUDNotificationWidgetBase* _NotificationWidget);
    
};

