#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "WorldPointConfig.h"
#include "WorldPointManager.generated.h"

class AActor;
class UObject;
class UQuest;
class UWorld;
class UWorldPointManager;
class UWorldPointManagerConfig;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UWorldPointManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UWorldPointManagerConfig* m_WorldPointManagerConfigInstance;
    
    UPROPERTY()
    TArray<FWorldPointConfig> m_WorldPointConfigs;
    
    UPROPERTY()
    TArray<int32> m_WorldPointsMustInit;
    
    UPROPERTY()
    TArray<int32> m_OldActiveWorldPoints;
    
    UPROPERTY()
    TArray<int32> m_ActiveDestroyPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_UnSpawnDistance;
    
    UPROPERTY()
    TArray<FName> m_ActiveEvents;
    
private:
    UPROPERTY()
    TMap<int32, AActor*> m_DropItemsArray;
    
public:
    UWorldPointManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnQuestSave(UQuest* Quest);
    
    UFUNCTION()
    void OnItemDestroyed(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static UWorldPointManager* GetInstance(UWorld* World);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWorldPointManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CallNewChapter(int32 NewChapter) const;
    
    UFUNCTION(BlueprintCallable)
    void CallGlobalEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void CallAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void AddDropItem(AActor* Target);
    
};

