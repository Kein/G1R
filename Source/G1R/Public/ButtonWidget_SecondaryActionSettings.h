#pragma once
#include "CoreMinimal.h"
#include "ButtonWidget_SecondaryActionSettings.generated.h"

USTRUCT(BlueprintType)
struct FButtonWidget_SecondaryActionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_PressTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_HoldTime;
    
    G1R_API FButtonWidget_SecondaryActionSettings();
};

