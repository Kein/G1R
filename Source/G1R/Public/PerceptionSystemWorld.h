#pragma once
#include "CoreMinimal.h"
#include "PerceptionSystemWorld.generated.h"

class UPerceptionAgentSettings;

USTRUCT(BlueprintType)
struct FPerceptionSystemWorld {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UPerceptionAgentSettings*> AgentSettings;
    
    G1R_API FPerceptionSystemWorld();
};

