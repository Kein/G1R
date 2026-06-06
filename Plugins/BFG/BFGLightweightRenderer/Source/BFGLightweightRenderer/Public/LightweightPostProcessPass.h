#pragma once
#include "CoreMinimal.h"
#include "LightweightPostProcessPass.generated.h"

class UMaterial;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FLightweightPostProcessPass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterial* m_Material;
    
    UPROPERTY(EditAnywhere)
    UTextureRenderTarget2D* m_RenderTarget;
    
    BFGLIGHTWEIGHTRENDERER_API FLightweightPostProcessPass();
};

