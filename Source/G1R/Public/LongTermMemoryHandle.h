#pragma once
#include "CoreMinimal.h"
#include "ArrayElementHandle.h"
#include "LongTermMemoryHandle.generated.h"

USTRUCT()
struct FLongTermMemoryHandle : public FArrayElementHandle {
    GENERATED_BODY()
public:
    G1R_API FLongTermMemoryHandle();
};

