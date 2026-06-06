#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityCallInteractFunction.generated.h"

class AInteractiveObjectActor;
class UAnimMontage;
class UInteractiveObjectDefinition;

UCLASS()
class G1R_API UGameplayAbilityCallInteractFunction : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    UAnimMontage* m_CharMontage;
    
    UPROPERTY()
    UAnimMontage* m_InteractiveObjectMontage;
    
    UPROPERTY(Instanced)
    UInteractiveObjectDefinition* m_InteractDefinition;
    
    UPROPERTY(Transient)
    FTimerHandle m_FinishHandle;
    
public:
    UGameplayAbilityCallInteractFunction();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemConsumed(FGameplayEventData Payload);
    
    UFUNCTION()
    void HandleLeaveInput();
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetMontageName_Scriptable();
    
};

