#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "SpawningBlueprintUtils.generated.h"

class AActor;
class UObject;
class USpawnAIAgentDefinition;

UCLASS(BlueprintType)
class G1R_API USpawningBlueprintUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawningBlueprintUtils();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnspawnEntity(UObject* WorldContextObject, AActor* Entity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnAIAgentDeferred(UObject* WorldContextObject, const FTransform& Transform, TSubclassOf<USpawnAIAgentDefinition> CurrentSpawnAIAgentDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int64 SpawnAIAgent(UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> SpawningDefinition, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetEntityFromSpawningRequest(UObject* WorldContextObject, int64 SpawningRequestID);
    
};

