#pragma once
#include "CoreMinimal.h"
#include "ArrayElementHandle.h"
#include "PerceptionAgentHandle.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionAgentHandle : public FArrayElementHandle {
    GENERATED_BODY()
public:
    G1R_API FPerceptionAgentHandle();
};

