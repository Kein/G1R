#pragma once
#include "CoreMinimal.h"
#include "SpawnpointConfig.h"
#include "Templates/SubclassOf.h"
#include "AISpawnpointConfig.generated.h"

class USpawnAIAgentDefinition;

USTRUCT(BlueprintType)
struct FAISpawnpointConfig : public FSpawnpointConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USpawnAIAgentDefinition> m_SpawningDefinition;
    
    G1R_API FAISpawnpointConfig();
};

