#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "ExampleGameStateSubsystem.generated.h"

UCLASS(BlueprintType)
class UExampleGameStateSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated, Transient)
    int32 RepVar1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepVar2)
    int32 RepVar2;
    
    UExampleGameStateSubsystem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server)
    void ServerDoSomething();
    
    UFUNCTION()
    void OnRep_RepVar2(int32 NewVar2);
    
    UFUNCTION(Client, Reliable)
    void ClientDoSomething();
    
    UFUNCTION(BlueprintCallable)
    void BlueprintDoAThing();
    
};

