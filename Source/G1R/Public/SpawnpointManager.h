#pragma once
#include "CoreMinimal.h"
#include "AISpawnpointConfig.h"
#include "AISpawnpointConfig_Ambient.h"
#include "GothicSingletonManager.h"
#include "ItemSpawnpointConfig.h"
#include "SpawnpointManager.generated.h"

class ASpawnpointManager;
class UObject;

UCLASS()
class ASpawnpointManager : public AGothicSingletonManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAISpawnpointConfig> AISpawnpointConfigs;
    
    UPROPERTY()
    TArray<FAISpawnpointConfig_Ambient> AIAmbientSpawnpointConfigs;
    
    UPROPERTY()
    TArray<FItemSpawnpointConfig> ItemSpawnpointConfigs;
    
public:
    ASpawnpointManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASpawnpointManager* GetInstance(UObject* WorldContextObject);
    
};

