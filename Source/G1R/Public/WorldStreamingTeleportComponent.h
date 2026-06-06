#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WorldStreamingTeleportComponent.generated.h"

class AActor;
class UWorldPartitionStreamingSourceComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UWorldStreamingTeleportComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_TeleportLocationActor)
    AActor* m_TeleportLocationActor;
    
    UPROPERTY(Instanced)
    UWorldPartitionStreamingSourceComponent* m_WorldPartitionStreamingComponent;
    
public:
    UWorldStreamingTeleportComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void ServerNotifyStreamingCompleted();
    
    UFUNCTION()
    void OnRep_TeleportLocationActor();
    
    UFUNCTION(Client, Reliable)
    void ClientNotifyStopTeleport();
    
};

