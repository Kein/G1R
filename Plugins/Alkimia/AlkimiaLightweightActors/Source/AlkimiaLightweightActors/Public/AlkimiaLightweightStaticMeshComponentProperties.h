#pragma once
#include "CoreMinimal.h"
#include "SceneTypes.h"
#include "AlkimiaLightweightStaticMeshProxyDesc.h"
#include "AlkimiaLightweightStaticMeshComponentProperties.generated.h"

USTRUCT(BlueprintType)
struct FAlkimiaLightweightStaticMeshComponentProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAlkimiaLightweightStaticMeshProxyDesc StaticMeshProxyDesc;
    
    UPROPERTY()
    FCustomPrimitiveData CustomPrimitiveData;
    
    UPROPERTY()
    uint8 bUseDefaultCollision: 1;
    
    UPROPERTY()
    uint8 bIsNavigationRelevant: 1;
    
    ALKIMIALIGHTWEIGHTACTORS_API FAlkimiaLightweightStaticMeshComponentProperties();
};

