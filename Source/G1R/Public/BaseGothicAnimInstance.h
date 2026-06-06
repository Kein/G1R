#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseGothicAnimInstance.generated.h"

class AGothicCharacter;
class UAbilitySystemComponent;
class UAnimMontage;
class UDataModule_Animation;

UCLASS(NonTransient)
class G1R_API UBaseGothicAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AGothicCharacter* m_Character;
    
    UPROPERTY()
    UDataModule_Animation* m_DataModule_Animation;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_LODLevel;
    
public:
    UBaseGothicAnimInstance();

protected:
    UFUNCTION()
    void OnMontageHasStarted(UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintPure)
    float GetMontagePosition(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentActiveMontageInSlot(FName Name) const;
    
};

