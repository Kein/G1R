#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GothicActorComponentInterface.h"
#include "GothicMagicComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicMagicComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_SpellSpawnedActor;
    
    UPROPERTY(Replicated)
    int32 m_HandHeldItemLastSlotId;
    
public:
    UGothicMagicComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnAttachRightHandScroll();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedActor(AActor* Actor);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerThrowInterruptKnockback();
    
    UFUNCTION(Reliable, Server)
    void ServerThrowInterruptDeath();
    
    UFUNCTION(Reliable, Server)
    void ServerThrowInterruptAttack();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastToggleSpellVisualRuneScrollVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateLastHandHeldItemSlotId();
    
private:
    UFUNCTION()
    void InterruptByMenuInteraction(FGameplayTag GameplayTag, int32 I);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetSpawnedActor();
    
    UFUNCTION(BlueprintCallable)
    void EquipRightHandScroll();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeScroll();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientThrowInterruptKnockback();
    
    UFUNCTION(Client, Reliable)
    void ClientThrowInterruptDeath();
    
    UFUNCTION(Client, Reliable)
    void ClientThrowInterruptAttack();
    

    // Fix for true pure virtual functions not being implemented
};

