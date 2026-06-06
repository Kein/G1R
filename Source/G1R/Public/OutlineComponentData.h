#pragma once
#include "CoreMinimal.h"
#include "OutlineRenderingData.h"
#include "OutlineComponentData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FOutlineComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPrimitiveComponent* RenderingComponent;
    
    UPROPERTY(BlueprintReadWrite)
    FOutlineRenderingData DefaultOutlineData;
    
    UPROPERTY(BlueprintReadWrite)
    FOutlineRenderingData DesiredOutlineData;
    
    G1R_API FOutlineComponentData();
};

