#pragma once
#include "CoreMinimal.h"
#include "FXFMODEvent.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FFXFMODEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UFMODEvent> FMODEventPath;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, float> EventParameters;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAttachToInstigator;
    
    G1R_API FFXFMODEvent();
};

