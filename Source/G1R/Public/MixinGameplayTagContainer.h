#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "MixinGameplayTagContainer.generated.h"

UCLASS()
class G1R_API UMixinGameplayTagContainer : public UObject {
    GENERATED_BODY()
public:
    UMixinGameplayTagContainer();

    UFUNCTION()
    static void RemoveTags(FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& Other);
    
    UFUNCTION()
    static void AppendTags(FGameplayTagContainer& GameplayTagContainer, const FGameplayTagContainer& Other);
    
};

