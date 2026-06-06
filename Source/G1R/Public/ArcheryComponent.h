#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EArcheryState.h"
#include "ArcheryComponent.generated.h"

class AArcheryWeaponVisual;
class AArrowVisual;
class UAbilityTask_PlayMontage_Extended;
class UAnimInstance;
class UAnimMontage;
class UGothicAbilitySystemComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UArcheryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_ArrowInHand)
    AArrowVisual* m_ArrowInHand;
    
    UPROPERTY(ReplicatedUsing=OnRep_ChangeState)
    EArcheryState m_CurrentArcheryState;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_AbilityTaskPlayMontage;
    
private:
    UPROPERTY()
    UAnimInstance* m_AnimInstance;
    
public:
    UArcheryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Reliable, Server)
    void ServerSetWantContinueQuickRelease(bool wantContinue);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerSetHiddenInGame(bool IsHidden);
    
    UFUNCTION(Reliable, Server)
    void ServerReleaseBowString(UAnimMontage* AnimMontage, bool isQuickRelease);
    
    UFUNCTION(Reliable, Server)
    void ServerDrawBowString();
    
    UFUNCTION()
    void OnRep_ChangeState(EArcheryState oldState);
    
    UFUNCTION()
    void OnRep_ArrowInHand();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReleaseBowStringOrCrossbow();
    
    UFUNCTION(BlueprintCallable)
    void OnQuickReleaseBowString();
    
private:
    UFUNCTION()
    void OnNotchInterrupted();
    
    UFUNCTION()
    void OnNotchCompleted();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetHiddenInGame(bool IsHidden);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAttachArrowToHand();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWaitingToFinishRelease() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsSecureToFire() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNotchingArrowOntoBow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintPure)
    AArcheryWeaponVisual* GetBowOrCrossbowWeapon() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeState(EArcheryState NewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanDoAiming() const;
    
};

