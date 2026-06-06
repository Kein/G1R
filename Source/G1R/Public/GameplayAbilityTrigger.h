#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameplayTagContainer.h"
#include "EAbilityInputID.h"
#include "EWinchState.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityTrigger.generated.h"

class AGothicCharacter;
class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UInteractSensor;
class UTriggerExtraData;

UCLASS()
class G1R_API UGameplayAbilityTrigger : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY(Instanced)
    UInteractSensor* m_InteractComp;
    
    UPROPERTY()
    UAnimMontage* m_CharMontage;
    
    UPROPERTY()
    UAnimMontage* m_InteractiveObjectMontage;
    
    UPROPERTY()
    UTriggerExtraData* m_TriggerExtraData;
    
    UPROPERTY()
    FName m_UniqueName;
    
    UPROPERTY()
    FName m_UserName;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    TArray<FGameplayMessageListenerHandle> m_ListenerHandle;
    
    UPROPERTY()
    EWinchState m_WinchState;
    
    UPROPERTY()
    FGameplayTag m_IdleTag;
    
    UPROPERTY()
    FGameplayTag m_MoveEndTag;
    
    UPROPERTY()
    FGameplayTag m_MoveSTart;
    
    UPROPERTY()
    EAbilityInputID m_BufferedKey;
    
    UPROPERTY()
    FGameplayTag m_TriggerEventTag;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY(Transient)
    bool m_CanCancel;
    
    UPROPERTY(Transient)
    FTimerHandle m_CancelHandle;
    
    UPROPERTY(Transient)
    FTimerHandle m_FinishHandle;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
public:
    UGameplayAbilityTrigger();

protected:
    UFUNCTION(Reliable, Server)
    void Server_SetNextSection(EWinchState NextSection, int32 NextSectionID);
    
    UFUNCTION()
    void HandleMontageTaskCompleted();
    
    UFUNCTION(BlueprintCallable)
    void EventAnimWinchEnd(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimMoveStart(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void DamageReceived(FGameplayEventData Payload);
    
    UFUNCTION(Client, Reliable)
    void Client_SetNextSection(EWinchState NextSection, int32 NextSectionID);
    
};

