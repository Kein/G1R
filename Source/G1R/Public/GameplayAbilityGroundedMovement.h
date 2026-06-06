#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayAbilityMovement.h"
#include "GameplayAbilityGroundedMovement.generated.h"

class UAbilityTask_PlayMontage_Extended;

UCLASS()
class G1R_API UGameplayAbilityGroundedMovement : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_LandingMontageTask;
    
public:
    UGameplayAbilityGroundedMovement();

protected:
    UFUNCTION()
    void OnLandedCallback(const FHitResult& Hit);
    
};

