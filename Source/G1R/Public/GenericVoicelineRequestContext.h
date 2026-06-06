#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GenericVoicelineRequestContext.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGenericVoicelineRequestContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TagsMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TagsOther;
    
    FGenericVoicelineRequestContext();
};

