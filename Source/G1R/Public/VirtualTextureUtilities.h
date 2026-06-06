#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VirtualTextureUtilities.generated.h"

UCLASS(BlueprintType)
class G1R_API UVirtualTextureUtilities : public UObject {
    GENERATED_BODY()
public:
    UVirtualTextureUtilities();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BlockingLoadVirtualTexturesForPlayerViewport(const UObject* WorldContextObject);
    
};

