#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeSet.h"
#include "HUDNotification_GameplayAttributeWrapper.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UHUDNotification_GameplayAttributeWrapper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FGameplayAttribute m_Attribute;
    
public:
    UHUDNotification_GameplayAttributeWrapper();

    UFUNCTION(BlueprintCallable)
    void SetAttribute(const FGameplayAttribute& _Attribute);
    
    UFUNCTION(BlueprintCallable)
    void ResetAttribute();
    
    UFUNCTION(BlueprintPure)
    FGameplayAttribute GetAttribute() const;
    
};

