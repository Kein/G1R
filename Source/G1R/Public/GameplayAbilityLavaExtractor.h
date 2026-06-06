#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "InputAction.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityLavaExtractor.generated.h"

class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitGameplayEvent;
class UDoorInteractiveExtraData;

UCLASS()
class G1R_API UGameplayAbilityLavaExtractor : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    UDoorInteractiveExtraData* m_TriggerExtraData;
    
    UPROPERTY()
    FName m_UniqueName;
    
    UPROPERTY()
    FName m_UserName;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumSteps;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_NewTaskIdle;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_PushTaskIdle;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_TaskMoveEnd;
    
    UPROPERTY(Transient)
    bool m_CanCancel;
    
    UPROPERTY(Transient)
    FTimerHandle m_CancelHandle;
    
public:
    UGameplayAbilityLavaExtractor();

protected:
    UFUNCTION(Reliable, Server)
    void Server_PushSection(FName UniqueName, int32 Section, FName UserName);
    
    UFUNCTION(Reliable, Server)
    void Server_MoveEnd(FName UniqueName, int32 Section, FName UserName);
    
    UFUNCTION(Reliable, Server)
    void Server_LeaveStation();
    
    UFUNCTION(Reliable, Server)
    void Server_HandleMoveInput();
    
    UFUNCTION()
    void HandleMoveInput(const FInputActionInstance& Instance);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontagePushEvent(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageMoveEndEvent(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageIdleEvent(FGameplayEventData Payload);
    
    UFUNCTION()
    void HandleLeaveInput();
    
};

