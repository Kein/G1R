#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FreepointActionTags_DEPRECATED.generated.h"

class UFreepointActionTagList;

USTRUCT(BlueprintType)
struct FFreepointActionTags_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ActionTags;
    
    UPROPERTY()
    TSubclassOf<UFreepointActionTagList> ActionTagList;
    
    G1R_API FFreepointActionTags_DEPRECATED();
};

