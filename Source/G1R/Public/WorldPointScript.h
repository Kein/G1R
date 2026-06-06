#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAmbientType.h"
#include "ItemSpawnPosition.h"
#include "ItemVirtualData.h"
#include "PointItems.h"
#include "Templates/SubclassOf.h"
#include "WorldCreatureDefinition.h"
#include "WorldItemDefinition.h"
#include "WorldPointScript.generated.h"

class AActor;
class UAIState_DailyRoutine;
class UAmbientLife;
class UAmbientLifeConfig;
class UItemDefinition;
class ULinkedActorDefinition;
class USpawnAIAgentDefinition;

UCLASS(Blueprintable)
class G1R_API UWorldPointScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FName> m_CreaturesToSpawn;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FName> m_CreaturesSpawned;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FName> m_ItemsToSpawn;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FName> m_ItemsSpawned;
    
    UPROPERTY()
    TSubclassOf<ULinkedActorDefinition> m_LinkedActorDefinition;
    
    UPROPERTY()
    AActor* m_SpawnedLinkedActor;
    
private:
    UPROPERTY()
    TMap<FName, FWorldCreatureDefinition> m_PointCreaturesArray;
    
    UPROPERTY()
    TMap<FName, FWorldItemDefinition> m_PointItemsArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<AActor*> m_ItemsToDeInstantiate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<int32, FPointItems> m_Items;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<int32, FPointItems> m_EmptyPositions;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FName> m_ListOfRemovedItems;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<int32, AActor*> m_EmptyItems;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FName> m_EventsToCall;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FName> m_EventsAlreadyCalled;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EAmbientType, UAmbientLife*> m_AmbientLifeMap;
    
public:
    UWorldPointScript();

    UFUNCTION(BlueprintCallable)
    FName SpawnWarningFlock(const TSubclassOf<UAmbientLifeConfig> ItemDefinition, int32 Num, float Direction, float spread);
    
    UFUNCTION(BlueprintCallable)
    void SpawnLinkedActor(const TSubclassOf<ULinkedActorDefinition> linkedActor);
    
    UFUNCTION(BlueprintCallable)
    FName SpawnItem(const TSubclassOf<UItemDefinition> ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    FName SpawnAreaFlock(const TSubclassOf<UAmbientLifeConfig> ItemDefinition, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    FName SpawnAIAgent(const TSubclassOf<USpawnAIAgentDefinition> NewSpawnAIAgent, UAIState_DailyRoutine* DailyRoutine);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_SpawnEmptyItem(FItemVirtualData itemToSpawn, FItemSpawnPosition position, int32 coordId);
    
    UFUNCTION(Reliable, Server)
    void Server_SpawnBasicInventoryItem(FItemVirtualData itemToSpawn, FItemSpawnPosition position, int32 coordId, const FString& worldPointName);
    
public:
    UFUNCTION()
    void OnItemDestroyed(AActor* Target);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnAIAgentSpawned(AActor* Entity, FName Name);
    
};

