#pragma once
#include "CoreMinimal.h"
#include "AISpawnpointConfig.h"
#include "AISpawnpointConfig_Ambient.generated.h"

USTRUCT(BlueprintType)
struct FAISpawnpointConfig_Ambient : public FAISpawnpointConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_MinSpawnCount;
    
    UPROPERTY(EditAnywhere)
    uint8 m_MaxSpawnCount;
    
    UPROPERTY(EditAnywhere)
    float m_SpawningRadius;
    
    G1R_API FAISpawnpointConfig_Ambient();
};

