#pragma once
#include "CoreMinimal.h"
#include "ArrayElementHandle.h"
#include "PerceptionHandlerHandle.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionHandlerHandle : public FArrayElementHandle {
    GENERATED_BODY()
public:
    G1R_API FPerceptionHandlerHandle();
};

