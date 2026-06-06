#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialInterface.h"
#include "Components/SceneCaptureComponent2D.h"
#include "BFGTrackedLightweightNaniteProxy.h"
#include "LightweightPostProcessPass.h"
#include "BFGLightweightSceneCaptureComponent.generated.h"

class UMaterial;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class BFGLIGHTWEIGHTRENDERER_API UBFGLightweightSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMaterial* m_OverrideMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FLightweightPostProcessPass> m_PostprocessChain;
    
    UPROPERTY(EditAnywhere)
    double m_NaniteFallbackEvictionTime;
    
private:
    UPROPERTY(Config)
    TArray<TEnumAsByte<EMaterialUsage>> m_MaterialUsage;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, FBFGTrackedLightweightNaniteProxy> m_CachedNaniteProxies;
    
public:
    UBFGLightweightSceneCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

