#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FXDecal.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFXDecal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UMaterialInterface> DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite)
    FVector DecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float LifeSpan;
    
    G1R_API FFXDecal();
};

