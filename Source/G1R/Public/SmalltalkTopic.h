#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "VoiceTypeDefinition.h"
#include "SmalltalkTopic.generated.h"

class AGothicCharacterState;

UCLASS(Abstract, Blueprintable)
class G1R_API USmalltalkTopic : public UVoiceTypeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer TransitionFrom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    USmalltalkTopic();

    UFUNCTION(BlueprintNativeEvent)
    bool IsTransitionAllowed(const FGameplayTag& LastSpokenVoicelineTag, const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
};

