#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GothicWaterVolumeFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class G1R_API UGothicWaterVolumeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicWaterVolumeFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetWaterVelocityAtLocation(const UObject* WorldContextObject, const FVector Location);
    
};

