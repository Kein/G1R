#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskCoroutine.h"
#include "AbilityTask_AI.generated.h"

class AGothicAIController;
class AGothicCharacter;
class AGothicCharacterState;
class AGothicNPCState;

UCLASS(Abstract)
class G1R_API UAbilityTask_AI : public UAbilityTaskCoroutine {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer CancelIfCharacterGainsAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer CancelIfCharacterLosesAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAbilitiesWithTagsWhileActive;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer CancelAbilitiesWithTagsOnActivate;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer CancelAbilitiesWithoutTagsOnActivate;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer OwnedTagsToAddWhileActive;
    
    UAbilityTask_AI();

    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetSelf() const;
    
    UFUNCTION(BlueprintPure)
    AGothicNPCState* GetNPCState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicAIController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetCharacterState() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_ShouldShowTaskInfoInImGui();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisplayImGui();
    
};

