#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGenericTaskResult.h"
#include "EPerceptionNoiseLoudness.h"
#include "GameplayAbilityBase.h"
#include "SpeakingQueueEntry.h"
#include "GameplayAbilitySpeak.generated.h"

class UAbilityTaskGeneric;
class UAbilityTask_SayVoiceline;
class USoundAttenuation;

UCLASS()
class G1R_API UGameplayAbilitySpeak : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowGesturesWhenHasAnyOf;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockGesturesWhenHasAnyOf;
    
    UPROPERTY()
    UAbilityTask_SayVoiceline* SayVoiceline;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USoundAttenuation> SoundAttenuation;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPerceptionNoiseLoudness, TSoftObjectPtr<USoundAttenuation>> SoundAttenuationByLoudness;
    
    UPROPERTY()
    TArray<FSpeakingQueueEntry> SpeakQueue;
    
public:
    UGameplayAbilitySpeak();

protected:
    UFUNCTION()
    void HandleSayVoicelineEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
};

