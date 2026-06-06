#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "GameplayTagContainer.h"
#include "TriggerInputBufferByTags.generated.h"

UCLASS(CollapseCategories, EditInlineNew, Config=Engine)
class G1R_API UTriggerInputBufferByTags : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float m_BufferTimeThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer m_TagsToListen;
    
    UTriggerInputBufferByTags();

};

