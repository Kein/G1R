#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FreepointActionTagList.generated.h"

UCLASS(Abstract)
class G1R_API UFreepointActionTagList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTagContainer ActionTags;
    
    UFreepointActionTagList();

};

