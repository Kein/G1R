#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpellAnimationDirector.h"
#include "SpellAnimationBaseDirector.generated.h"

class AGothicCharacter;
class UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities;
class UAnimMontage;
class UGameplayAbility;
class ULocomotionSequencesData;
class USpellItemAnimConfig;

UCLASS()
class G1R_API USpellAnimationBaseDirector : public UObject, public ISpellAnimationDirector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities* m_MontageTask;
    
    UPROPERTY()
    UAnimMontage* m_CurrentAnimation;
    
    UPROPERTY(Instanced)
    USpellItemAnimConfig* m_AnimData;
    
    UPROPERTY()
    UGameplayAbility* m_OwningAbility;
    
    UPROPERTY(Instanced)
    ULocomotionSequencesData* m_OriginalLocomotionData;
    
    UPROPERTY()
    AGothicCharacter* m_CurrentCharacter;
    
public:
    USpellAnimationBaseDirector();

private:
    UFUNCTION()
    void OnInterrupted();
    
    UFUNCTION()
    void OnCompleted();
    
    UFUNCTION()
    void OnCancelled();
    

    // Fix for true pure virtual functions not being implemented
};

