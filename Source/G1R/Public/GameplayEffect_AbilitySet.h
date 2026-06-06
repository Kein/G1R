#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GameplayAbilitySpec.h"
#include "EAbilityInputID.h"
#include "ScriptGameplayEffect.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffect_AbilitySet.generated.h"

class UGameplayAbility;

UCLASS()
class G1R_API UGameplayEffect_AbilitySet : public UScriptGameplayEffect {
    GENERATED_BODY()
public:
    UGameplayEffect_AbilitySet();

    UFUNCTION(BlueprintCallable)
    void RemoveAbility(const TSubclassOf<UGameplayAbility>& Ability);
    
    UFUNCTION(BlueprintCallable)
    void AddAbility(const TSubclassOf<UGameplayAbility>& Ability, const EAbilityInputID InputID, const TEnumAsByte<EInputEvent> InputEvent, EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy);
    
};

