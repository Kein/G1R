#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskCameraFadeSetup.h"
#include "EGenericTaskResult.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilitySleepEndedMessageList.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySleep.generated.h"

class AGothicNPCState;
class UAbilityTaskGeneric;
class UAbilityTask_CameraFade;
class UAbilityTask_InteractionSpot_Montage_Sleep;
class UAbilityTask_WaitDelay_Extended;
class UAbilityTask_WaitForAllPlayersToConfirmSleep;
class UAnimMontage;
class UHUDSimpleTextMessageController;
class UHUDSleepUIController;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilitySleep : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_WaitDelay_Extended* m_TaskWaitSitAnimation;
    
    UPROPERTY()
    UAbilityTask_WaitDelay_Extended* m_TaskWaitGoToSleepAnimation;
    
    UPROPERTY()
    UAbilityTask_CameraFade* m_TaskCameraFade;
    
    UPROPERTY()
    UAbilityTask_WaitDelay_Extended* m_TaskWaitBetweenFadeOutAndIn;
    
    UPROPERTY()
    UAbilityTask_WaitForAllPlayersToConfirmSleep* m_TaskWaitForAllPlayersToConfirmSleep;
    
    UPROPERTY()
    UAbilityTask_InteractionSpot_Montage_Sleep* m_RootInteractionTask;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UScriptGameplayEffect> m_RecoverAttributesBySleepingEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UScriptGameplayEffect> m_DecreaseSleepTimeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UScriptGameplayEffect> m_OwnBedStatusEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FAbilityTaskCameraFadeSetup m_FadeSetup;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeBetweenFadeOutAndFadeIn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeBetweenStartAndSit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeBetweenSitAndFadeOut;
    
    UPROPERTY(Transient)
    AGothicNPCState* m_SleepInterruptedBy;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_SleepingMontage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAbilityTask_InteractionSpot_Montage_Sleep> m_InteractionTaskClass;
    
    UPROPERTY(Transient)
    UHUDSleepUIController* m_SleepUIController;
    
    UPROPERTY(Transient)
    UHUDSimpleTextMessageController* m_SimpleMessageController;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, FGameplayAbilitySleepEndedMessageList> m_SleepEndedMessages;
    
public:
    UGameplayAbilitySleep();

protected:
    UFUNCTION(Reliable, Server)
    void Server_OnSleepUIConfirmButtonClicked(float selectedHoursToSleep);
    
    UFUNCTION(Reliable, Server)
    void Server_OnSleepUICloseButtonClicked();
    
    UFUNCTION(Reliable, Server)
    void Server_OnCameraFadeInFinished();
    
    UFUNCTION(Reliable, Server)
    void Server_ApplySleepingGameplayEffects();
    
    UFUNCTION()
    void OnWaitBetweenFadeOutAndInFinished();
    
    UFUNCTION()
    void OnSleepUIConfirmButtonClicked();
    
    UFUNCTION()
    void OnSleepUICloseButtonClicked();
    
    UFUNCTION()
    void OnSitAnimationFinished();
    
    UFUNCTION()
    void OnInteractionTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void OnGoToSleepAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled);
    
    UFUNCTION()
    void OnCameraFadeOutFinished();
    
    UFUNCTION()
    void OnCameraFadeInFinished();
    
    UFUNCTION()
    void OnAllPlayersConfirmedSleep(float MaxSelectedHoursToSleep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(Client, Reliable)
    void Client_ShowSleepEndedMessage();
    
    UFUNCTION(Client, Reliable)
    void Client_OnAllPlayersConfirmedSleep();
    
};

