#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECombatStance.h"
#include "LinkedAnimInstance.h"
#include "QuadrupedMeleeCombatAnimInstance.generated.h"

UCLASS(NonTransient)
class G1R_API UQuadrupedMeleeCombatAnimInstance : public ULinkedAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ECombatStance m_CombatStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECombatStance m_DesiredCombatStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FGameplayTag m_Pose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_TransitionHorizontal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_TransitionVertical;
    
public:
    UQuadrupedMeleeCombatAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnResetPose() const;
    
};

