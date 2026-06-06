#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutlineRenderingData.h"
#include "OutlineStencilUsageData.generated.h"

USTRUCT(BlueprintType)
struct FOutlineStencilUsageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ShaderVariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOutlineRenderingData RenderingData;
    
    G1R_API FOutlineStencilUsageData();
};

