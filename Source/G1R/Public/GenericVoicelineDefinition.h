#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GenericVoicelineRequestContext.h"
#include "GenericVoicelineDefinition.generated.h"

class AGothicCharacterState;

UCLASS(Blueprintable, Const)
class G1R_API UGenericVoicelineDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag VoicelineTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRequiredWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GlobalCooldownSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ExampleText;
    
    UGenericVoicelineDefinition();

    UFUNCTION(BlueprintPure)
    bool HasCanBeSaidNowFunction() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanBeSaidNow(const AGothicCharacterState* Me, const AGothicCharacterState* Other, const FGenericVoicelineRequestContext& Context) const;
    
};

