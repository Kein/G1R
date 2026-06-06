#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightPreset.generated.h"

USTRUCT(BlueprintType)
struct FLightPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Intensity;
    
    UPROPERTY(EditAnywhere)
    TMap<float, FColor> m_DayHourColor;
    
    UPROPERTY(EditAnywhere)
    TMap<float, FColor> m_NightHourColor;
    
    G1R_API FLightPreset();
};

