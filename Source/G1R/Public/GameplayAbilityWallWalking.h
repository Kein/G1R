#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityWallWalking.generated.h"

class UAbilityTask_CheckWallWalking;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityWallWalking : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAbilityTask_CheckWallWalking* m_CheckWallWalkingTask;
    
    UPROPERTY()
    UAnimMontage* m_JumpMontage;
    
public:
    UGameplayAbilityWallWalking();

private:
    UFUNCTION()
    void OnWallWalkableNotFound();
    
    UFUNCTION()
    void OnWallWalkableFound(FHitResult hitPoint, bool junp);
    
    UFUNCTION()
    void OnJumpFinished();
    
public:
    UFUNCTION()
    bool IsWallWalking() const;
    
};

