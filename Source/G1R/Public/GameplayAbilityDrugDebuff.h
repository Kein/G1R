#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AttributeSet.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityMovement.h"
#include "ItemVirtualData.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityDrugDebuff.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAngelscriptAttributeSet;
class UAnimMontage;
class UDrugDebuffThreshold;
class UGameplayEffect;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityDrugDebuff : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAngelscriptAttributeSet> m_AttributeSetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_DepletionGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_SwimmingDepletionGEClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UScriptGameplayEffect> m_ResetDrugAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UDrugDebuffThreshold>> m_DrugDebuffThresholds;
    
    UPROPERTY()
    TSubclassOf<UGameplayEffect> m_CurrentDrugDebuffGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_DebuffStateGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DrunkAffectAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DrunkStrengthDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NoiseFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SmoothInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DrunkAffectAimingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DrunkStrengthDegreesCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NoiseFrequencyCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NoiseFrequencyCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SmoothInterpSpeedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShouldNotifyConsumeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_StateTag;
    
private:
    UPROPERTY()
    FGameplayAttribute m_DrugAttribute;
    
public:
    UGameplayAbilityDrugDebuff();

    UFUNCTION(BlueprintCallable)
    void UpdateAnimBP();
    
    UFUNCTION(Reliable, Server)
    void ResetDrugAttribute();
    
    UFUNCTION(BlueprintCallable)
    void PlayMontageTask(TSoftObjectPtr<UAnimMontage> Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConsumeItem_Scriptable(const FItemVirtualData& ItemVirtualData);
    
    UFUNCTION()
    void OnConsumeItem(const FItemVirtualData& ItemVirtualData);
    
    UFUNCTION()
    void OnCompleted();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttributeIncreased_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyThresholdEffect(UDrugDebuffThreshold* NewThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbilityBeforeAssetPreload_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION()
    void DrunkMovementInput();
    
    UFUNCTION()
    void DrunkControllerInput();
    
    UFUNCTION()
    void ActivateDepletionGE();
    
};

