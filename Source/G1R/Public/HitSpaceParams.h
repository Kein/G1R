#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitSpaceParams.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FHitSpaceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_FrontAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_BackAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_HitBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_HitBoneSpace;
    
    FHitSpaceParams();
};

