#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GothicWaterVolumeVectorFieldCell.generated.h"

USTRUCT(BlueprintType)
struct FGothicWaterVolumeVectorFieldCell {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector M_Center;
    
    UPROPERTY()
    float m_Speed;
    
    UPROPERTY()
    FVector m_Direction;
    
    G1R_API FGothicWaterVolumeVectorFieldCell();
};

