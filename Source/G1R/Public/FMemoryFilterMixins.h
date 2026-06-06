#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MemorizedEvent.h"
#include "MemoryFilter.h"
#include "FMemoryFilterMixins.generated.h"

UCLASS(BlueprintType)
class G1R_API UFMemoryFilterMixins : public UObject {
    GENERATED_BODY()
public:
    UFMemoryFilterMixins();

    UFUNCTION(BlueprintCallable)
    static int32 IsEmpty(const FMemoryFilter& This);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCount(const FMemoryFilter& This);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMemorizedEvent> GetArrayOldestToNewest(const FMemoryFilter& This);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMemorizedEvent> GetArrayNewestToOldest(const FMemoryFilter& This);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMemorizedEvent> GetArray(const FMemoryFilter& This);
    
};

