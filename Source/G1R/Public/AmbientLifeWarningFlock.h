#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "Templates/SubclassOf.h"
#include "AmbientLifeWarningFlock.generated.h"

class ACharacter;
class UAmbientLifeConfig;
class UAmbientPerceptionComponent;
class USceneComponent;
class UWorld;

UCLASS(Transient)
class G1R_API AAmbientLifeWarningFlock : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UAmbientLifeConfig> m_AmbientConfigDefinition;
    
    UPROPERTY(Instanced)
    USceneComponent* m_RootComponent;
    
    UPROPERTY(Instanced)
    UAmbientPerceptionComponent* m_PerceptionComponent;
    
    UPROPERTY()
    TArray<FTransform> m_Positions;
    
    UPROPERTY()
    TArray<ACharacter*> m_Creatures;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_ListenerHandle;
    
private:
    UPROPERTY()
    TArray<FGameplayMessageListenerHandle> m_Listeners;
    
public:
    AAmbientLifeWarningFlock(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void Server_SpawnCreature(const FTransform Transform, TSubclassOf<ACharacter> charToSpawn, UWorld* World);
    
    UFUNCTION()
    void OnCreatureDestroyed(AActor* Target);
    
    UFUNCTION()
    void HandlePerceptionGained(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory);
    
};

