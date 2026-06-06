#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECombatStance.h"
#include "LinkedAnimInstance.h"
#include "BipedMeleeCombatAnimInstance.generated.h"

UCLASS(NonTransient)
class G1R_API UBipedMeleeCombatAnimInstance : public ULinkedAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    ECombatStance m_CombatStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FGameplayTag m_BlockState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECombatStance m_DesiredCombatStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FGameplayTag m_Pose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_TransitionHorizontal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_TransitionVertical;
    
public:
    UBipedMeleeCombatAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnResetPose() const;
    
};

