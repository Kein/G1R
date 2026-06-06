#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "G1RGameplayTagMixins.generated.h"

UCLASS(BlueprintType)
class G1R_API UG1RGameplayTagMixins : public UObject {
    GENERATED_BODY()
public:
    UG1RGameplayTagMixins();

    UFUNCTION(BlueprintPure)
    static FGameplayTag GetParentAtHierarchyLevel(const FGameplayTag& This, int32 Level);
    
};

