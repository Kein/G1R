#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "LightweightSceneCapture2D.generated.h"

UCLASS(MinimalAPI)
class ALightweightSceneCapture2D : public ASceneCapture2D {
    GENERATED_BODY()
public:
    BFGLIGHTWEIGHTRENDERER_API ALightweightSceneCapture2D(const FObjectInitializer& ObjectInitializer);

};

