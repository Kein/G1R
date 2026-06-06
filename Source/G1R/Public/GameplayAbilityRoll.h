#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityRoll.generated.h"

UCLASS()
class G1R_API UGameplayAbilityRoll : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
    UGameplayAbilityRoll();

protected:
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnPressDodge();
    
    UFUNCTION()
    void OnInterrupted();
    
    UFUNCTION()
    void OnCancelled();
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

