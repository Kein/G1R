#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_GameplayTagEvent.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_GameplayTagEvent : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool RemoveTag;
    
    UAnimNotify_GameplayTagEvent();

};

