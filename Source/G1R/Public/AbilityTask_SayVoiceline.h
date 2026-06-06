#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_SayVoiceline.generated.h"

class UAbilityTask_SayVoiceline;
class UAnimMontage;
class UAnimSequenceBase;
class UGameplayAbility;
class UGothicAudioComponent;
class USoundAttenuation;

UCLASS(Config=Engine)
class G1R_API UAbilityTask_SayVoiceline : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UGothicAudioComponent* AudioComponent;
    
    UPROPERTY()
    UAnimMontage* DynamicFacialMontage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* SoundAttenuation;
    
    UPROPERTY(Config)
    FName FacialAnimSlotName;
    
    UPROPERTY(Config)
    float FacialAnimBlendInTime;
    
    UPROPERTY(Config)
    float FacialAnimBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SoundKind;
    
    UPROPERTY(BlueprintReadOnly)
    FText TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequenceBase> FacialAnimationAsset;
    
    UAbilityTask_SayVoiceline();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SayVoiceline* TaskSayVoiceline(UGameplayAbility* OwningAbility, FText Text, FGameplayTag NewSoundKind);
    
    UFUNCTION(BlueprintPure)
    bool HasAudioFile() const;
    
protected:
    UFUNCTION()
    void HandleAudioFinishedOrInterrupted();
    
};

