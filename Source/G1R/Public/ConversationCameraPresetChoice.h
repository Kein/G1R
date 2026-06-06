#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ConversationCameraV2.h"
#include "IncomingCameraEvent.h"
#include "ConversationCameraPresetChoice.generated.h"

class AGothicCharacter;
class UAbilitySystemComponent;

UCLASS()
class G1R_API AConversationCameraPresetChoice : public AConversationCameraV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SpeakEventSubscriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TopicEventSubscriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TopicChoiceEventSubscriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PriorityEventSubscriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PriorityEventIgnores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ReverseShotSubscriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SkipLineSubscriptions;
    
protected:
    UPROPERTY()
    AGothicCharacter* NextSpeaker;
    
    UPROPERTY()
    AGothicCharacter* NextListener;
    
    UPROPERTY(Instanced)
    TArray<UAbilitySystemComponent*> AbilitySystemComponents;
    
    UPROPERTY(EditAnywhere)
    bool bNewPresetOnSameSpeaker;
    
    UPROPERTY(EditAnywhere)
    float MinSpeakTime;
    
    UPROPERTY()
    TArray<FIncomingCameraEvent> LatestEvents;
    
    UPROPERTY(EditAnywhere)
    int32 NumFramesToBufferEvents;
    
    UPROPERTY()
    uint64 FirstEventFrame;
    
    UPROPERTY()
    FGameplayTag LastUsedEventTag;
    
    UPROPERTY(EditAnywhere)
    float RapidSkipSecondsTimeWindow;
    
public:
    AConversationCameraPresetChoice(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    bool DetermineNewSpeakerListener(const FGameplayEventData& EventData);
    
    UFUNCTION()
    void BindPresetTagSubscriptionDelegateForPlayer(UAbilitySystemComponent* ASC);
    
    UFUNCTION()
    void BindPresetTagSubscriptionDelegateForParticipant(UAbilitySystemComponent* ASC);
    
public:
    UFUNCTION()
    void AddParticipantsAbilitySystemComponent(UAbilitySystemComponent* ASC);
    
};

