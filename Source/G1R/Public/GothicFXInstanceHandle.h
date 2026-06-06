#pragma once
#include "CoreMinimal.h"
#include "ArrayElementHandle.h"
#include "GothicFXInstanceHandle.generated.h"

USTRUCT(BlueprintType)
struct FGothicFXInstanceHandle : public FArrayElementHandle {
    GENERATED_BODY()
public:
    G1R_API FGothicFXInstanceHandle();
};

