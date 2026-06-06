#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIInteractionBinding.generated.h"

USTRUCT(BlueprintType)
struct FAIInteractionBinding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag TagParent;
    
    UPROPERTY(EditAnywhere)
    FString Prefix;
    
    UPROPERTY(EditAnywhere)
    bool bIsVerb;
    
    G1R_API FAIInteractionBinding();
};

