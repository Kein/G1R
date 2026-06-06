#pragma once
#include "CoreMinimal.h"
#include "JumpDown_SearchEdgeSettings.generated.h"

USTRUCT(BlueprintType)
struct FJumpDown_SearchEdgeSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_StartForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float m_MaxJumpDownHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MinJumpDownHeight;
    
public:
    G1R_API FJumpDown_SearchEdgeSettings();
};

