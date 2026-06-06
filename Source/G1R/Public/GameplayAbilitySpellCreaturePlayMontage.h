#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityCreatureBasic.h"
#include "GameplayAbilitySpellCreaturePlayMontage.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilitySpellCreaturePlayMontage : public UGameplayAbilityCreatureBasic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_StopWhenAbilityEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Rate;
    
    UPROPERTY()
    bool m_ShouldRestoreTickOptimizer;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_MontageTask;
    
public:
    UGameplayAbilitySpellCreaturePlayMontage();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayMontageSuccessful_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayMontageFailed_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLaunchSpell_Scriptable();
    
    UFUNCTION()
    void OnLaunchSpell();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterruptedMontage_Scriptable();
    
    UFUNCTION()
    void OnInterruptedMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCompletedMontage_Scriptable();
    
    UFUNCTION()
    void OnCompletedMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelledMontage_Scriptable();
    
    UFUNCTION()
    void OnCancelledMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlendOutMontage_Scriptable();
    
    UFUNCTION()
    void OnBlendOutMontage();
    
    UFUNCTION(BlueprintCallable)
    void JumpToSection(FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetMontage();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayMontage(UAnimMontage* Montage);
    
    UFUNCTION(Client, Reliable)
    void ClientJumpToSection(FName SectionName);
    
};

