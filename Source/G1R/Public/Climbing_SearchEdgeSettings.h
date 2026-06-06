#pragma once
#include "CoreMinimal.h"
#include "Climbing_SearchEdgeSettings.generated.h"

USTRUCT(BlueprintType)
struct FClimbing_SearchEdgeSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_MaxAutoClimbHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MaxEdgeHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MinEdgeHeight;
    
    UPROPERTY(EditAnywhere)
    float m_ReachDistance;
    
    UPROPERTY(EditAnywhere)
    float m_ForwardTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float m_DownwardTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float m_MaxFenceWidth;
    
public:
    G1R_API FClimbing_SearchEdgeSettings();
};

