#pragma once
#include "CoreMinimal.h"
#include "ArrayElementHandle.h"
#include "DailyRoutineSimulatedCharacterHandle.generated.h"

USTRUCT(BlueprintType)
struct FDailyRoutineSimulatedCharacterHandle : public FArrayElementHandle {
    GENERATED_BODY()
public:
    G1R_API FDailyRoutineSimulatedCharacterHandle();
};
FORCEINLINE uint32 GetTypeHash(const FDailyRoutineSimulatedCharacterHandle) { return 0; }

