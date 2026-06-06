#pragma once
#include "CoreMinimal.h"
#include "OutlineComponentData.h"
#include "OutlineVFX.h"
#include "OutlineInteractor.generated.h"

USTRUCT(BlueprintType)
struct FOutlineInteractor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FOutlineComponentData> ComponentsData;
    
    UPROPERTY(BlueprintReadWrite)
    FOutlineVFX OutlineVFX;
    
    UPROPERTY(BlueprintReadWrite)
    bool KeepTrackFromSensor;
    
    G1R_API FOutlineInteractor();
};

