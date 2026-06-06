#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "GenericVoicelineRequestContext.h"
#include "GenericVoicelineComponent.generated.h"

class AGothicCharacterState;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacterState, meta=(BlueprintSpawnableComponent))
class G1R_API UGenericVoicelineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGenericVoicelineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SayVoicelineWithContext(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther, const FGenericVoicelineRequestContext& Context, EPerceptionNoiseLoudness Loudness);
    
    UFUNCTION(BlueprintCallable)
    bool SayVoiceline(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther, EPerceptionNoiseLoudness Loudness);
    
    UFUNCTION(BlueprintCallable)
    bool SayMultipleVoicelinesWithContext(const TArray<FGameplayTag>& VoicelineTags, const AGothicCharacterState* OptionalOther, const FGenericVoicelineRequestContext& Context, EPerceptionNoiseLoudness Loudness);
    
    UFUNCTION(BlueprintCallable)
    bool SayMultipleVoicelines(const TArray<FGameplayTag>& VoicelineTags, const AGothicCharacterState* OptionalOther, EPerceptionNoiseLoudness Loudness);
    
    UFUNCTION(BlueprintPure)
    bool HasVoiceType(const FGameplayTag& VoiceType) const;
    
    UFUNCTION(BlueprintPure)
    bool HasVoicelineForWithContext(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther, const FGenericVoicelineRequestContext& Context) const;
    
    UFUNCTION(BlueprintPure)
    bool HasVoicelineFor(const FGameplayTag& VoicelineTag, const AGothicCharacterState* OptionalOther) const;
    
};

