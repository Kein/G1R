#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAIAgentMindset.h"
#include "EWalkSpeed.h"
#include "OnEntitySpawnDelegateDynamicDelegate.h"
#include "Templates/SubclassOf.h"
#include "AIScriptLibrary.generated.h"

class AActor;
class UObject;
class USpawnAIAgentDefinition;
class USpawningRequest;

UCLASS(BlueprintType)
class UAIScriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIScriptLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawningRequest* SpawnAIAgentWithTransform(UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> spawnDef, const FTransform& Transform, FOnEntitySpawnDelegateDynamic onSpawned);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawningRequest* SpawnAIAgent(UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> spawnDef, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    static void SetWalkSpeed(const AActor* Entity, EWalkSpeed requestedWalkSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetMindset(AActor* Entity, EAIAgentMindset newMindset);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static EWalkSpeed GetWalkSpeed(const AActor* Entity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetLocalPlayer(const UObject* WorldContextObject);
    
};

