#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "HUDControllerBase.h"
#include "HUDNotificationHandle.h"
#include "HUDNotificationInputHintManager.h"
#include "Templates/SubclassOf.h"
#include "HUDNotificationController.generated.h"

class UHUDNotificationController;
class UHUDNotificationMainWidgetBase;
class UHUDNotificationWidgetBase;
class UObject;

UCLASS(BlueprintType)
class UHUDNotificationController : public UHUDControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FHUDNotificationInputHintManager m_InputHintManager;
    
    UPROPERTY(Instanced, Transient)
    UHUDNotificationMainWidgetBase* m_NotificationMainWidget;
    
public:
    UHUDNotificationController();

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNotification(FHUDNotificationHandle _Handle);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static UHUDNotificationController* Get(const UObject* _WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FHUDNotificationHandle AddNotificationSoft(const TSoftClassPtr<UHUDNotificationWidgetBase> _SoftWidgetClass, FInstancedStruct _Data, double _DesiredTimeOverride);
    
    UFUNCTION(BlueprintCallable)
    FHUDNotificationHandle AddNotification(const TSubclassOf<UHUDNotificationWidgetBase> _WidgetClass, FInstancedStruct _Data, double _DesiredTimeOverride);
    
};

