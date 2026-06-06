#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityLever.generated.h"

class AGothicCharacter;
class AInteractiveObjectActor;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UInteractiveObjectDefinition;
class UTriggerExtraData;

UCLASS()
class G1R_API UGameplayAbilityLever : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAnimMontage* m_CharMontage;
    
    UPROPERTY()
    UAnimMontage* m_InteractiveObjectMontage;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    FGameplayTag m_MoveEndTag;
    
    UPROPERTY()
    FGameplayTag m_MoveIdleTag;
    
    UPROPERTY()
    FGameplayTag m_EndIdleTag;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    FName m_UniqueName;
    
    UPROPERTY()
    UTriggerExtraData* m_TriggerExtraData;
    
    UPROPERTY(Instanced)
    UInteractiveObjectDefinition* m_InteractDefinition;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_DoorHandler;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
public:
    UGameplayAbilityLever();

protected:
    UFUNCTION(Reliable, Server)
    void Server_HandleLeaveInput(bool forced);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HandleLeaveInput(bool forced);
    
    UFUNCTION()
    void HandleLeaveInputEvent();
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetMontageName_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void EventAnimIdleEnd(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimIdle(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimEnd(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void DamageReceived(FGameplayEventData Payload);
    
};

