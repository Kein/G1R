#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayEffectTypes.h"
#include "VFXCue.h"
#include "TeleportVanishingActor.generated.h"

class AActor;
class AGothicCharacter;
class UPrimitiveComponent;
class USphereComponent;

UCLASS()
class G1R_API ATeleportVanishingActor : public AVFXCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USphereComponent* m_CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mIsDebugEnabled;
    
private:
    UPROPERTY()
    TArray<AGothicCharacter*> m_CurrentCharactersAroundTeleportOrigin;
    
public:
    ATeleportVanishingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportStartVanishing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportActorRemoved(const AGothicCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportActorAdded(const AGothicCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportActivate(const AGothicCharacter* Character, float Radius, float CastTime);
    
private:
    UFUNCTION()
    void OnOverlapEndsServer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBeginServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleportStartVanishing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleportStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleportFinished();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleportActivate(const AGothicCharacter* Character, float Radius, float CastTime);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemove(const FGameplayCueParameters& Parameters);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCancel(float totalCastingTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActorRemoved(const AGothicCharacter* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActorAdded(const AGothicCharacter* Player);
    
};

