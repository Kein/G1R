#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "InputAction.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityPuzzleSwitch.generated.h"

class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitGameplayEvent;
class UDoorInteractiveExtraData;

UCLASS()
class G1R_API UGameplayAbilityPuzzleSwitch : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_NewTaskIdle;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    UDoorInteractiveExtraData* m_TriggerExtraData;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY(Transient)
    bool m_CanCancel;
    
    UPROPERTY(Transient)
    FTimerHandle m_CancelHandle;
    
    UPROPERTY(Transient)
    FTimerHandle m_FinishHandle;
    
public:
    UGameplayAbilityPuzzleSwitch();

protected:
    UFUNCTION(Reliable, Server)
    void Server_SetNextSection(FName NextSectionName, int32 currentStep, FName puzzleName);
    
    UFUNCTION()
    void HandleMoveInput(const FInputActionInstance& Instance);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageIdleEvent(FGameplayEventData Payload);
    
    UFUNCTION()
    void HandleLeaveInput();
    
};

