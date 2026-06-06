#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "TraversalInfo.h"
#include "GameplayAbilityCheckClimb.generated.h"

class UAbilityTask_CheckClimb;
class UInputComponent;

UCLASS()
class G1R_API UGameplayAbilityCheckClimb : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAbilityTask_CheckClimb* m_Task;
    
protected:
    UPROPERTY(Instanced)
    UInputComponent* m_InputComponent;
    
public:
    UGameplayAbilityCheckClimb();

protected:
    UFUNCTION()
    void OnClimb(const FTraversalInfo& climbingInfo);
    
};

