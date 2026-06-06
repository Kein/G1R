#pragma once
#include "CoreMinimal.h"
#include "AngelscriptAttributeSet.h"
#include "AngelscriptAttributeSet.h"
#include "GameplayTagContainer.h"
#include "ScriptGameplayAttributeSet.generated.h"

class UObject;

UCLASS(Abstract)
class UScriptGameplayAttributeSet : public UAngelscriptAttributeSet {
    GENERATED_BODY()
public:
    UScriptGameplayAttributeSet();

    UFUNCTION(BlueprintPure)
    void SendGameplayEventToEffectTarget(const FGameplayTag& EventTag, const UObject* OptionalObject, const UObject* OptionalObject2) const;
    
    UFUNCTION(BlueprintPure)
    void SendGameplayEventToEffectInstigator(const FGameplayTag& EventTag, const UObject* OptionalObject, const UObject* OptionalObject2) const;
    
    UFUNCTION(BlueprintPure)
    bool DidEffectChangeAttribute(const FAngelscriptGameplayAttributeData& Attribute) const;
    
};

