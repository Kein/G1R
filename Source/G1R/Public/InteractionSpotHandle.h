#pragma once
#include "CoreMinimal.h"
#include "InteractionSpotHandle.generated.h"

USTRUCT(BlueprintType)
struct FInteractionSpotHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Spotname;
    
    G1R_API FInteractionSpotHandle();
};
FORCEINLINE uint32 GetTypeHash(const FInteractionSpotHandle) { return 0; }

