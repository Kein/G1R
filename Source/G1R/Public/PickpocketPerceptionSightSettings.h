#pragma once
#include "CoreMinimal.h"
#include "PickpocketPerceptionSightSettings.generated.h"

USTRUCT(BlueprintType)
struct FPickpocketPerceptionSightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Modifier;
    
    UPROPERTY(EditAnywhere)
    float m_MinTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    float m_AwarenessThreshold;
    
    G1R_API FPickpocketPerceptionSightSettings();
};

