#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityLocomotionAction.generated.h"

UCLASS(Abstract)
class G1R_API UGameplayAbilityLocomotionAction : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
    UGameplayAbilityLocomotionAction();

protected:
    UFUNCTION()
    void PlayCombo(const FGameplayTag& Direction);
    
    UFUNCTION()
    bool PlayActionAnimation();
    
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnPressDodge();
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

