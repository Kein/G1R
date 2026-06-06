#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponentCube.h"
#include "EnvironmentLightIntensityCaptureComponent.generated.h"

class UTextureRenderTarget2D;
class UTextureRenderTargetCube;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UEnvironmentLightIntensityCaptureComponent : public USceneCaptureComponentCube {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTargetCube* LightRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UTextureRenderTarget2D*> CapturedLightCube;
    
public:
    UPROPERTY(EditAnywhere)
    int32 MipLevelToCache;
    
    UEnvironmentLightIntensityCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

