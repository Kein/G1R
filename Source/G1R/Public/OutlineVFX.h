#pragma once
#include "CoreMinimal.h"
#include "EStencilsUsage.h"
#include "OutlineVFX.generated.h"

USTRUCT(BlueprintType)
struct FOutlineVFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite)
    int32 StencilValue;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAppearing;
    
    UPROPERTY(BlueprintReadWrite)
    bool NeedsUpdate;
    
    UPROPERTY(BlueprintReadWrite)
    EStencilsUsage StencilUsage;
    
    G1R_API FOutlineVFX();
};

