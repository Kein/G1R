#pragma once
#include "CoreMinimal.h"
#include "StructBoneOverride.generated.h"

USTRUCT(BlueprintType)
struct FStructBoneOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TestRadius;
    
    G1R_API FStructBoneOverride();
};

