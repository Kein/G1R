#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AISpawnpointConfig.h"
#include "AISpawnpointConfig_Ambient.h"
#include "GothicBaseConfig.h"
#include "ItemSpawnpointConfig.h"
#include "Templates/SubclassOf.h"
#include "SpawnpointManagerConfig.generated.h"

class UItemDefinition;
class USpawnAIAgentDefinition;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API USpawnpointManagerConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAISpawnpointConfig> m_AISpawnpointConfigs;
    
    UPROPERTY()
    TArray<FAISpawnpointConfig_Ambient> m_AIAmbientSpawnpointConfigs;
    
    UPROPERTY()
    TArray<FItemSpawnpointConfig> m_ItemSpawnpointConfigs;
    
public:
    USpawnpointManagerConfig();

    UFUNCTION(BlueprintCallable)
    void AddItemSpawnpoint(FName Name, TSubclassOf<UItemDefinition> itemDef, FRotator Rotator, FVector position);
    
    UFUNCTION(BlueprintCallable)
    void AddAISpawnpoint(FName Name, TSubclassOf<USpawnAIAgentDefinition> spawnDef, FRotator Rotator, FVector position);
    
    UFUNCTION(BlueprintCallable)
    void AddAIAmbientSpawnpoint(FName Name, TSubclassOf<USpawnAIAgentDefinition> spawnDef, FRotator Rotator, FVector position, float minSpawnCount, float maxSpawnCount, float Radius);
    
};

