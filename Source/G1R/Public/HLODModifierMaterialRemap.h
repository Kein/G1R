#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HLODModifierMaterialRemap.generated.h"

class UMaterialInterface;

USTRUCT()
struct FHLODModifierMaterialRemap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> From;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> To;
    
    G1R_API FHLODModifierMaterialRemap();
};

