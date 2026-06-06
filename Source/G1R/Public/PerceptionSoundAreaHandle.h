#pragma once
#include "CoreMinimal.h"
#include "ArrayElementHandle.h"
#include "PerceptionSoundAreaHandle.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionSoundAreaHandle : public FArrayElementHandle {
    GENERATED_BODY()
public:
    G1R_API FPerceptionSoundAreaHandle();
};

