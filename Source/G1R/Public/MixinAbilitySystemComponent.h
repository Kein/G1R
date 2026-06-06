#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MixinAbilitySystemComponent.generated.h"

class UAbilitySystemComponent;

UCLASS(BlueprintType)
class G1R_API UMixinAbilitySystemComponent : public UObject {
    GENERATED_BODY()
public:
    UMixinAbilitySystemComponent();

    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer FindMatchingOwnedTags(const UAbilitySystemComponent* This, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag FindMatchingOwnedTag(const UAbilitySystemComponent* This, const FGameplayTag& Tag);
    
};

