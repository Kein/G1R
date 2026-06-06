#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnLocation.generated.h"

USTRUCT(BlueprintType)
struct FSpawnLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_Location;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_Normal;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_StepIndex;
    
    G1R_API FSpawnLocation();
};

