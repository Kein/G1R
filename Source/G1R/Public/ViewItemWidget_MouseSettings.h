#pragma once
#include "CoreMinimal.h"
#include "ViewItemWidget_MouseSettings.generated.h"

USTRUCT(BlueprintType)
struct FViewItemWidget_MouseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ButtonsWithLongClick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_ButtonPressTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_ButtonHoldTime;
    
    G1R_API FViewItemWidget_MouseSettings();
};

