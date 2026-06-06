#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InteractionSpotClaimToken.h"
#include "InteractionSpotTokenLibrary.generated.h"

UCLASS(BlueprintType)
class UInteractionSpotTokenLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractionSpotTokenLibrary();

    UFUNCTION(BlueprintCallable)
    static void Unclaim(FInteractionSpotClaimToken& Handle);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FInteractionSpotClaimToken& Handle);
    
};

