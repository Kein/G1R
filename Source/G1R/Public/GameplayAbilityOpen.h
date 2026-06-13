#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityOpen.generated.h"

class UAbilityTask_LockPick;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitDelay_Extended;
class UAnimMontage;
class UInteractSensor;

UCLASS(Abstract)
class G1R_API UGameplayAbilityOpen : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_InteractCharacterOpenAnimMontage;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_InteractiveObjectOpenAnimMontage;
    
    UPROPERTY(EditAnywhere)
    FName m_UniqueNameInteractive;
    
    UPROPERTY(EditAnywhere)
    FName m_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_PuzzleKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ConsumeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_LockDifficulty;
    
    UPROPERTY()
    UAbilityTask_LockPick* m_LockPickTask;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_TaskCharMontage;
    
    UPROPERTY()
    UAbilityTask_WaitDelay_Extended* m_TaskWaitIntroAnimation;
    
    UPROPERTY()
    UAbilityTask_WaitDelay_Extended* m_TaskWaitOpenAnimation;
    
    UPROPERTY()
    UAnimMontage* m_InteractiveObjectMontage;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UInteractSensor> m_CachedInteractSensor;
    
public:
    UGameplayAbilityOpen();

protected:
    UFUNCTION(Reliable, Server)
    void Server_OnSetLockUnlocked();
    
    UFUNCTION(Reliable, Server)
    void Server_OnLockPickActorBecameInactive();
    
    UFUNCTION(Reliable, Server)
    void Server_OnLockPickActorBecameActive();
    
    UFUNCTION(Reliable, Server)
    void Server_OnCloseRequested();
    
    UFUNCTION(Reliable, Server)
    void Server_NoLockEvent();
    
    UFUNCTION(Reliable, Server)
    void Server_FailedLockEvent();
    
    UFUNCTION()
    void OnSectionMoved();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnLockSequenceFinished(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OnIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseRequested();
    
    UFUNCTION()
    void NoLockEvent();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_OnSetLockUnlocked(FName ActorName);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_OnLockPickActorBecameInactive();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_OnLockPickActorBecameActive();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_OnCloseRequested();
    
public:
    UFUNCTION(BlueprintCallable)
    void KeyReleases();
    
protected:
    UFUNCTION()
    void FailedLockEvent();
    
};

