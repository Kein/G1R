#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "TraversalInfo.h"
#include "GameplayAbilityTraverse.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_UpdateTraverse;
class UAnimMontage;
class UAnimNotifyState_Base;
class UClimbingAnimConfig;
class UClimbingConfig;

UCLASS()
class G1R_API UGameplayAbilityTraverse : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdateTraverse* m_TraverseTask;
    
    UPROPERTY()
    UAnimMontage* m_CurrentMontage;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_TaskCharSleepInMontage;
    
    UPROPERTY(Instanced)
    UClimbingConfig* m_traversingConfig;
    
    UPROPERTY(Instanced)
    UClimbingAnimConfig* m_TraversingAnimConfig;
    
    UPROPERTY()
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY()
    FTransform m_EdgeTransform;
    
public:
    UGameplayAbilityTraverse();

protected:
    UFUNCTION(Reliable, Server)
    void Server_TraverseEnd(bool isNextTraverseStepRequestFailed);
    
    UFUNCTION(Reliable, Server)
    void Server_RequestNextStep();
    
    UFUNCTION(Reliable, Server)
    void Server_MoveToPoint(const UAnimNotifyState_Base* Notify);
    
    UFUNCTION()
    void OnRequestTraverseEnd();
    
    UFUNCTION()
    void OnLandedCallback(const FHitResult& Hit);
    
    UFUNCTION()
    void OnJumpPressed();
    
};

