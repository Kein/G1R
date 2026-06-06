#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_RemoveTag.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_RemoveTag : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_TagToRemove;
    
    UAnimNotify_RemoveTag();

};

