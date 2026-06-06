#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityPick.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitDelay_Extended;
class UAnimMontage;
class UCarryComponent;
class UItemDefinition;
class UNiagaraSystem;
class UUserWidget;

UCLASS()
class G1R_API UGameplayAbilityPick : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UUserWidget> UIItemNotification;
    
    UPROPERTY(EditAnywhere)
    float m_AnimationPlayRate;
    
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_Montage_Task;
    
    UPROPERTY()
    FGameplayTag m_EventWhenPickUp;
    
    UPROPERTY()
    TSubclassOf<UItemDefinition> m_RequiredToPick;
    
    UPROPERTY()
    UAbilityTask_WaitDelay_Extended* m_TaskWait;
    
    UPROPERTY()
    FName m_NameToSend;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilityPick();

protected:
    UFUNCTION()
    void StartPicking();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemPicked(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnHidePickup(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimFinished();
    
    UFUNCTION(BlueprintNativeEvent)
    UAnimMontage* K2_GetPickSpecialMontage(TSubclassOf<UItemDefinition>& ItemDefinition);
    
    UFUNCTION(BlueprintImplementableEvent)
    UNiagaraSystem* K2_GetPickNiagara(bool isUnderwater, const FGameplayTag& GameplayTag) const;
    
};

