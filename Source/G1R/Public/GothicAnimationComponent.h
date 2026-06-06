#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DynamicMontage.h"
#include "EPivotTrigger.h"
#include "LinkedInstances.h"
#include "Templates/SubclassOf.h"
#include "GothicAnimationComponent.generated.h"

class UAnimInstance;
class UTurnOnSpotAssetConfig;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_ChangeAnimationInstance)
    TSubclassOf<UAnimInstance> m_currentAnimInstance;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ChangeLinkedAnimInstances)
    TArray<FLinkedInstances> m_LinkedAnimInstances;
    
    UPROPERTY(Replicated)
    bool m_UseMotionMatching;
    
public:
    UGothicAnimationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetDesiredUseMotionMatching(bool UseMotionMatching);
    
    UFUNCTION(Reliable, Server)
    void Server_ResetPivot();
    
    UFUNCTION(Reliable, Server)
    void Server_DoTurnInPlace(const UTurnOnSpotAssetConfig* Anim, float PlayRateScale, float ScaleTurnAngle, float StartTime);
    
    UFUNCTION(Reliable, Server)
    void Server_DoStop(const FDynamicMontage& Anim);
    
    UFUNCTION(Reliable, Server)
    void Server_DoPivot(const FDynamicMontage& Anim, EPivotTrigger PivotType, bool isPivot);
    
    UFUNCTION(BlueprintCallable)
    void RefreshUseMotionMatching();
    
    UFUNCTION()
    void OnRep_ChangeLinkedAnimInstances(TArray<FLinkedInstances> NewM_LinkedAnimInstances);
    
    UFUNCTION()
    void OnRep_ChangeAnimationInstance();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ResetPivot(bool locallyPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DoTurnInPlace(const UTurnOnSpotAssetConfig* Anim, float PlayRateScale, float ScaleTurnAngle, float StartTime, bool locallyPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DoStop(const FDynamicMontage& Anim, bool locallyPredicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DoPivot(const FDynamicMontage& Anim, EPivotTrigger PivotType, bool isPivot, bool locallyPredicted);
    
    UFUNCTION(BlueprintPure)
    bool GetUseMotionMatching() const;
    
    UFUNCTION()
    TSubclassOf<UAnimInstance> GetLinkedInstance(FName Group);
    
};

