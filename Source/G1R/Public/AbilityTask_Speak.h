#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "EPerceptionNoiseLoudness.h"
#include "AbilityTask_Speak.generated.h"

class AGothicCharacter;
class UAbilityTask_Speak;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Speak : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> SoundTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForcedSubtitleLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Expression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Posture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForceCameraPresetWithName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnskippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPerceptionNoiseLoudness Loudness;
    
    UAbilityTask_Speak();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Speak* TaskSpeakGenericVoicelineQueue(UGameplayAbility* OwningAbility, const TArray<FGameplayTag>& NewSoundTags, EPerceptionNoiseLoudness NewLoudness, AGothicCharacter* NewTargetCharacter, bool NewBUnskippable);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Speak* TaskSpeakGenericVoiceline(UGameplayAbility* OwningAbility, const FGameplayTag& SoundTag, EPerceptionNoiseLoudness NewLoudness, AGothicCharacter* NewTargetCharacter, bool NewBUnskippable);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Speak* TaskSpeak(UGameplayAbility* OwningAbility, FText NewText, FGameplayTag NewExpression, EPerceptionNoiseLoudness NewLoudness, AGothicCharacter* NewTargetCharacter, bool NewBUnskippable, FName NewForcedSubtitleLanguage);
    
    UFUNCTION(BlueprintCallable)
    static bool CanSayGenericVoiceline(UGameplayAbility* OwningAbility, const FGameplayTag& SoundTag);
    
};

