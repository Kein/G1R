#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WorldPartition/HLOD/HLODModifier.h"
#include "GothicWorldPartitionHLODModifier.generated.h"

class UDataTable;

UCLASS(Abstract)
class G1R_API UGothicWorldPartitionHLODModifier : public UWorldPartitionHLODModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TOptional<bool> OverrideCastDynamicShadows;
    
    UPROPERTY(EditAnywhere)
    TOptional<bool> OverrideCastContactShadows;
    
    UPROPERTY(EditAnywhere)
    TOptional<bool> OverrideEvaluateWorldPositionOffset;
    
    UPROPERTY(EditAnywhere)
    TOptional<TEnumAsByte<EDetailMode>> OverrideDetailMode;
    
    UPROPERTY(EditAnywhere)
    TOptional<bool> OverrideAffectDistanceFieldLighting;
    
    UPROPERTY(EditAnywhere)
    UDataTable* MaterialReplacements;
    
    UGothicWorldPartitionHLODModifier();

};

