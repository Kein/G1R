#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_GameplayAttribute.generated.h"

USTRUCT(BlueprintType)
struct FHUDNotificationData_GameplayAttribute : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FGameplayAttribute m_Attribute;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float m_NewValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float m_OldValue;
    
    G1R_API FHUDNotificationData_GameplayAttribute();
};

