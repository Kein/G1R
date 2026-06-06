#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HUDNotificationSettings.generated.h"

class UHUDNotificationSettings;
class UHUDNotificationWidgetBase;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class G1R_API UHUDNotificationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TMap<FName, TSoftClassPtr<UHUDNotificationWidgetBase>> m_NotificationWidgetClasses;
    
public:
    UHUDNotificationSettings();

    UFUNCTION(BlueprintPure)
    TSoftClassPtr<UHUDNotificationWidgetBase> GetNotificationWidgetClass(FName _Identifier) const;
    
    UFUNCTION(BlueprintCallable)
    static UHUDNotificationSettings* Get();
    
};

