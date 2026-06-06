#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "OutlineRenderingData.generated.h"

USTRUCT(BlueprintType)
struct FOutlineRenderingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RenderCustomDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CustomDepthStencil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERendererStencilMask CustomStencilWriteMask;
    
    G1R_API FOutlineRenderingData();
};

