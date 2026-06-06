#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EffectActorBase.h"
#include "FloatingItemActor.generated.h"

class AGothicCharacter;
class AItemVisual;
class UDataModule_Animation;
class URotatingMovementComponent;
class USkeletalMeshComponent;

UCLASS()
class G1R_API AFloatingItemActor : public AEffectActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    AItemVisual* m_ItemVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URotatingMovementComponent* m_RotatingMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URotatingMovementComponent* m_ItemVisualRotatingMovementComp;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Replicated, VisibleAnywhere)
    USkeletalMeshComponent* m_TargetMesh;
    
private:
    UPROPERTY(Replicated)
    UDataModule_Animation* m_DataModule_Animation;
    
public:
    AFloatingItemActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopInmediate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestoreItemInHand();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void OnStartRecoveringRune_Multicast(float totalCastingTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartRecoveringRune(float totalCastingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLaunchSpellOnServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnLaunchSpellOnServer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCancelSpellOnServer_Scriptable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ObtainItemVisualFromCarryComponent(AGothicCharacter* GothicCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelSpell();
    
    UFUNCTION(BlueprintCallable)
    void DetachItemVisualFromOwner();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateItemRotatingMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RestoreItemInHand();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CancelCastSpell();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttachItemVisualToTarget(FName Name, EAttachmentRule AttachmentRule, bool bInWeldSimulatedBodies);
    
};

