#pragma once
#include "CoreMinimal.h"
#include "SpawnpointConfig.h"
#include "Templates/SubclassOf.h"
#include "ItemSpawnpointConfig.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FItemSpawnpointConfig : public FSpawnpointConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemDefinition> m_ItemDefinition;
    
    G1R_API FItemSpawnpointConfig();
};

