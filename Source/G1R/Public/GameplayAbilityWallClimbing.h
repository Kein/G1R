#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "InputAction.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "TraversalInfo.h"
#include "GameplayAbilityWallClimbing.generated.h"

class AActor;
class AClimbableWall;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_UpdateTraverse;
class UAbilityTask_UpdateWallClimbing;
class UAnimInstance;
class UAnimMontage;
class UAnimNotifyState_Base;
class UClimbingConfig;

UCLASS()
class G1R_API UGameplayAbilityWallClimbing : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    UAbilityTask_UpdateTraverse* m_UpdateTraverseTask;
    
    UPROPERTY()
    UAbilityTask_UpdateWallClimbing* m_wallClimbingUpdateTask;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UAnimMontage>> m_StatesMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UAnimMontage>> m_JumpsMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_StartOffset;
    
    UPROPERTY()
    bool m_isJumping;
    
protected:
    UPROPERTY(Instanced)
    UClimbingConfig* m_ClimbingConfig;
    
    UPROPERTY()
    AClimbableWall* m_ClimbableWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> m_ClimbingAnimBP;
    
public:
    UGameplayAbilityWallClimbing();

protected:
    UFUNCTION(Reliable, Server)
    void Server_MoveToPoint(const UAnimNotifyState_Base* Notify, AActor* Owner, bool locallyPredicted);
    
    UFUNCTION(Reliable, Server)
    void Server_Drop();
    
    UFUNCTION(Reliable, Server)
    void Server_DoWallJump(FName Section);
    
    UFUNCTION(Reliable, Server)
    void Server_DoTraverse(FName Section, bool Entering, FTraversalInfo TraversalInfo);
    
public:
    UFUNCTION()
    void OnWallJumpEnd();
    
    UFUNCTION()
    void OnTraverseExit();
    
    UFUNCTION()
    void OnTraverseEnterInterrumped();
    
    UFUNCTION()
    void OnTraverseEnterEnd();
    
    UFUNCTION()
    void OnTopReached(FHitResult HitResult, FTraversalInfo TraversalInfo);
    
protected:
    UFUNCTION()
    void OnRagdoll(const FGameplayTag CallbackTag, int32 NewCount);
    
public:
    UFUNCTION()
    void OnFloorReached(FHitResult HitResult);
    
protected:
    UFUNCTION()
    void OnExitSync();
    
    UFUNCTION()
    void OnEntranceSync();
    
    UFUNCTION()
    void InputMoveLeftRight(const FInputActionInstance& Instance);
    
    UFUNCTION()
    void InputMoveForwardBackwards(const FInputActionInstance& Instance);
    
};

