#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "CameraEase.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCameraEase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> m_Ease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Blend;
    
    FCameraEase();
};

