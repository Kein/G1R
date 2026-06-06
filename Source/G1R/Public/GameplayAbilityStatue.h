#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "InputAction.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityStatue.generated.h"

class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitGameplayEvent;
class UDoorInteractiveExtraData;

UCLASS()
class G1R_API UGameplayAbilityStatue : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_NewTaskIdle;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY()
    FName m_UniqueName;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    UDoorInteractiveExtraData* m_TriggerExtraData;
    
    UPROPERTY()
    FName m_UserName;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_DoorHandler;
    
    UPROPERTY(Transient)
    bool m_CanCancel;
    
    UPROPERTY(Transient)
    FTimerHandle m_CancelHandle;
    
public:
    UGameplayAbilityStatue();

protected:
    UFUNCTION(Reliable, Server)
    void Server_SetNextSection(FName NextSectionName, int32 sectionDelta);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetNextSection(FName NextSectionName, int32 sectionDelta);
    
    UFUNCTION()
    void HandleMoveInput(const FInputActionInstance& Instance);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageIdleEvent(FGameplayEventData Payload);
    
    UFUNCTION()
    void HandleLeaveInput();
    
};

