#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "PerceptionShortTermMemoryStatics.generated.h"

UCLASS(BlueprintType)
class UPerceptionShortTermMemoryStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerceptionShortTermMemoryStatics();

    UFUNCTION(BlueprintCallable)
    static bool IsEmpty(const FPerceptionShortTermMemory& This);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAny(const FPerceptionShortTermMemory& This);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNum(const FPerceptionShortTermMemory& This);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FRememberedPerception> GetArray(const FPerceptionShortTermMemory& This);
    
};

