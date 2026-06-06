#pragma once
#include "CoreMinimal.h"
#include "AlkimiaLightweightPrimitiveProxyDesc.h"
#include "AlkimiaLightweightStaticMeshProxyDesc.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT()
struct ALKIMIALIGHTWEIGHTACTORS_API FAlkimiaLightweightStaticMeshProxyDesc : public FAlkimiaLightweightPrimitiveProxyDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UPROPERTY()
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY()
    UMaterialInterface* OverlayMaterial;
    
    UPROPERTY()
    TArray<UMaterialInterface*> CachedUsedMaterials;
    
    FAlkimiaLightweightStaticMeshProxyDesc();
};

