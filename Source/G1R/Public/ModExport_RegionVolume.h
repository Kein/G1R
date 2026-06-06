#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/BrushBuilder.h"
#include "ModExport_RegionVolume.generated.h"

class URegionTrait;

USTRUCT()
struct FModExport_RegionVolume {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FBuilderPoly> Polygons;
    
    UPROPERTY(Instanced)
    TArray<URegionTrait*> Traits;
    
    G1R_API FModExport_RegionVolume();
};

