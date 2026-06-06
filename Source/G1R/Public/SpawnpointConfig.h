#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnpointConfig.generated.h"

USTRUCT()
struct FSpawnpointConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    FTransform m_Transform;
    
    G1R_API FSpawnpointConfig();
};

