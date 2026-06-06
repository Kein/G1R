#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SpatialEnvironmentLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class G1R_API USpatialEnvironmentLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpatialEnvironmentLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetAreaAtLocation(const UObject* WorldContextObject, const FVector& Location);
    
};

