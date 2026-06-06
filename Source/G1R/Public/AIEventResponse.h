#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RememberedPerception.h"
#include "AIEventResponse.generated.h"

class UGameplayAbility_CharacterAI;

UCLASS(Blueprintable)
class G1R_API UAIEventResponse : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bExecuteImmediately;
    
    UAIEventResponse();

    UFUNCTION(BlueprintNativeEvent)
    void PerformResponse(const FGameplayTag& AIEvent, const FRememberedPerception& Perception) const;
    
    UFUNCTION(BlueprintPure)
    UGameplayAbility_CharacterAI* GetOwningAIAbility() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void DrawImGuiShortDesc() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void DrawImGui() const;
    
};

