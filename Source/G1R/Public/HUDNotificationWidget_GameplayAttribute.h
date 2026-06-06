#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HUDNotificationWidgetBase.h"
#include "HUDNotificationWidget_GameplayAttribute.generated.h"

class UHUDNotification_GameplayAttributeWrapper;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class G1R_API UHUDNotificationWidget_GameplayAttribute : public UHUDNotificationWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UHUDNotification_GameplayAttributeWrapper* m_AttributeWrapper;
    
public:
    UHUDNotificationWidget_GameplayAttribute();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UTexture2D* FindIcon(TMap<FGameplayAttribute, UTexture2D*> Icons, const FGameplayAttribute& Attribute, bool& _Found) const;
    
};

